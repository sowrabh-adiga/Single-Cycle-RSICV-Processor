// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4803636c_0;
extern const VlUnpacked<CData/*5:0*/, 128> Vtop__ConstPool__TABLE_h91b8f272_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h44ec23f0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h85fa6153_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h17e1c570_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hc44c848e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hd1fd398a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_h38b060d9_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.control__DOT__func7 = vlSelfRef.func7;
    vlSelfRef.control__DOT__alu_zero = vlSelfRef.alu_zero;
    vlSelfRef.control__DOT__func3 = vlSelfRef.func3;
    vlSelfRef.control__DOT__op = vlSelfRef.op;
    __Vtableidx1 = vlSelfRef.control__DOT__op;
    vlSelfRef.control__DOT__reg_write = Vtop__ConstPool__TABLE_h4803636c_0
        [__Vtableidx1];
    if ((2U & Vtop__ConstPool__TABLE_h91b8f272_0[__Vtableidx1])) {
        vlSelfRef.control__DOT__imm_source = Vtop__ConstPool__TABLE_h44ec23f0_0
            [__Vtableidx1];
    }
    vlSelfRef.control__DOT__mem_write = Vtop__ConstPool__TABLE_h85fa6153_0
        [__Vtableidx1];
    vlSelfRef.control__DOT__alu_op = Vtop__ConstPool__TABLE_h17e1c570_0
        [__Vtableidx1];
    if ((0x10U & Vtop__ConstPool__TABLE_h91b8f272_0
         [__Vtableidx1])) {
        vlSelfRef.control__DOT__alu_source = Vtop__ConstPool__TABLE_hc44c848e_0
            [__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_h91b8f272_0
         [__Vtableidx1])) {
        vlSelfRef.control__DOT__write_back_source = 
            Vtop__ConstPool__TABLE_hd1fd398a_0[__Vtableidx1];
    }
    vlSelfRef.reg_write = vlSelfRef.control__DOT__reg_write;
    vlSelfRef.imm_source = vlSelfRef.control__DOT__imm_source;
    vlSelfRef.mem_write = vlSelfRef.control__DOT__mem_write;
    vlSelfRef.alu_source = vlSelfRef.control__DOT__alu_source;
    vlSelfRef.write_back_source = vlSelfRef.control__DOT__write_back_source;
    __Vtableidx2 = (((IData)(vlSelfRef.control__DOT__func3) 
                     << 2U) | (IData)(vlSelfRef.control__DOT__alu_op));
    vlSelfRef.control__DOT__alu_control = Vtop__ConstPool__TABLE_h38b060d9_0
        [__Vtableidx2];
    vlSelfRef.alu_control = vlSelfRef.control__DOT__alu_control;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/kali/riscv/Rtype_and_or/tb/controlLogic/../../src/control.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.op & 0x80U)))) {
        Verilated::overWidthError("op");
    }
    if (VL_UNLIKELY(((vlSelfRef.func3 & 0xf8U)))) {
        Verilated::overWidthError("func3");
    }
    if (VL_UNLIKELY(((vlSelfRef.func7 & 0x80U)))) {
        Verilated::overWidthError("func7");
    }
    if (VL_UNLIKELY(((vlSelfRef.alu_zero & 0xfeU)))) {
        Verilated::overWidthError("alu_zero");
    }
}
#endif  // VL_DEBUG
