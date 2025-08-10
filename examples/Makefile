SIM ?= ICARUS
TOPLEVEL_LANG ?= verilog

PWD = $(shell pwd)

VERILOG_SOURCES = $(PWD)/simple_dut.v

TOPLEVEL = simple_dut
MODULE = testbench
COCOTB_HDL_TIMEUNIT = 1ns
COCOTB_HDL_TIMEPRECISION = 1ps

include $(shell cocotb-config --makefiles)/Makefile.sim