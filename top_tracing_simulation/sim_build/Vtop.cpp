// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_en_i{vlSymsp->TOP.test_en_i}
    , scan_rst_ni{vlSymsp->TOP.scan_rst_ni}
    , instr_req_o{vlSymsp->TOP.instr_req_o}
    , instr_gnt_i{vlSymsp->TOP.instr_gnt_i}
    , instr_rvalid_i{vlSymsp->TOP.instr_rvalid_i}
    , instr_rdata_intg_i{vlSymsp->TOP.instr_rdata_intg_i}
    , instr_err_i{vlSymsp->TOP.instr_err_i}
    , data_req_o{vlSymsp->TOP.data_req_o}
    , data_gnt_i{vlSymsp->TOP.data_gnt_i}
    , data_rvalid_i{vlSymsp->TOP.data_rvalid_i}
    , data_we_o{vlSymsp->TOP.data_we_o}
    , data_be_o{vlSymsp->TOP.data_be_o}
    , data_wdata_intg_o{vlSymsp->TOP.data_wdata_intg_o}
    , data_rdata_intg_i{vlSymsp->TOP.data_rdata_intg_i}
    , data_err_i{vlSymsp->TOP.data_err_i}
    , irq_software_i{vlSymsp->TOP.irq_software_i}
    , irq_timer_i{vlSymsp->TOP.irq_timer_i}
    , irq_external_i{vlSymsp->TOP.irq_external_i}
    , irq_nm_i{vlSymsp->TOP.irq_nm_i}
    , scramble_key_valid_i{vlSymsp->TOP.scramble_key_valid_i}
    , scramble_req_o{vlSymsp->TOP.scramble_req_o}
    , debug_req_i{vlSymsp->TOP.debug_req_i}
    , double_fault_seen_o{vlSymsp->TOP.double_fault_seen_o}
    , fetch_enable_i{vlSymsp->TOP.fetch_enable_i}
    , alert_minor_o{vlSymsp->TOP.alert_minor_o}
    , alert_major_internal_o{vlSymsp->TOP.alert_major_internal_o}
    , alert_major_bus_o{vlSymsp->TOP.alert_major_bus_o}
    , core_sleep_o{vlSymsp->TOP.core_sleep_o}
    , ram_cfg_i{vlSymsp->TOP.ram_cfg_i}
    , irq_fast_i{vlSymsp->TOP.irq_fast_i}
    , hart_id_i{vlSymsp->TOP.hart_id_i}
    , boot_addr_i{vlSymsp->TOP.boot_addr_i}
    , instr_addr_o{vlSymsp->TOP.instr_addr_o}
    , instr_rdata_i{vlSymsp->TOP.instr_rdata_i}
    , data_addr_o{vlSymsp->TOP.data_addr_o}
    , data_wdata_o{vlSymsp->TOP.data_wdata_o}
    , data_rdata_i{vlSymsp->TOP.data_rdata_i}
    , scramble_key_i{vlSymsp->TOP.scramble_key_i}
    , scramble_nonce_i{vlSymsp->TOP.scramble_nonce_i}
    , crash_dump_o{vlSymsp->TOP.crash_dump_o}
    , __PVT__prim_cipher_pkg{vlSymsp->TOP.__PVT__prim_cipher_pkg}
    , __PVT__prim_secded_pkg{vlSymsp->TOP.__PVT__prim_secded_pkg}
    , __PVT__ibex_tracer_pkg{vlSymsp->TOP.__PVT__ibex_tracer_pkg}
    , __PVT__prim_mubi_pkg{vlSymsp->TOP.__PVT__prim_mubi_pkg}
    , __PVT__prim_ram_2p_pkg{vlSymsp->TOP.__PVT__prim_ram_2p_pkg}
    , __PVT__ibex_pkg{vlSymsp->TOP.__PVT__ibex_pkg}
    , __PVT__prim_ram_1p_pkg{vlSymsp->TOP.__PVT__prim_ram_1p_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
