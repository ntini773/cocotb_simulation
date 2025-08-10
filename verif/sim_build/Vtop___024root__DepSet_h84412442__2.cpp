// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h0878e820_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h174edf3f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb0896d1c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h06a033e3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_he07c4fa6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hf296277a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h72631546_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h1515b06b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hb53abbd2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_ha2da60fa_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_hc5f32d4e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9adffb8d_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_5;
    ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_5 = 0;
    CData/*0:0*/ ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_6;
    ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_6 = 0;
    CData/*0:0*/ ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h9de20463_1_2;
    ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h9de20463_1_2 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err) 
            << 2U) | ((2U & (((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                               ? ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                  >> 2U) : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err)) 
                             << 1U)) | (1U & ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                               ? ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                  >> 1U)
                                               : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err)))));
    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = (1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U];
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = (1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.instr_rdata_i;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = (IData)((((QData)((IData)(((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                      : vlSelfRef.instr_rdata_i))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                  ? 
                                                 vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                  : vlSelfRef.instr_rdata_i)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = (IData)(((((QData)((IData)(((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                       : vlSelfRef.instr_rdata_i))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                   ? 
                                                  vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                   : vlSelfRef.instr_rdata_i)))) 
                   >> 0x20U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = vlSelfRef.instr_rdata_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_7 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_fetch_err_o)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_fetch_err_o) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_priv 
        = ((3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                  >> 0x1cU)) > (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q));
    vlSelfRef.crash_dump_o[0U] = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
    vlSelfRef.crash_dump_o[1U] = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    vlSelfRef.crash_dump_o[2U] = (IData)((((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_if)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q))));
    vlSelfRef.crash_dump_o[3U] = (IData)(((((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_if)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q))) 
                                          >> 0x20U));
    vlSelfRef.crash_dump_o[4U] = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__pc_id_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x2cU;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_plus2 
        = (1U & ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? (IData)((2U == (3U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))
                  : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err) 
                     & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                        & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))));
    if ((0x40U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o 
                                                  >> 0xcU)))) {
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                                } else {
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 0U;
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o 
                                        = ((0x4000U 
                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 4U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 5U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                        } else {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 5U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                ? ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                    ? 0x1cU : 0x1aU)
                                : ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                         >> 0xdU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 0U;
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o 
                            = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_taken)
                                ? 2U : 5U);
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 3U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 0U;
                        if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                    if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                                     >> 0xcU)))) {
                                                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (0x2000000U 
                                                     & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o = 1U;
                                                            } else {
                                                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o = 1U;
                                                            }
                                                        } else if (
                                                                   (0x1000U 
                                                                    & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o = 1U;
                                                        } else {
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o = 1U;
                                                        }
                                                    } else if (
                                                               (0x2000U 
                                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o = 1U;
                                                        } else {
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o = 1U;
                                                        }
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o = 1U;
                                                    } else {
                                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                                        = 
                                                        ((0x4000U 
                                                          & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                                            ? 0xaU
                                                            : 0U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 0U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                        if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o 
                                      >> 0xeU)))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 3U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                    if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                        if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)) {
                            if ((0U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o 
                                        >> 0x1bU))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 9U;
                            } else if ((8U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_alu_id_o 
                                               >> 0x1bU))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 8U;
                            }
                        } else {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 2U;
                        }
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                ? ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                    ? 0x2cU : 0x2bU)
                                : ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)
                                    ? 0xaU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                      >> 0xcU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                    } else if ((1U == (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                             >> 0xcU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 5U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_2_6))))) {
                        if ((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_2_6))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1143: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                   >> 0xcU)));
                                VL_STOP_MT("../ibex/rtl/ibex_decoder.sv", 1143, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 1U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__out_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__inv 
        = (~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
           [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operand_b_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_wdata_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rdata_b_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_b_ecc_buf 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_rdata_b 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_b_ecc 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                      ? 0U
                                                      : vlSelfRef.hart_id_i);
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 0U
                                                    : 0x16U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        }
                    }
                }
            }
        }
    } else if ((0x400U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x200U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_ic_scr_key_valid_q) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_q)));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 2U)))) {
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_q
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_q)
                                            : ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_q
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_q));
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                             >> 2U)))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                    ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                        ? 0U : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__tmatch_value_rdata)
                                    : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                        ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__tmatch_control_rdata
                                        : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__tselect_rdata));
                        }
                    }
                }
            }
        } else if ((0x100U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x80U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x200U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x100U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x80U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                    ? ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 2U)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? (((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xfU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xdU] 
                                                   << 8U) 
                                                  | vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0xcU]))
                                            : (((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? (((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.irq_software_i) 
                                                  << 3U));
                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.irq_timer_i) 
                                                  << 7U));
                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.irq_external_i) 
                                                  << 0xbU));
                                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x8000ffffU 
                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.irq_fast_i) 
                                                  << 0x10U));
                                    }
                                }
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_q
                                            : (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))) 
                                                << 0x1fU) 
                                               | ((((0x40U 
                                                     & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))
                                                     ? 0x3ffffffU
                                                     : 0U) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))))
                                        : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_q
                                            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_q));
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                            [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit;
                }
            } else if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_q;
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xeU)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 9U)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 4U)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x10U)));
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_mstatus_mie_o) 
                              << 3U));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       << 3U)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x1800U & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         << 9U)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x20000U & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          << 0x10U)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_mstatus_tw_o) 
                              << 0x15U));
                }
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a 
        = (((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
            & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d))
            ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs3)
            : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_dbg 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_dec_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_wdata_sel_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o);
    if ((0x40U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                        >> 0x14U))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 1U;
                            } else if ((1U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                               >> 0x14U))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 1U;
                            } else if ((0x302U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                   >> 0x14U))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o = 1U;
                            } else if ((0x7b2U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                   >> 0x14U))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o = 1U;
                            } else if ((0x105U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                   >> 0x14U))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o = 1U;
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_29))))) {
                                if ((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_29))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:596: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                      >> 0x14U));
                                        VL_STOP_MT("../ibex/rtl/ibex_decoder.sv", 596, "");
                                    }
                                }
                            }
                            if (((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1)) 
                                 | (0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_waddr_wb)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_30))))) {
                                if ((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_30))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:632: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                         >> 0xcU)));
                                        VL_STOP_MT("../ibex/rtl/ibex_decoder.sv", 632, "");
                                    }
                                }
                            }
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_wdata_sel_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                          >> 0xeU)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o = 1U;
                            if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o = 1U;
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o = 1U;
                        if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o = 1U;
                        } else {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                          >> 0xcU)))) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_dec_o = 1U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0xeU))) && 
                           (1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0xdU)));
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o = 1U;
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o = 1U;
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                       >> 0x18U)) | 
                                (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                       >> 0xcU))))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x1fU)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                      >> 0x1dU)) || 
                               ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                       >> 0x1cU)) || 
                                ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                        >> 0x1bU)) 
                                 || ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x1aU)) 
                                     || ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0x19U)) 
                                         || ((0x4000U 
                                              & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)
                                              ? ((1U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (~ 
                                                        (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                         >> 0xcU))))
                                              : ((1U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                        >> 0xcU)))))))));
                    } else if ((0x20000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x4000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                        if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                            if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                                if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 3U;
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 0U;
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 3U;
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 3U;
                                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 2U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 0U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 2U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 3U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                            if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 1U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 0U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 1U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 1U;
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 3U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o = 0U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o = 0U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_14))))) {
                    if ((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_14))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:309: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                  >> 0xcU)));
                            VL_STOP_MT("../ibex/rtl/ibex_decoder.sv", 309, "");
                        }
                    }
                }
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o = 1U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o = 1U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 1U;
                if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o)) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0xcU)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 2U;
                } else if ((1U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                         >> 0xcU)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 1U;
                } else if ((2U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                         >> 0xcU)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)
                        ? ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                   >> 0xcU)) && ((1U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                                     >> 0x1aU)) 
                                                 || ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                      >> 0x1fU) 
                                                     || ((0x40000000U 
                                                          & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                                                          >> 0x19U))))))
                                                          : 
                                                         ((1U 
                                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                                                          >> 0x19U)))))))))))
                        : ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                   >> 0xcU)) && ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                  >> 0x1fU) 
                                                 || ((1U 
                                                      & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                         >> 0x1eU)) 
                                                     || ((1U 
                                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                             >> 0x1dU)) 
                                                         || ((1U 
                                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                                 >> 0x1cU)) 
                                                             || ((1U 
                                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                                     >> 0x1bU)) 
                                                                 || (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                                                                         >> 0x19U)))))))))));
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_9))))) {
                        if ((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_9))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:568: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                   >> 0xcU)));
                                VL_STOP_MT("../ibex/rtl/ibex_decoder.sv", 568, "");
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o = 1U;
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o = 1U;
                            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o = 1U;
                        }
                    } else {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_14))))) {
                if ((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgRegularize_h50863dbe_1_14))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:326: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0xcU)));
                        VL_STOP_MT("../ibex/rtl/ibex_decoder.sv", 326, "");
                    }
                }
            }
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o = 1U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o = 1U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o 
                = (1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                            >> 0xeU)));
            if ((0U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0xcU)))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 2U;
            } else if ((1U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0xcU)))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 1U;
            } else if ((2U == (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0xcU)))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o)) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_dec_o = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 0U;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_plus2_o 
        = ((1U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q) 
           && (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_plus2));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_unaligned 
            = ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                << 0x10U) | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                             >> 0x10U));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_unaligned 
            = (1U & (((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                      & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                         >> 1U)) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_unaligned 
            = ((vlSelfRef.instr_rdata_i << 0x10U) | 
               (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                >> 0x10U));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_unaligned 
            = (1U & (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                      & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                     | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err) 
                        & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                           | (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))))));
    }
    vlSelfRef.ibex_top_tracing__DOT__crash_dump_o[0U] 
        = vlSelfRef.crash_dump_o[0U];
    vlSelfRef.ibex_top_tracing__DOT__crash_dump_o[1U] 
        = vlSelfRef.crash_dump_o[1U];
    vlSelfRef.ibex_top_tracing__DOT__crash_dump_o[2U] 
        = vlSelfRef.crash_dump_o[2U];
    vlSelfRef.ibex_top_tracing__DOT__crash_dump_o[3U] 
        = vlSelfRef.crash_dump_o[3U];
    vlSelfRef.ibex_top_tracing__DOT__crash_dump_o[4U] 
        = vlSelfRef.crash_dump_o[4U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__crash_dump_o[0U] 
        = vlSelfRef.crash_dump_o[0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__crash_dump_o[1U] 
        = vlSelfRef.crash_dump_o[1U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__crash_dump_o[2U] 
        = vlSelfRef.crash_dump_o[2U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__crash_dump_o[3U] 
        = vlSelfRef.crash_dump_o[3U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__crash_dump_o[4U] 
        = vlSelfRef.crash_dump_o[4U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__crash_dump_o[0U] 
        = vlSelfRef.crash_dump_o[0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__crash_dump_o[1U] 
        = vlSelfRef.crash_dump_o[1U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__crash_dump_o[2U] 
        = vlSelfRef.crash_dump_o[2U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__crash_dump_o[3U] 
        = vlSelfRef.crash_dump_o[3U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__crash_dump_o[4U] 
        = vlSelfRef.crash_dump_o[4U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o;
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a = 0U;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__zimm_rs1_type_o;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o) 
           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_incr_req_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_sel_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__unused_mult_sel_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_sel_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o) 
           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or 
        = ((3U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o)) 
           | (6U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and 
        = ((4U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o)) 
           | (7U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_arith 
        = (8U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_rdata_b_ecc_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_b_ecc_buf;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_rdata_b;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__in_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_b_ecc;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_wdata_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_operand_b_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
        = (0xffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_rdata 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_raddr_a_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__out_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__inv 
        = (~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
           [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a]);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operand_a_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rdata_a_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_raddr_a 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_a_ecc_buf 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_rdata_a 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_a_ecc 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_icinv 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__icache_inval_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_sign_ext 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_wdata_sel_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.data_we_o = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__data_we_o = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__data_we_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_we_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_we 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__signed_mult 
        = (0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (IData)((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o) 
                    >> 1U) & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                              >> 0x1fU)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                  [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a] 
                  >> 0x1fU) & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_signed_mode_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_access_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
          | (3U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) 
         & (0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1)))) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o = 0U;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_dret_insn 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_umode_insn 
        = ((3U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
           & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o) 
              | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_mstatus_tw_o) 
                 & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_dec_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_dec 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_reg_rv32e)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_reg_rv32e));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o));
    ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_5 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
              & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o) 
              & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                 | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_err_plus2 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_plus2_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err_plus2 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_plus2_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__err_plus2_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_plus2_o;
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_incr_req_o) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_j_type))
            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_u_type
                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_type)
                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_s_type
                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_i_type)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__mult_sel_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__div_sel_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel;
    if ((1U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_unaligned;
        if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_unaligned;
        }
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
        = (0xffffU & ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                       ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                              >> 0x10U) : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex)
                       : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                              >> 0x10U) : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex)));
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_first_cycle_id) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs3_addr_d = 0U;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs3_addr_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a;
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and) 
                               << 1U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or)))))) {
        if ((0U != (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and) 
                     << 1U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:392: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("../ibex/rtl/ibex_alu.sv", 392, "");
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_operator_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex;
    __Vtableidx5 = (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_sbmode) 
                     << 7U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vtop__ConstPool__TABLE_h0878e820_0[__Vtableidx5];
    __Vtableidx3 = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop__ConstPool__TABLE_h174edf3f_0[__Vtableidx3];
    __Vtableidx2 = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtop__ConstPool__TABLE_hb0896d1c_0[__Vtableidx2];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtop__ConstPool__TABLE_hb0896d1c_0[__Vtableidx2];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtop__ConstPool__TABLE_hb0896d1c_0[__Vtableidx2];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtop__ConstPool__TABLE_h06a033e3_0[__Vtableidx2];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_b_ecc_buf__DOT__in_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_b_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_operand_b_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_rdata_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_rdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__raddr_a_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_raddr_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_rdata_a_ecc_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_a_ecc_buf;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_rdata_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__in_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__rf_rdata_a_ecc;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_operand_a_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
        = (0xffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__alu_operand_b_o 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                   << 1U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a
                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_last
                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__icache_inval_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_sign_ext_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_sign_ext;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
        = (0xffffU & ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                       ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                              >> 0x10U) : (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x10U))
                       : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs3_data_d 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_first_cycle_id)
            ? 0U : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
    if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__alu_operand_b_o 
                = ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__alu_operand_b_o 
            = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                                                  << 1U))));
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:425: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
                VL_STOP_MT("../ibex/rtl/ibex_id_stage.sv", 425, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)) 
                                << 1U) | (0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_core.sv:1733: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type));
                VL_STOP_MT("../ibex/rtl/ibex_core.sv", 1733, "");
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o 
        = ((1U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_unaligned)
            : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int 
        = ((0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type))
            ? 0xfU : ((1U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type))
                       ? 3U : ((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type))
                                ? 1U : 0U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_type_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_we_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_we;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__rem_change_sign 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_change_sign 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
           & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
              ^ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_signed_mode_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_signed_mode_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_signed_mode_ex) 
                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x1fU))
                                     : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_signed_mode_ex) 
                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x1fU)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_access_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_op_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o)) 
           | ((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o)) 
              | (3U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_dec;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn;
    __Vtableidx1 = ((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vtop__ConstPool__TABLE_he07c4fa6_0[__Vtableidx1];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtop__ConstPool__TABLE_hf296277a_0[__Vtableidx1];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtop__ConstPool__TABLE_h72631546_0[__Vtableidx1];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtop__ConstPool__TABLE_h1515b06b_0[__Vtableidx1];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtop__ConstPool__TABLE_hb53abbd2_0[__Vtableidx1];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtop__ConstPool__TABLE_ha2da60fa_0[__Vtableidx1];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_operator_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__expecting_load_resp_o 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o)) 
           & (IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_5));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__expecting_store_resp_o 
        = ((IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_5) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_is_compressed_out 
        = (3U != (3U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_next 
        = (0x7fffffffU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                          + ((2U & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                    << 1U)) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nt_branch_mispredict_o)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel)
            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b
            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
           [vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_sel_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__mult_sel_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sel_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__div_sel_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operator_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_operator_i;
    if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_signed_mode_ex) 
                            >> 1U) & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                                      >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
                = (1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_ready_id)));
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U] 
                                                          >> 0x10U))))));
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__signed_mult) 
                                                             & (IData)(
                                                                       (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else if ((0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
                = (1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_ready_id)));
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U] 
                                                      >> 0x10U)))));
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                [0U];
        }
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_signed_mode_ex) 
                            >> 1U) & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                                      >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U] 
                                                      >> 0x10U)))));
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0ULL;
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                               << 1U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)))))) {
        if ((0U != (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                     << 1U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:97: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("../ibex/rtl/ibex_alu.sv", 97, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                << 1U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel))))))) {
        if ((0U != ((((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:85: Assertion failed in %Nibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("../ibex/rtl/ibex_alu.sv", 85, "");
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_rf_rdata_a_ecc_buf__DOT__in_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_a_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_operand_a_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__alu_operand_b_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                << 0x1fU) | (0x40000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 1U)) | (0x4000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 9U)) | (0x400U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            >> 0x19U)) | (4U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 0x1dU)) | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU))))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_wdata 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__signed_mode_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_signed_mode_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_write 
        = ((3U == (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_rdata_id_o 
                   >> 0x1eU)) & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_d 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__trigger_match_o)
            ? 2U : (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                     & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                     ? 1U : ((IData)(vlSelfRef.debug_req_i)
                              ? 3U : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                       ? 4U : 0U))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__operator_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_operator_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed 
        = (0x7ffffffffULL & (VL_MULS_QQQ(35, (0x7ffffffffULL 
                                              & VL_EXTENDS_QI(35,17, 
                                                              (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                         (0x7ffffffffULL 
                                          & VL_EXTENDS_QI(35,17, 
                                                          (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                             + VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_valid 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__expecting_load_resp_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__expecting_load_resp_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_check_mem_response__DOT__unused_expecting_load_resp_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__expecting_load_resp_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__expecting_store_resp_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__expecting_store_resp_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_check_mem_response__DOT__unused_expecting_store_resp_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__expecting_store_resp_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_is_compressed 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_is_compressed_out;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_is_compressed_out;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 0U;
    if ((2U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
        if ((1U & (~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))) {
            if ((0x8000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                    if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                     << 0x12U)))) 
                                           | (0xe00U 
                                              & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)));
                    }
                    if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                            = ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 8U)))));
                    }
                    if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                    } else if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                 >> 7U)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                            }
                        }
                    }
                }
            } else if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)))));
                }
                if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                } else if ((0U == (0x1fU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            >> 7U)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x1013U | ((0x1f00000U & 
                                       (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))));
                }
                if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                } else if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
        if ((0x8000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
            if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                           << 8U)) 
                                                       | (((0x1000U 
                                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                               >> 1U)) 
                                                           | (0xc00U 
                                                              & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) 
                                                          | ((0x300U 
                                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                                   >> 5U)))))))));
            } else if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x6fU | (((((0x80000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))));
            } else if ((0x800U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                if ((0x400U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                    if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                  >> 0xcU)))) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                            = ((0x40U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)
                                ? ((0x20U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)))))
                                : ((0x20U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))))));
                    }
                } else {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x47413U | (((((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                         >> 0xcU)))) 
                                          << 0x1aU) 
                                         | (0x2000000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 0xdU))) 
                                        | (0x1f00000U 
                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                              << 0x12U))) 
                                       | ((0x38000U 
                                           & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                              << 8U)) 
                                          | (0x380U 
                                             & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))));
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x45413U | ((0x40000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x14U)) 
                                   | (((0x1f00000U 
                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                           << 0x12U)) 
                                       | (0x38000U 
                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                             << 8U))) 
                                      | (0x380U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))));
            }
            if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                        if ((0x400U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                            if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                    }
                }
            }
        } else if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
            if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata))));
                if ((2U == (0x1fU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                     >> 7U)))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       (((0x18000000U 
                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                             << 0x18U)) 
                                         | (0x4000000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 0x15U))) 
                                        | ((0x2000000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 0x17U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                 << 0x12U))))));
                }
                if ((0U == ((0x20U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                    >> 2U))))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
            } else {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)))));
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                = ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)
                    ? (0x6fU | (((((0x80000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))))
                    : (0x13U | ((((- (IData)((1U & 
                                              (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               >> 0xcU)))) 
                                  << 0x1aU) | ((0x2000000U 
                                                & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                     << 0x12U)))) 
                                | ((0xf8000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                << 8U)) 
                                   | (0xf80U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)))));
        }
    } else if ((0x8000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
        if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
            if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                          >> 0xdU)))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x842023U | ((((0x4000000U & 
                                       (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                        << 0x15U)) 
                                      | (0x2000000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0xdU))) 
                                     | (0x700000U & 
                                        (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                         << 0x12U))) 
                                    | ((0x38000U & 
                                        (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                         << 8U)) | 
                                       ((0xc00U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata) 
                                        | (0x200U & 
                                           (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 3U))))));
            }
            if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
        }
    } else if ((0x4000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
        if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                      >> 0xdU)))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                = (0x42403U | ((0x4000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                      >> 0xdU)))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                = (0x10413U | ((0x3c000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                            << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata)) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
        } else if ((0U == (0xffU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_rdata 
                                    >> 5U)))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_err_out 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_bus_err 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_err 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__err_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__if_instr_valid 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__unused_valid 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_len 
        = ((0x10U & ((~ (IData)((0U != (0xfU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                                >> 0x18U))))) 
                     << 4U)) | (0xfU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                        >> 0x18U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_operand_b_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_off 
        = (0x1fU & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                    >> 0x10U));
    ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h9de20463_1_2 
        = ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
            >> 5U) & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_funnel));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl 
        = (0x3fU & ((IData)(0x20U) - (0x1fU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_neg 
        = (0x1ffffffffULL & (~ ((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                << 1U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_operand_b_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_wdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_wdata) 
                   & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_o)
                : (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_wdata 
                   | vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_o))
            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_wdata);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_operand_a_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o) 
           & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_write) 
                 | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_priv) 
                    | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_dbg)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_ext 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__unused_mac_res_ext 
        = (1U & (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed 
                         >> 0x22U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res 
        = (0x3ffffffffULL & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__valid_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_valid;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_out 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_instr_out 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__valid_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__unused_valid;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_operand_b_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_amt_compl 
        = (1U & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl) 
                 >> 5U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (((IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h9de20463_1_2) 
            << 5U) | (0x1fU & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_op)
                                ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_off)
                                : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                    ? ((IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h9de20463_1_2)
                                        ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl)
                                        : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)
                                    : ((IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h9de20463_1_2)
                                        ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex
                                        : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl))))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate)
            ? (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_neg 
                       >> 1U)) : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_data_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_data_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_data_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata_raw 
        = (0xffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_no_dit__DOT__unused_dit 
        = (1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 1U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_no_dummy__DOT__unused_dummy_mask 
        = (7U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 3U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
        = ((0x20000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        << 0xeU)) | ((0x10000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 9U)) 
                                     | ((0x8000U & 
                                         (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          << 4U)) | 
                                        (0x7fffU & 
                                         (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x10U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_no_dummy__DOT__unused_dummy_en 
        = (1U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 2U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_no_icache__DOT__unused_icen 
        = (1U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = (0xc0U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_operand_a_i;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_csr_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_perf_count_id 
        = (1U & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o)) 
                 & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o)) 
                    & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)) 
                       & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
                          & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_fetch_err_o)))))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_o 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id) 
              | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o) 
                 | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_dret_insn) 
                    | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_umode_insn)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
            ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res
                : ((0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))
                    ? (((QData)((IData)((0xffffU & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res)))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                               [0U])))))
                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res))
            : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? ((0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))
                    ? (((QData)((IData)((0xffffU & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res)))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                               [0U])))))
                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res)
                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res));
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_a 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid 
            = (1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_valid));
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_a 
            = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                ? (1ULL | ((QData)((IData)((0x7fffffffU 
                                            & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex))) 
                           << 2U)) : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                       ? (1ULL | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex))) 
                                                  << 3U))
                                       : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                           ? (1ULL 
                                              | ((QData)((IData)(
                                                                 (0x1fffffffU 
                                                                  & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex))) 
                                                 << 4U))
                                           : (1ULL 
                                              | ((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex)) 
                                                 << 1U)))));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_we_o)))));
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ex_valid_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o)
            ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_a_ex);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_ones) 
                                                              | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_arith) 
                                                                 & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                    >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff8U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((4U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                     >> 0x1bU)) | ((2U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 0x1dU)) 
                                   | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x1fU))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffc7U & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0x15U)) | ((0x10U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x17U)) 
                                      | (8U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x19U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffe3fU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 0xfU)) | ((0x80U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x13U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff1ffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 9U)) | ((0x400U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0xdU)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff8fffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          >> 3U)) | ((0x2000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   >> 7U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffc7fffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 3U)) | ((0x10000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 1U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffe3ffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 9U)) | ((0x80000U & 
                                        (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 5U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff1fffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0xbU)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf8ffffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x11U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xc7ffffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  << 0x17U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x3fffffffU & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
               << 0x1fU) | (0x40000000U & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                           << 0x1dU))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or_result 
        = (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
           | vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result 
        = (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
           & vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_xor_result 
        = (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
           ^ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
            : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_neg
                : ((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                   << 1U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_a 
                             + vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_data_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__instr_perf_count_id_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_perf_count_id;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_perf_count_id_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_perf_count_id;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__unused_illegal_insn_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_o;
    ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_6 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_o)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_7));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__illegal_insn_o) 
           & (6U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or)
            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or_result
            : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and)
                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result
                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_xor_result));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__alu_adder_ext_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__unused_alu_adder_ext 
        = ((2U & ((IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                           >> 0x21U)) << 1U)) | (1U 
                                                 & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)));
    vlSelfRef.data_addr_o = ((IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                      >> 3U)) << 2U);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset 
        = (3U & (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                         >> 1U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__is_greater_equal 
        = (1U & (((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex) 
                  >> 0x1fU) ? ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                >> 0x1fU) ^ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                  : (~ (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 0x20U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o 
        = (IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                   >> 1U));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_d 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_incr_req_o)
            ? vlSelfRef.data_addr_o : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a 
        = ((IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_6) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b 
        = ((IData)(ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h46f65498_0_6) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_result 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o)
            ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                      [0U]) : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__multdiv_result_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_result;
    vlSelfRef.ibex_top_tracing__DOT__data_addr_o = vlSelfRef.data_addr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__data_addr_o 
        = vlSelfRef.data_addr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_addr_o 
        = vlSelfRef.data_addr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_addr_o 
        = vlSelfRef.data_addr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_addr_w_aligned 
        = vlSelfRef.data_addr_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata 
        = ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset))
            ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset))
                ? ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                    << 0x18U) | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                 >> 8U)) : ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                             << 0x10U) 
                                            | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                               >> 0x10U)))
            : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset))
                ? ((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                    << 8U) | (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                              >> 0x18U)) : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata));
    __Vtableidx6 = (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset) 
                                << 2U) | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_type)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = Vtop__ConstPool__TABLE_hc5f32d4e_0[__Vtableidx6];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o)) 
            & (0U != (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset))) 
           | ((1U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o)) 
              & (3U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_offset))));
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__one_shift)));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                      [0U]);
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__alu_adder_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__branch_target_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__res_adder_h 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_addr 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_adder_result_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_first_cycle_id) {
        if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_a;
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d = 0U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d = 0U;
        }
        if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_raddr_b;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d 
                = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex;
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d = 0U;
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d = 0U;
        }
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_adder_result_ex;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q;
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__branch_target_ex 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result 
        = (0U == vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__gen_no_regfile_ecc__DOT__unused_rf_ren_a 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__gen_no_regfile_ecc__DOT__unused_rf_ren_b 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_trap_id 
        = (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
            | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu)) 
           & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
                 & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_exception_o 
        = ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wb_exception_o)) 
           & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_pc_change 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
           | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
              | ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                 | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err))));
    vlSelfRef.data_wdata_o = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.ibex_top_tracing__DOT__data_wdata_o = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__data_wdata_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__data_wdata_core 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_wdata_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.data_be_o = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.ibex_top_tracing__DOT__data_be_o = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__data_be_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_be_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__adder_result_ex_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_adder_result_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__branch_target_ex_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__branch_target_ex;
    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o
                        : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
            }
        }
        if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o
                        : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1U] 
        = (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__equal_to_zero_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__is_equal_result_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))) {
                    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result;
                }
            }
        }
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
    if ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))
                        ? ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_change_sign)
                            ? (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o))
                            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                           [0U]) : ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__rem_change_sign)
                                     ? (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ex_o))
                                     : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))
                                               ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
            = ((2U == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))
                ? 0x3ffffffffULL : (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex)));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0U] 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o)
            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operator_ex))
                                                   ? 
                                                  (((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_ind_timing)) 
                                                    & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_ind_timing)) 
                                                    & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result))
                                                    ? 6U
                                                    : 1U)))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__is_equal 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_exception 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_exception_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_no_stall_mem__DOT__unused_id_exception 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_exception_o;
    __Vtableidx4 = ((0x200U & ((~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_is_equal_result)) 
                               << 9U)) | (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__is_greater_equal) 
                                           << 8U) | 
                                          (((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__is_equal) 
                                            << 7U) 
                                           | (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))));
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vtop__ConstPool__TABLE_h9adffb8d_0[__Vtableidx4];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o
        [0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o
        [1U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__branch_decision_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_cmp_result 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__comparison_result_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__result_o = 0U;
    if ((0x40U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex)))) {
                                vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__result_o 
                                    = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__result_o 
            = ((0x20U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                ? ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                    ? ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                        ? ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__clmul_result)
                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__clmul_result))
                        : ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result)
                                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__singlebit_result))
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__singlebit_result
                                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__singlebit_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result))))
                    : ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                        ? ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                    : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bitcnt_result))
                                : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bitcnt_result)))
                        : ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__sext_result
                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__pack_result)
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__pack_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__minmax_result)
                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__minmax_result))))
                : ((0x10U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                    ? ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                        ? ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__minmax_result
                                    : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                : (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result)))
                        : ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result
                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__xperm_result)
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__xperm_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shuffle_result)
                                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shuffle_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__rev_result))))
                    : ((8U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                        ? ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__rev_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result)
                                : ((1U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                    ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                        : ((4U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                            ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                            : ((2U & (IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operator_ex))
                                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result)))));
    }
    if (vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[0U] 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d
            [0U];
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[1U] 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d
            [1U];
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_result;
    } else {
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[0U] 
            = (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [0U]));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[1U] 
            = (QData)((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [1U]));
        vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex 
            = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__result_o;
    }
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__branch_decision 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__result_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__branch_decision;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o
        [0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o
        [1U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__result_ex_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__result_ex_o 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o 
        = ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_rdata
                : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex)
            : vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex);
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex
        [0U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex
        [1U];
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o;
    vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_id_i 
        = vlSelfRef.ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id;
}
