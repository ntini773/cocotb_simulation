TOPLEVEL_LANG = verilog
TOPLEVEL = ibex_top_tracing
MODULE = top
SIM = verilator

INCLUDE_DIRS = \
    -I../ibex/vendor/lowrisc_ip/ip/prim/rtl \
    -I../ibex/vendor/lowrisc_ip/dv/sv/dv_utils \
    -I../ibex/rtl \
    -I../ibex/shared/rtl \
    -I../ibex/shared/rtl/sim \
    -I../ibex/dv/uvm/core_ibex/common/prim \
    -I../ibex/vendor/lowrisc_ip/ip/prim_generic/rtl

VERILOG_SOURCES = \
    ../ibex/rtl/*.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/*.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim_generic/rtl/*.sv \
    ../ibex/shared/rtl/*.sv \
    ../ibex/shared/rtl/sim/*.sv \
    ../ibex/dv/uvm/core_ibex/common/prim/*.sv \
    ../ibex/vendor/lowrisc_ip/dv/sv/dv_utils/*.svh

VERILATOR_ARGS = \
    --trace \
    --trace-structs \
    --timing \
    --trace-underscore \
    --timescale 1ns/1ps \
    --assert \
    -Wno-fatal \
    -Wno-UNOPTFLAT \
    -Wno-WIDTH \
    -Wno-CASEINCOMPLETE \
    -Wno-UNSIGNED \
    -Wno-INITIALDLY \
    --language 1800-2017 \
    $(INCLUDE_DIRS)

# Enable RVFI interface
COMPILE_ARGS += -DRVFI
export COMPILE_ARGS

# # ELF file path for simulation
# ifndef ELF_PATH
# $(error You must specify ELF_PATH, e.g. 'make ELF_PATH=./my_test.o')
# endif
# ELF_PATH ?= ./ibex_load_instr_test_0.o
# export ELF_PATH

# # PLUSARGS ?= +ELF_PATH=./ibex_load_instr_test_0.o
# PLUSARGS ?= +ELF_PATH=$(ELF_PATH)

EXTRA_ARGS += $(VERILATOR_ARGS)
SIM_ARGS = $(EXTRA_ARGS) $(PLUSARGS)
export EXTRA_ARGS

# Set Python path for PyUVM modules
# export PYTHONPATH := $(PWD):$(PWD)/env:$(PWD)/agents/spike_agent:$(PWD)/utils:$(PYTHONPATH)

include $(shell cocotb-config --makefiles)/Makefile.sim

# Clean target
clean-all:
	rm -rf sim_build/
	rm -rf __pycache__/
	rm -rf .pytest_cache/
	rm -rf agents/__pycache__/
	rm -rf agents/rvfi_agent/__pycache__/
	rm -rf env/__pycache__/
	rm -rf utils/__pycache__/
	rm -f results.xml
	rm -f dump.vcd
	rm -f dump.fst
	rm -f *.log
	find . -name "*.pyc" -delete
	find . -name "__pycache__" -type d -exec rm -rf {} + 2>/dev/null || true

# Help target
help:
	@echo "Available targets:"
	@echo "  make          - Run the PyUVM basic test"
	@echo "  make clean    - Clean all simulation artifacts"
	@echo "  make help     - Show this help message"

# Run specific test
test: clean
	$(MAKE) MODULE=test_basic

.PHONY: clean help test
