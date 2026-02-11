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
    vlSelfRef.cpu__DOT__pc_next = ((IData)(4U) + vlSelfRef.cpu__DOT__pc);
    vlSelfRef.cpu__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.cpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__address 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.cpu__DOT__pc, 2U);
    vlSelfRef.cpu__DOT__regfile__DOT__rst_n = vlSelfRef.cpu__DOT__rst_n;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__clk 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__regfile__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__data_memory__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x0000003fU & vlSelfRef.cpu__DOT__instruction_memory__DOT__address)];
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data;
    vlSelfRef.cpu__DOT__dest_reg = (0x0000001fU & (vlSelfRef.cpu__DOT__instruction 
                                                   >> 7U));
    vlSelfRef.cpu__DOT__source_reg1 = (0x0000001fU 
                                       & (vlSelfRef.cpu__DOT__instruction 
                                          >> 0x0000000fU));
    vlSelfRef.cpu__DOT__f3 = (7U & (vlSelfRef.cpu__DOT__instruction 
                                    >> 0x0000000cU));
    vlSelfRef.cpu__DOT__source_reg2 = (0x0000001fU 
                                       & (vlSelfRef.cpu__DOT__instruction 
                                          >> 0x00000014U));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instruction 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x0000007fU & vlSelfRef.cpu__DOT__instruction);
    vlSelfRef.cpu__DOT__regfile__DOT__address3 = vlSelfRef.cpu__DOT__dest_reg;
    vlSelfRef.cpu__DOT__regfile__DOT__address1 = vlSelfRef.cpu__DOT__source_reg1;
    vlSelfRef.cpu__DOT__control_unit__DOT__func3 = vlSelfRef.cpu__DOT__f3;
    vlSelfRef.cpu__DOT__regfile__DOT__address2 = vlSelfRef.cpu__DOT__source_reg2;
    vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu__DOT__raw_imm;
    vlSelfRef.cpu__DOT__control_unit__DOT__op = vlSelfRef.cpu__DOT__op;
    vlSelfRef.cpu__DOT__regfile__DOT__read_data1 = 
        vlSelfRef.cpu__DOT__regfile__DOT__registers
        [vlSelfRef.cpu__DOT__regfile__DOT__address1];
    vlSelfRef.cpu__DOT__regfile__DOT__read_data2 = 
        vlSelfRef.cpu__DOT__regfile__DOT__registers
        [vlSelfRef.cpu__DOT__regfile__DOT__address2];
    __Vtableidx1 = vlSelfRef.cpu__DOT__control_unit__DOT__op;
    vlSelfRef.cpu__DOT__control_unit__DOT__reg_write 
        = Vtop__ConstPool__TABLE_h4803636c_0[__Vtableidx1];
    if ((2U & Vtop__ConstPool__TABLE_h91b8f272_0[__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__imm_source 
            = Vtop__ConstPool__TABLE_h44ec23f0_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__control_unit__DOT__mem_write 
        = Vtop__ConstPool__TABLE_h85fa6153_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_op = 
        Vtop__ConstPool__TABLE_h17e1c570_0[__Vtableidx1];
    if ((0x10U & Vtop__ConstPool__TABLE_h91b8f272_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__alu_source 
            = Vtop__ConstPool__TABLE_hc44c848e_0[__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_h91b8f272_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source 
            = Vtop__ConstPool__TABLE_hd1fd398a_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__read_reg1 = vlSelfRef.cpu__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu__DOT__read_reg2 = vlSelfRef.cpu__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__control_unit__DOT__reg_write;
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__control_unit__DOT__mem_write;
    vlSelfRef.cpu__DOT__write_back_source = vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source;
    vlSelfRef.cpu__DOT__alu_source = vlSelfRef.cpu__DOT__control_unit__DOT__alu_source;
    __Vtableidx2 = (((IData)(vlSelfRef.cpu__DOT__control_unit__DOT__func3) 
                     << 2U) | (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__alu_op));
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_control 
        = Vtop__ConstPool__TABLE_h38b060d9_0[__Vtableidx2];
    vlSelfRef.cpu__DOT__imm_source = vlSelfRef.cpu__DOT__control_unit__DOT__imm_source;
    vlSelfRef.cpu__DOT__alu_inst__DOT__src1 = vlSelfRef.cpu__DOT__read_reg1;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_data 
        = vlSelfRef.cpu__DOT__read_reg2;
    vlSelfRef.cpu__DOT__regfile__DOT__write_enable 
        = vlSelfRef.cpu__DOT__reg_write;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_enable 
        = vlSelfRef.cpu__DOT__mem_write;
    vlSelfRef.cpu__DOT__alu_control = vlSelfRef.cpu__DOT__control_unit__DOT__alu_control;
    vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu__DOT__imm_source;
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu__DOT__alu_control;
    vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm 
        = (0x00000fffU & ((0U == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
                           ? (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                              >> 0x0000000dU) : ((1U 
                                                  == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
                                                  ? 
                                                 ((0x00000fe0U 
                                                   & (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                                                      >> 0x0000000dU)) 
                                                  | (0x0000001fU 
                                                     & vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src))
                                                  : 0U)));
    vlSelfRef.cpu__DOT__sign_extender__DOT__immediate 
        = (((- (IData)((1U & ((IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm) 
                              >> 0x0000000bU)))) << 0x0000000cU) 
           | (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm));
    vlSelfRef.cpu__DOT__immediate = vlSelfRef.cpu__DOT__sign_extender__DOT__immediate;
    vlSelfRef.cpu__DOT__alu_src2 = ((IData)(vlSelfRef.cpu__DOT__alu_source)
                                     ? vlSelfRef.cpu__DOT__immediate
                                     : vlSelfRef.cpu__DOT__read_reg2);
    vlSelfRef.cpu__DOT__alu_inst__DOT__src2 = vlSelfRef.cpu__DOT__alu_src2;
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result = 
        ((0U == (IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control))
          ? (vlSelfRef.cpu__DOT__alu_inst__DOT__src1 
             + vlSelfRef.cpu__DOT__alu_inst__DOT__src2)
          : ((2U == (IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control))
              ? (vlSelfRef.cpu__DOT__alu_inst__DOT__src1 
                 & vlSelfRef.cpu__DOT__alu_inst__DOT__src2)
              : ((3U == (IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control))
                  ? (vlSelfRef.cpu__DOT__alu_inst__DOT__src1 
                     | vlSelfRef.cpu__DOT__alu_inst__DOT__src2)
                  : 0U)));
    vlSelfRef.cpu__DOT__alu_inst__DOT__zero = (0U == vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu__DOT__alu_zero = vlSelfRef.cpu__DOT__alu_inst__DOT__zero;
    vlSelfRef.cpu__DOT__data_memory__DOT__address = 
        VL_SHIFTR_III(32,32,32, vlSelfRef.cpu__DOT__alu_result, 2U);
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_zero 
        = vlSelfRef.cpu__DOT__alu_zero;
    vlSelfRef.cpu__DOT__data_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__data_memory__DOT__mem
        [(0x0000003fU & vlSelfRef.cpu__DOT__data_memory__DOT__address)];
    vlSelfRef.cpu__DOT__mem_read = vlSelfRef.cpu__DOT__data_memory__DOT__read_data;
    vlSelfRef.cpu__DOT__write_back_data = ((IData)(vlSelfRef.cpu__DOT__write_back_source)
                                            ? vlSelfRef.cpu__DOT__mem_read
                                            : vlSelfRef.cpu__DOT__alu_result);
    vlSelfRef.cpu__DOT__regfile__DOT__write_data = vlSelfRef.cpu__DOT__write_back_data;
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.cpu__DOT__data_memory__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_memory__DOT__clk__0))) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.cpu__DOT__regfile__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regfile__DOT__clk__0))) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.cpu__DOT__instruction_memory__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__instruction_memory__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.cpu__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__instruction_memory__DOT__clk__0 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regfile__DOT__clk__0 
        = vlSelfRef.cpu__DOT__regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_memory__DOT__clk__0 
        = vlSelfRef.cpu__DOT__data_memory__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0;
    __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0;
    __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1;
    __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1 = 0;
    // Body
    if (vlSelfRef.cpu__DOT__data_memory__DOT__rst_n) {
        if (VL_UNLIKELY((vlSelfRef.cpu__DOT__data_memory__DOT__write_enable))) {
            VL_WRITEF_NX("DEBUG: Memory Write Enable is HIGH. Attempting to write to index %10#\n",0,
                         32,vlSelfRef.cpu__DOT__data_memory__DOT__address);
            __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0 
                = vlSelfRef.cpu__DOT__data_memory__DOT__write_data;
            __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0 
                = (0x0000003fU & vlSelfRef.cpu__DOT__data_memory__DOT__address);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__data_memory__DOT__mem.enqueue(__VdlyVal__cpu__DOT__data_memory__DOT__mem__v0, (IData)(__VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0));
        }
    } else {
        vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1 
                = (0x0000003fU & vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__data_memory__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1));
            vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuecpu__DOT__data_memory__DOT__mem.commit(vlSelfRef.cpu__DOT__data_memory__DOT__mem);
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu__DOT__regfile__DOT__registers__v0;
    __VdlyVal__cpu__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu__DOT__regfile__DOT__registers__v0;
    __VdlyDim0__cpu__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu__DOT__regfile__DOT__registers__v1;
    __VdlyDim0__cpu__DOT__regfile__DOT__registers__v1 = 0;
    // Body
    if (vlSelfRef.cpu__DOT__regfile__DOT__rst_n) {
        if (((IData)(vlSelfRef.cpu__DOT__regfile__DOT__write_enable) 
             & (0U != (IData)(vlSelfRef.cpu__DOT__regfile__DOT__address3)))) {
            __VdlyVal__cpu__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.cpu__DOT__regfile__DOT__write_data;
            __VdlyDim0__cpu__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.cpu__DOT__regfile__DOT__address3;
            vlSelfRef.__VdlyCommitQueuecpu__DOT__regfile__DOT__registers.enqueue(__VdlyVal__cpu__DOT__regfile__DOT__registers__v0, (IData)(__VdlyDim0__cpu__DOT__regfile__DOT__registers__v0));
        }
    } else {
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu__DOT__regfile__DOT__registers__v1 
                = (0x0000001fU & vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__regfile__DOT__registers.enqueue(0U, (IData)(__VdlyDim0__cpu__DOT__regfile__DOT__registers__v1));
            vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuecpu__DOT__regfile__DOT__registers.commit(vlSelfRef.cpu__DOT__regfile__DOT__registers);
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__pc = ((IData)(vlSelfRef.cpu__DOT__rst_n)
                               ? vlSelfRef.cpu__DOT__pc_next
                               : 0U);
    vlSelfRef.cpu__DOT__pc_next = ((IData)(4U) + vlSelfRef.cpu__DOT__pc);
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu__DOT__instruction_memory__DOT__mem__v0;
    __VdlyVal__cpu__DOT__instruction_memory__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v0;
    __VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v1;
    __VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v1 = 0;
    // Body
    if (vlSelfRef.cpu__DOT__instruction_memory__DOT__rst_n) {
        if (VL_UNLIKELY((vlSelfRef.cpu__DOT__instruction_memory__DOT__write_enable))) {
            VL_WRITEF_NX("DEBUG: Memory Write Enable is HIGH. Attempting to write to index %10#\n",0,
                         32,vlSelfRef.cpu__DOT__instruction_memory__DOT__address);
            __VdlyVal__cpu__DOT__instruction_memory__DOT__mem__v0 
                = vlSelfRef.cpu__DOT__instruction_memory__DOT__write_data;
            __VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v0 
                = (0x0000003fU & vlSelfRef.cpu__DOT__instruction_memory__DOT__address);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__instruction_memory__DOT__mem.enqueue(__VdlyVal__cpu__DOT__instruction_memory__DOT__mem__v0, (IData)(__VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v0));
        }
    } else {
        vlSelfRef.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v1 
                = (0x0000003fU & vlSelfRef.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__instruction_memory__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__cpu__DOT__instruction_memory__DOT__mem__v1));
            vlSelfRef.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuecpu__DOT__instruction_memory__DOT__mem.commit(vlSelfRef.cpu__DOT__instruction_memory__DOT__mem);
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__instruction_memory__DOT__address 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.cpu__DOT__pc, 2U);
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x0000003fU & vlSelfRef.cpu__DOT__instruction_memory__DOT__address)];
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data;
    vlSelfRef.cpu__DOT__dest_reg = (0x0000001fU & (vlSelfRef.cpu__DOT__instruction 
                                                   >> 7U));
    vlSelfRef.cpu__DOT__source_reg1 = (0x0000001fU 
                                       & (vlSelfRef.cpu__DOT__instruction 
                                          >> 0x0000000fU));
    vlSelfRef.cpu__DOT__f3 = (7U & (vlSelfRef.cpu__DOT__instruction 
                                    >> 0x0000000cU));
    vlSelfRef.cpu__DOT__source_reg2 = (0x0000001fU 
                                       & (vlSelfRef.cpu__DOT__instruction 
                                          >> 0x00000014U));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instruction 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x0000007fU & vlSelfRef.cpu__DOT__instruction);
    vlSelfRef.cpu__DOT__regfile__DOT__address3 = vlSelfRef.cpu__DOT__dest_reg;
    vlSelfRef.cpu__DOT__regfile__DOT__address1 = vlSelfRef.cpu__DOT__source_reg1;
    vlSelfRef.cpu__DOT__control_unit__DOT__func3 = vlSelfRef.cpu__DOT__f3;
    vlSelfRef.cpu__DOT__regfile__DOT__address2 = vlSelfRef.cpu__DOT__source_reg2;
    vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu__DOT__raw_imm;
    vlSelfRef.cpu__DOT__control_unit__DOT__op = vlSelfRef.cpu__DOT__op;
    __Vtableidx1 = vlSelfRef.cpu__DOT__control_unit__DOT__op;
    vlSelfRef.cpu__DOT__control_unit__DOT__reg_write 
        = Vtop__ConstPool__TABLE_h4803636c_0[__Vtableidx1];
    if ((2U & Vtop__ConstPool__TABLE_h91b8f272_0[__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__imm_source 
            = Vtop__ConstPool__TABLE_h44ec23f0_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__control_unit__DOT__mem_write 
        = Vtop__ConstPool__TABLE_h85fa6153_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_op = 
        Vtop__ConstPool__TABLE_h17e1c570_0[__Vtableidx1];
    if ((0x10U & Vtop__ConstPool__TABLE_h91b8f272_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__alu_source 
            = Vtop__ConstPool__TABLE_hc44c848e_0[__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_h91b8f272_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source 
            = Vtop__ConstPool__TABLE_hd1fd398a_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__control_unit__DOT__reg_write;
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__control_unit__DOT__mem_write;
    vlSelfRef.cpu__DOT__write_back_source = vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source;
    vlSelfRef.cpu__DOT__alu_source = vlSelfRef.cpu__DOT__control_unit__DOT__alu_source;
    __Vtableidx2 = (((IData)(vlSelfRef.cpu__DOT__control_unit__DOT__func3) 
                     << 2U) | (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__alu_op));
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_control 
        = Vtop__ConstPool__TABLE_h38b060d9_0[__Vtableidx2];
    vlSelfRef.cpu__DOT__imm_source = vlSelfRef.cpu__DOT__control_unit__DOT__imm_source;
    vlSelfRef.cpu__DOT__regfile__DOT__write_enable 
        = vlSelfRef.cpu__DOT__reg_write;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_enable 
        = vlSelfRef.cpu__DOT__mem_write;
    vlSelfRef.cpu__DOT__alu_control = vlSelfRef.cpu__DOT__control_unit__DOT__alu_control;
    vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu__DOT__imm_source;
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu__DOT__alu_control;
    vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm 
        = (0x00000fffU & ((0U == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
                           ? (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                              >> 0x0000000dU) : ((1U 
                                                  == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
                                                  ? 
                                                 ((0x00000fe0U 
                                                   & (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                                                      >> 0x0000000dU)) 
                                                  | (0x0000001fU 
                                                     & vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src))
                                                  : 0U)));
    vlSelfRef.cpu__DOT__sign_extender__DOT__immediate 
        = (((- (IData)((1U & ((IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm) 
                              >> 0x0000000bU)))) << 0x0000000cU) 
           | (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm));
    vlSelfRef.cpu__DOT__immediate = vlSelfRef.cpu__DOT__sign_extender__DOT__immediate;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__regfile__DOT__read_data1 = 
        vlSelfRef.cpu__DOT__regfile__DOT__registers
        [vlSelfRef.cpu__DOT__regfile__DOT__address1];
    vlSelfRef.cpu__DOT__regfile__DOT__read_data2 = 
        vlSelfRef.cpu__DOT__regfile__DOT__registers
        [vlSelfRef.cpu__DOT__regfile__DOT__address2];
    vlSelfRef.cpu__DOT__read_reg1 = vlSelfRef.cpu__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu__DOT__read_reg2 = vlSelfRef.cpu__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu__DOT__alu_inst__DOT__src1 = vlSelfRef.cpu__DOT__read_reg1;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_data 
        = vlSelfRef.cpu__DOT__read_reg2;
    vlSelfRef.cpu__DOT__alu_src2 = ((IData)(vlSelfRef.cpu__DOT__alu_source)
                                     ? vlSelfRef.cpu__DOT__immediate
                                     : vlSelfRef.cpu__DOT__read_reg2);
    vlSelfRef.cpu__DOT__alu_inst__DOT__src2 = vlSelfRef.cpu__DOT__alu_src2;
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result = 
        ((0U == (IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control))
          ? (vlSelfRef.cpu__DOT__alu_inst__DOT__src1 
             + vlSelfRef.cpu__DOT__alu_inst__DOT__src2)
          : ((2U == (IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control))
              ? (vlSelfRef.cpu__DOT__alu_inst__DOT__src1 
                 & vlSelfRef.cpu__DOT__alu_inst__DOT__src2)
              : ((3U == (IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control))
                  ? (vlSelfRef.cpu__DOT__alu_inst__DOT__src1 
                     | vlSelfRef.cpu__DOT__alu_inst__DOT__src2)
                  : 0U)));
    vlSelfRef.cpu__DOT__alu_inst__DOT__zero = (0U == vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu__DOT__alu_zero = vlSelfRef.cpu__DOT__alu_inst__DOT__zero;
    vlSelfRef.cpu__DOT__data_memory__DOT__address = 
        VL_SHIFTR_III(32,32,32, vlSelfRef.cpu__DOT__alu_result, 2U);
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_zero 
        = vlSelfRef.cpu__DOT__alu_zero;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__data_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__data_memory__DOT__mem
        [(0x0000003fU & vlSelfRef.cpu__DOT__data_memory__DOT__address)];
    vlSelfRef.cpu__DOT__mem_read = vlSelfRef.cpu__DOT__data_memory__DOT__read_data;
    vlSelfRef.cpu__DOT__write_back_data = ((IData)(vlSelfRef.cpu__DOT__write_back_source)
                                            ? vlSelfRef.cpu__DOT__mem_read
                                            : vlSelfRef.cpu__DOT__alu_result);
    vlSelfRef.cpu__DOT__regfile__DOT__write_data = vlSelfRef.cpu__DOT__write_back_data;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/kali/riscv/Rtype_and_or/tb/r_cpu/../../R_and_or/R.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/kali/riscv/Rtype_and_or/tb/r_cpu/../../R_and_or/R.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/kali/riscv/Rtype_and_or/tb/r_cpu/../../R_and_or/R.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
