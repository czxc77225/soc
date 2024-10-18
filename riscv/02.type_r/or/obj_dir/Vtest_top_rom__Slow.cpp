// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_rom.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_rom) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_rom::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_rom::~Vtest_top_rom() {
}

void Vtest_top_rom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_rom::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__ce_i = VL_RAND_RESET_I(1);
    __PVT__addr_i = VL_RAND_RESET_I(32);
    __PVT__inst_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2097152; ++__Vi0) {
            __PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
}
