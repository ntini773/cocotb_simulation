TOPLEVEL_LANG = verilog
TOPLEVEL = ibex_top_tracing
MODULE = testbench
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
    ../ibex/rtl/ibex_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_cipher_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_count_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_mubi_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_util_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_1p_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_pkg.sv \
    ../ibex/rtl/ibex_tracer_pkg.sv \
    ../ibex/rtl/ibex_top_tracing.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_2p_pkg.sv \
    ../ibex/vendor/lowrisc_ip/dv/sv/dv_utils/dv_fcov_macros.svh \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim_generic/rtl/prim_generic_buf.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim_generic/rtl/prim_generic_ram_2p.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_2p_adv.sv \
    ../ibex/shared/rtl/bus.sv \
    ../ibex/shared/rtl/ram_2p.sv \
    ../ibex/shared/rtl/timer.sv \
    ../ibex/shared/rtl/sim/simulator_ctrl.sv \
    ../ibex/rtl/ibex_decoder.sv \
    ../ibex/rtl/ibex_controller.sv \
    ../ibex/rtl/ibex_register_file_ff.sv \
    ../ibex/rtl/ibex_compressed_decoder.sv \
    ../ibex/rtl/ibex_cs_registers.sv \
    ../ibex/rtl/ibex_ex_block.sv \
    ../ibex/rtl/ibex_fetch_fifo.sv \
    ../ibex/rtl/ibex_multdiv_fast.sv \
    ../ibex/rtl/ibex_id_stage.sv \
    ../ibex/rtl/ibex_wb_stage.sv \
    ../ibex/rtl/ibex_core.sv \
    ../ibex/rtl/ibex_top.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_clock_gating_sync.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_clock_gp_mux2.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_intr_hw.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_lfsr.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_22_16_dec.sv \
    ../ibex/dv/uvm/core_ibex/common/prim/prim_pkg.sv \
    ../ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_2p.sv\

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

EXTRA_ARGS += $(VERILATOR_ARGS)
SIM_ARGS = $(EXTRA_ARGS)
export EXTRA_ARGS

include $(shell cocotb-config --makefiles)/Makefile.sim
