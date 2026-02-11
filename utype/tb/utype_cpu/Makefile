# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs
WAVES = 1

# Update this section in your Makefile
# VERILOG_SOURCES += $(PWD)/../../src/cpu.sv
VERILOG_SOURCES += $(PWD)/../../src/control.sv
VERILOG_SOURCES += $(PWD)/../../src/regfile.sv
VERILOG_SOURCES += $(PWD)/../../src/memoryInit.sv
VERILOG_SOURCES += $(PWD)/../../src/signext.sv
VERILOG_SOURCES += $(PWD)/../../src/alu.sv

VERILOG_SOURCES += $(PWD)/../../utype/utype.sv
# use VHDL_SOURCES for VHDL files
# Enable all warnings, treat width mismatches as errors
COMPILE_ARGS += -Wall
COMPILE_ARGS += -Werror-WIDTH
COMPILE_ARGS += -Werror-LATCH
COMPILE_ARGS += -Werror-COMBDLY

# Keeps other non-critical warnings from stopping the build 
# (like unused signals which are common in CPUs)
COMPILE_ARGS += -Wno-fatal --exe --build

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = cpu

# MODULE is the basename of the Python test file
MODULE = test_utype_cpu
# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim
