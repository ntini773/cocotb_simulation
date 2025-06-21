// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtop::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtop__Dpi.h"
#include "Vtop.h"

#ifndef VL_DPIDECL_simutil_get_scramble_key_
#define VL_DPIDECL_simutil_get_scramble_key_
int simutil_get_scramble_key(svBitVecVal* val) {
    // DPI export at ../ibex/rtl/ibex_if_stage.sv:370:28
    return Vtop::simutil_get_scramble_key(val);
}
#endif

#ifndef VL_DPIDECL_simutil_get_scramble_nonce_
#define VL_DPIDECL_simutil_get_scramble_nonce_
int simutil_get_scramble_nonce(svBitVecVal* nonce) {
    // DPI export at ../ibex/rtl/ibex_if_stage.sv:373:28
    return Vtop::simutil_get_scramble_nonce(nonce);
}
#endif

