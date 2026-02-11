# test_cpu.py
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer # Added Timer

# # Your existing utility functions are fine
# def binary_to_hex(bin_str):
#     try:
#         return hex(int(str(bin_str), 2))[2:].zfill(8).upper()
#     except:
#         return "XXXXXXXX"

# async def cpu_reset(dut):
#     dut.rst_n.value = 0
#     await RisingEdge(dut.clk)
#     await RisingEdge(dut.clk)
#     await Timer(100, units="ps") # Small offset to avoid race conditions
#     dut.rst_n.value = 1
#     # Wait for the next edge where PC will actually latch 0
#     await RisingEdge(dut.clk)
#     await Timer(1, units="ps") # Let signals settle
#     print(f"Reset Released. PC is: {dut.pc.value}")

# @cocotb.test()
# async def cpu_store_test(dut):
#     """Combined LW and SW test to verify datapath continuity"""
#     # 1. Start Clock
#     cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    
#     # 2. Reset Sequence
#     await cpu_reset(dut)

#     ##################
#     # LOAD WORD (LW) - Execution
#     ##################
#     print("\n--- STAGE 1: LW x18, 0x8(x0) ---")
    
#     # After reset, PC is 0. Instruction is LW.
#     # We need ONE clock edge to latch the result into the RegFile.
#     await RisingEdge(dut.clk)
#     await Timer(1, units="ps") # Allow RegFile write to commit
    
#     reg_x18 = binary_to_hex(dut.regfile.registers[18].value)
#     print(f"PC after LW: {dut.pc.value}, x18 contains: {reg_x18}")
#     assert reg_x18 == "DEADBEEF", f"LW failed! x18 has {reg_x18}"

#     ##################
#     # STORE WORD (SW)
#     ##################
#     print("\n--- STAGE 2: SW x18, 0xC(x0) ---")
#     test_address = 3 # 0xC / 4

#     # 1. At this point, the PC just changed to 4. 
#     # 2. WAIT 1ps to let combinational logic (Control/ALU) settle
#     await Timer(1, units="ps")

#     # 3. NOW check the "Initial" value. 
#     # The clock has not ticked again yet, so the memory hasn't stored the new data.
#     init_mem = binary_to_hex(dut.data_memory.mem[test_address].value)
#     print(f"Memory at 0xC BEFORE the clock tick: {init_mem}")
#     assert init_mem == "F2F2F2F2" 

#     # 4. NOW trigger the clock edge that actually PERFORMS the write
#     await RisingEdge(dut.clk)
    
#     # 5. Wait 1ps for the memory array update to "commit" in the simulator
#     await Timer(1, units="ps")

#     final_mem = binary_to_hex(dut.data_memory.mem[test_address].value)
#     print(f"Memory at 0xC AFTER the clock tick: {final_mem}")
#     assert final_mem == "DEADBEEF"

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

# @cocotb.coroutine
async def cpu_reset(dut):
    # Init and reset
    dut.rst_n.value = 0
    await RisingEdge(dut.clk)     # Wait for a clock edge after reset
    dut.rst_n.value = 1           # De-assert reset
    await RisingEdge(dut.clk)     # Wait for a clock edge after reset

@cocotb.test()
async def cpu_insrt_test(dut):
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

    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)
    # Check the value of mem[0xC]
    assert binary_to_hex(dut.data_memory.mem[test_address].value) == "DEADBEEF"