// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__PMPEnable;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__RV32E;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__BranchTargetALU;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__WritebackStage;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__ICache;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__ICacheECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__BranchPredictor;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__DbgTriggerEn;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__SecureIbex;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__ICacheScramble;
const VlWide<5>/*159:0*/ Vtop___024root::ibex_top_tracing__DOT__RndCnstLfsrPerm = {{
    0x78a8daed, 0xc04fa438, 0x2e958152, 0x467fd1b1,
    0x1e35ecba
}};
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__PMPEnable;
constexpr CData/*2:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__PMPRstMsecCfg;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RV32E;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__BranchTargetALU;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__WritebackStage;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__ICache;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__ICacheECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__BranchPredictor;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DbgTriggerEn;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__SecureIbex;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__ICacheScramble;
const VlWide<5>/*159:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RndCnstLfsrPerm = {{
    0x78a8daed, 0xc04fa438, 0x2e958152, 0x467fd1b1,
    0x1e35ecba
}};
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__Lockstep;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__ResetAll;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DummyInstructions;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RegFileECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RegFileWrenCheck;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RegFileRdataMuxCheck;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__MemECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__NoFpgaGate;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__FpgaBufGlobal;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPEnable;
constexpr CData/*2:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstMsecCfg;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RV32E;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__BranchTargetALU;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__WritebackStage;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ICache;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ICacheECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__BranchPredictor;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DbgTriggerEn;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ResetAll;
const VlWide<5>/*159:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RndCnstLfsrPerm = {{
    0x78a8daed, 0xc04fa438, 0x2e958152, 0x467fd1b1,
    0x1e35ecba
}};
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__SecureIbex;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DummyInstructions;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RegFileECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__MemECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DataIndTiming;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PCIncrCheck;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ShadowCSR;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__DummyInstructions;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ICache;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ICacheECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__PCIncrCheck;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ResetAll;
const VlWide<5>/*159:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__RndCnstLfsrPerm = {{
    0x78a8daed, 0xc04fa438, 0x2e958152, 0x467fd1b1,
    0x1e35ecba
}};
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__BranchPredictor;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__MemECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__ResetAll;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__ResetAll;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__RV32E;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__DataIndTiming;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__BranchTargetALU;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__WritebackStage;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__BranchPredictor;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__MemECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__RV32E;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__BranchTargetALU;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__WritebackStage;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__BranchPredictor;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__MemECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__BranchTargetALU;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__MemECC;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__ResetAll;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__WritebackStage;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__DummyInstructions;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__DbgTriggerEn;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__DataIndTiming;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__DummyInstructions;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__ShadowCSR;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__ICache;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPEnable;
constexpr CData/*2:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstMsecCfg;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__RV32E;
constexpr CData/*5:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__MSTATUS_RST_VAL;
constexpr CData/*2:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__MSTACK_RESET_VAL;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__ShadowCopy;
constexpr CData/*5:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__ResetValue;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__ShadowCopy;
constexpr CData/*6:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__ResetValue;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__ShadowCopy;
constexpr CData/*2:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__ResetValue;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__ShadowCopy;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__ShadowCopy;
constexpr CData/*6:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__ResetValue;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__ProvideValUpd;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__ProvideValUpd;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__ShadowCopy;
constexpr CData/*7:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__ResetValue;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__RV32E;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__DummyInstructions;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__WrenCheck;
constexpr CData/*0:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__RdataMuxCheck;
constexpr CData/*4:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_tracer__DOT__RS1;
constexpr CData/*4:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_tracer__DOT__RS2;
constexpr CData/*4:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_tracer__DOT__RS3;
constexpr CData/*4:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_tracer__DOT__RD;
constexpr CData/*4:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_tracer__DOT__MEM;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__PMPGranularity;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__PMPNumRegions;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__MHPMCounterNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__MHPMCounterWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__RegFile;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__DbgHwBreakNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__RndCnstLfsrSeed;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__DmBaseAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__DmAddrMask;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__DmHaltAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__DmExceptionAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__PMPGranularity;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__PMPNumRegions;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__MHPMCounterNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__MHPMCounterWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RegFile;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DbgHwBreakNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__ICacheScrNumPrinceRoundsHalf;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RndCnstLfsrSeed;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DmBaseAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DmAddrMask;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DmHaltAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__DmExceptionAddr;
constexpr VlWide<4>/*127:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RndCnstIbexKey;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__CsrMvendorId;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__CsrMimpId;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RegFileDataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__MemDataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__BusSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__LineSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__TagSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__NumAddrScrRounds;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__Impl;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_fetch_enable_buf__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_fetch_enable_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPGranularity;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPNumRegions;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__MHPMCounterNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__MHPMCounterWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__BusSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__TagSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__LineSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DbgHwBreakNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RndCnstLfsrSeed;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RegFileDataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__MemDataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DmBaseAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DmAddrMask;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DmHaltAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__DmExceptionAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__CsrMvendorId;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__CsrMimpId;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPNumChan;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__RVFI_STAGES;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__DmHaltAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__DmExceptionAddr;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__BusSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__TagSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__LineSizeECC;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__RndCnstLfsrSeed;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__MemDataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__NUM_REQS;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__NUM_REQS;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__MemDataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__DbgHwBreakNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__MHPMCounterNum;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__MHPMCounterWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPGranularity;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPNumRegions;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__RV32M;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__RV32B;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__CsrMvendorId;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__CsrMimpId;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__RV32BExtra;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__RV32MEnabled;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPAddrWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__MISA_VALUE;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__DCSR_RESET_VAL;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__10__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__11__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__12__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__13__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__14__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__15__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__16__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__17__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__18__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__19__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__20__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__21__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__22__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__23__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__24__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__25__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__26__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__27__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__28__KET____DOT__Cnt;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__Width;
constexpr IData/*17:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__ResetValue;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__CounterWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__UseDsp;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__CounterWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__UseDsp;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__DataWidth;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__WordZeroVal;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__NUM_WORDS;
constexpr QData/*63:0*/ Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__RndCnstIbexNonce;
constexpr VlUnpacked<CData/*5:0*/, 16> Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__PMPRstCfg;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__PMPRstAddr;
constexpr VlUnpacked<CData/*5:0*/, 16> Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstCfg;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr;
constexpr VlUnpacked<CData/*5:0*/, 16> Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstCfg;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop___024root::ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
