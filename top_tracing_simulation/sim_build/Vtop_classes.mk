# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop__Dpi_Export__0 \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_h84412442__1 \
	Vtop___024root__DepSet_h84412442__2 \
	Vtop___024root__DepSet_heccd7ead__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_prim_cipher_pkg__Slow \
	Vtop_prim_cipher_pkg__DepSet_hce5e830c__0__Slow \
	Vtop_prim_secded_pkg__Slow \
	Vtop_prim_secded_pkg__DepSet_h7cf08a0b__0__Slow \
	Vtop_ibex_tracer_pkg__Slow \
	Vtop_ibex_tracer_pkg__DepSet_hbc5360cf__0__Slow \
	Vtop_prim_mubi_pkg__Slow \
	Vtop_prim_mubi_pkg__DepSet_haaeee078__0__Slow \
	Vtop_prim_ram_2p_pkg__Slow \
	Vtop_prim_ram_2p_pkg__DepSet_h12ab08a0__0__Slow \
	Vtop_ibex_pkg__Slow \
	Vtop_ibex_pkg__DepSet_h77d8359a__0__Slow \
	Vtop_prim_ram_1p_pkg__Slow \
	Vtop_prim_ram_1p_pkg__DepSet_hd95e5567__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \
	Vtop__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
