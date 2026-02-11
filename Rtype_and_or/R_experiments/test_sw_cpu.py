# test_cpu.py

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

def binary_to_hex(bin_str):
    # Convert binary string to hexadecimal
    hex_str = hex(int(str(bin_str), 2))[2:]
    hex_str = hex_str.zfill(8)
    return hex_str.upper()

def hex_to_bin(hex_str):
    # Convert hex str to bin
    bin_str = bin(int(str(hex_str), 16))[2:]
    bin_str = bin_str.zfill(32)
    return bin_str.upper()

async def cpu_reset(dut):
    dut.rst_n.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    
    # Change rst_n slightly BEFORE the next clock edge
    await cocotb.triggers.Timer(100, units="ps") 
    dut.rst_n.value = 1 
    
    # Now wait for the edge where PC should move to 4
    await RisingEdge(dut.clk)
    print(f"PYTHON CHECK: rst_n is now {dut.rst_n.value}")

@cocotb.test()
# async def cpu_load_test(dut): ### load passes the test, but supresses the error  messages for store, so test with just one cocotbtest
async def cpu_store_test(dut):
    """Runs a lw datapath test"""
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    await RisingEdge(dut.clk)
    await cpu_reset(dut)

    ##################
    # LOAD WORD TEST 
    # lw x18 0x8(x0)
    ##################
    print("\n\nTESTING LW\n\n")

    # The first instruction for the test in imem.hex load the data from
    # dmem @ adress 0x00000008 that happens to be 0xDEADBEEF into register x18

    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)

    # Check the value of reg x18
    assert binary_to_hex(dut.regfile.registers[18].value) == "DEADBEEF"
    print(f"PYTHON CHECK: rst_n at lw is {dut.rst_n.value}")



# @cocotb.test()
# async def cpu_store_test(dut):
    ##################
    # STORE WORD TEST 
    # sw x18 0xC(x0)
    ##################
    print("\n\nTESTING SW\n\n")
    test_address = int(0xC / 4) #mem is byte adressed but is made out of words in the eyes of the software
    # The second instruction for the test in imem.hex stores the data from
    # x18 (that happens to be 0xDEADBEEF from the previous LW test) @ adress 0x0000000C 

    # First, let's check the inital value
    assert binary_to_hex(dut.data_memory.mem[test_address].value) == "F2F2F2F2"
    print(f"first value {binary_to_hex(dut.data_memory.mem[test_address].value)}")
    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)
    # await RisingEdge(dut.clk)
    # await RisingEdge(dut.clk)
    # Check the value of mem[0xC]

    # await RisingEdge(dut.clk)
    # await cocotb.triggers.Timer(1, units="ps")
    # TESTING SW
    await RisingEdge(dut.clk) # Finish LW, Start SW fetch
    # await RisingEdge(dut.clk) # Execute SW (this is where the write happens)
    # await cocotb.triggers.Timer(1, units="ps") # Wait for Verilator to commit the array change
    print(f"PYTHON CHECK: rst_n for sw is {dut.rst_n.value}")
    print(f"PYTHON CHECK: pc now is {dut.pc.value}")
    # Now check the memory
    val = binary_to_hex(dut.data_memory.mem[3].value)
    print(f"Memory at 0xC is: {val}")

    await RisingEdge(dut.clk)
    # await Timer(1, units="ps")
    assert binary_to_hex(dut.data_memory.mem[test_address].value) == "DEADBEEF"



