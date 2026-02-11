import cocotb
from cocotb.triggers import Timer
import random
# from cocotb.binary import BinaryValue
from cocotb.types import LogicArray



@cocotb.test()
async def control_test(dut):
    await Timer(1, units="ns")
    dut.op.value = LogicArray("XXXXXXX")
    await Timer(1, units="ns")

    # TEST CONTROL SIGNALS FOR LW
    await Timer(1, units="ns")
    dut.op.value = 0b0000011 #lw
    await Timer(1, units="ns")
    assert dut.alu_control.value == "000"
    assert dut.imm_source.value == "00"
    assert dut.mem_write.value == "0"
    assert dut.reg_write.value == "1"