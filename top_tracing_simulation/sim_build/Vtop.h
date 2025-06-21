// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_ibex_pkg;
class Vtop_ibex_tracer_pkg;
class Vtop_prim_cipher_pkg;
class Vtop_prim_mubi_pkg;
class Vtop_prim_ram_1p_pkg;
class Vtop_prim_ram_2p_pkg;
class Vtop_prim_secded_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&test_en_i,0,0);
    VL_IN8(&scan_rst_ni,0,0);
    VL_OUT8(&instr_req_o,0,0);
    VL_IN8(&instr_gnt_i,0,0);
    VL_IN8(&instr_rvalid_i,0,0);
    VL_IN8(&instr_rdata_intg_i,6,0);
    VL_IN8(&instr_err_i,0,0);
    VL_OUT8(&data_req_o,0,0);
    VL_IN8(&data_gnt_i,0,0);
    VL_IN8(&data_rvalid_i,0,0);
    VL_OUT8(&data_we_o,0,0);
    VL_OUT8(&data_be_o,3,0);
    VL_OUT8(&data_wdata_intg_o,6,0);
    VL_IN8(&data_rdata_intg_i,6,0);
    VL_IN8(&data_err_i,0,0);
    VL_IN8(&irq_software_i,0,0);
    VL_IN8(&irq_timer_i,0,0);
    VL_IN8(&irq_external_i,0,0);
    VL_IN8(&irq_nm_i,0,0);
    VL_IN8(&scramble_key_valid_i,0,0);
    VL_OUT8(&scramble_req_o,0,0);
    VL_IN8(&debug_req_i,0,0);
    VL_OUT8(&double_fault_seen_o,0,0);
    VL_IN8(&fetch_enable_i,3,0);
    VL_OUT8(&alert_minor_o,0,0);
    VL_OUT8(&alert_major_internal_o,0,0);
    VL_OUT8(&alert_major_bus_o,0,0);
    VL_OUT8(&core_sleep_o,0,0);
    VL_IN16(&ram_cfg_i,9,0);
    VL_IN16(&irq_fast_i,14,0);
    VL_IN(&hart_id_i,31,0);
    VL_IN(&boot_addr_i,31,0);
    VL_OUT(&instr_addr_o,31,0);
    VL_IN(&instr_rdata_i,31,0);
    VL_OUT(&data_addr_o,31,0);
    VL_OUT(&data_wdata_o,31,0);
    VL_IN(&data_rdata_i,31,0);
    VL_INW(&scramble_key_i,127,0,4);
    VL_IN64(&scramble_nonce_i,63,0);
    VL_OUTW(&crash_dump_o,159,0,5);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_prim_cipher_pkg* const __PVT__prim_cipher_pkg;
    Vtop_prim_secded_pkg* const __PVT__prim_secded_pkg;
    Vtop_ibex_tracer_pkg* const __PVT__ibex_tracer_pkg;
    Vtop_prim_mubi_pkg* const __PVT__prim_mubi_pkg;
    Vtop_prim_ram_2p_pkg* const __PVT__prim_ram_2p_pkg;
    Vtop_ibex_pkg* const __PVT__ibex_pkg;
    Vtop_prim_ram_1p_pkg* const __PVT__prim_ram_1p_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int simutil_get_scramble_key(svBitVecVal* val);
    static int simutil_get_scramble_nonce(svBitVecVal* nonce);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
