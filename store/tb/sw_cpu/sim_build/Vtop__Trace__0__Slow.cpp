// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"imm_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"source_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"source_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"read_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"read_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"write_back_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"raw_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+20,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"alu_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+30,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+32,0,"alu_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"imm_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+99,0,"mem_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+104,0,"mem_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"address3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sign_extender", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"raw_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+95,0,"imm_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"gathered_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+98,(0x00000040U),32);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x5f646d65U;
    __Vtemp_1[3U] = 0x74657374U;
    __Vtemp_1[4U] = 0x00002e2fU;
    bufp->fullWData(oldp+99,(__Vtemp_1),144);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d6f7279U;
    __Vtemp_2[2U] = 0x5f696d65U;
    __Vtemp_2[3U] = 0x74657374U;
    bufp->fullWData(oldp+104,(__Vtemp_2),128);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.cpu__DOT__clk));
    bufp->fullBit(oldp+4,(vlSelfRef.cpu__DOT__rst_n));
    bufp->fullIData(oldp+5,(vlSelfRef.cpu__DOT__pc),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cpu__DOT__pc_next),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cpu__DOT__instruction),32);
    bufp->fullBit(oldp+8,(vlSelfRef.cpu__DOT__alu_zero));
    bufp->fullCData(oldp+9,(vlSelfRef.cpu__DOT__alu_control),3);
    bufp->fullCData(oldp+10,(vlSelfRef.cpu__DOT__imm_source),2);
    bufp->fullBit(oldp+11,(vlSelfRef.cpu__DOT__mem_write));
    bufp->fullBit(oldp+12,(vlSelfRef.cpu__DOT__reg_write));
    bufp->fullCData(oldp+13,(vlSelfRef.cpu__DOT__source_reg1),5);
    bufp->fullCData(oldp+14,(vlSelfRef.cpu__DOT__source_reg2),5);
    bufp->fullCData(oldp+15,(vlSelfRef.cpu__DOT__dest_reg),5);
    bufp->fullIData(oldp+16,(vlSelfRef.cpu__DOT__read_reg1),32);
    bufp->fullIData(oldp+17,(vlSelfRef.cpu__DOT__read_reg2),32);
    bufp->fullIData(oldp+18,(vlSelfRef.cpu__DOT__write_back_data),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cpu__DOT__raw_imm),25);
    bufp->fullIData(oldp+20,(vlSelfRef.cpu__DOT__immediate),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cpu__DOT__alu_result),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cpu__DOT__alu_src2),32);
    bufp->fullIData(oldp+23,(vlSelfRef.cpu__DOT__mem_read),32);
    bufp->fullCData(oldp+24,(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control),3);
    bufp->fullIData(oldp+25,(vlSelfRef.cpu__DOT__alu_inst__DOT__src1),32);
    bufp->fullIData(oldp+26,(vlSelfRef.cpu__DOT__alu_inst__DOT__src2),32);
    bufp->fullIData(oldp+27,(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+28,(vlSelfRef.cpu__DOT__alu_inst__DOT__zero));
    bufp->fullCData(oldp+29,(vlSelfRef.cpu__DOT__control_unit__DOT__op),7);
    bufp->fullCData(oldp+30,(vlSelfRef.cpu__DOT__control_unit__DOT__func3),3);
    bufp->fullCData(oldp+31,(vlSelfRef.cpu__DOT__control_unit__DOT__func7),7);
    bufp->fullBit(oldp+32,(vlSelfRef.cpu__DOT__control_unit__DOT__alu_zero));
    bufp->fullCData(oldp+33,(vlSelfRef.cpu__DOT__control_unit__DOT__alu_control),3);
    bufp->fullCData(oldp+34,(vlSelfRef.cpu__DOT__control_unit__DOT__imm_source),2);
    bufp->fullBit(oldp+35,(vlSelfRef.cpu__DOT__control_unit__DOT__mem_write));
    bufp->fullBit(oldp+36,(vlSelfRef.cpu__DOT__control_unit__DOT__reg_write));
    bufp->fullCData(oldp+37,(vlSelfRef.cpu__DOT__control_unit__DOT__alu_op),2);
    bufp->fullBit(oldp+38,(vlSelfRef.cpu__DOT__data_memory__DOT__clk));
    bufp->fullIData(oldp+39,(vlSelfRef.cpu__DOT__data_memory__DOT__address),32);
    bufp->fullIData(oldp+40,(vlSelfRef.cpu__DOT__data_memory__DOT__write_data),32);
    bufp->fullBit(oldp+41,(vlSelfRef.cpu__DOT__data_memory__DOT__write_enable));
    bufp->fullBit(oldp+42,(vlSelfRef.cpu__DOT__data_memory__DOT__rst_n));
    bufp->fullIData(oldp+43,(vlSelfRef.cpu__DOT__data_memory__DOT__read_data),32);
    bufp->fullIData(oldp+44,(vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+45,(vlSelfRef.cpu__DOT__instruction_memory__DOT__clk));
    bufp->fullIData(oldp+46,(vlSelfRef.cpu__DOT__instruction_memory__DOT__address),32);
    bufp->fullIData(oldp+47,(vlSelfRef.cpu__DOT__instruction_memory__DOT__write_data),32);
    bufp->fullBit(oldp+48,(vlSelfRef.cpu__DOT__instruction_memory__DOT__write_enable));
    bufp->fullBit(oldp+49,(vlSelfRef.cpu__DOT__instruction_memory__DOT__rst_n));
    bufp->fullIData(oldp+50,(vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data),32);
    bufp->fullIData(oldp+51,(vlSelfRef.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+52,(vlSelfRef.cpu__DOT__regfile__DOT__clk));
    bufp->fullBit(oldp+53,(vlSelfRef.cpu__DOT__regfile__DOT__rst_n));
    bufp->fullCData(oldp+54,(vlSelfRef.cpu__DOT__regfile__DOT__address1),5);
    bufp->fullCData(oldp+55,(vlSelfRef.cpu__DOT__regfile__DOT__address2),5);
    bufp->fullIData(oldp+56,(vlSelfRef.cpu__DOT__regfile__DOT__read_data1),32);
    bufp->fullIData(oldp+57,(vlSelfRef.cpu__DOT__regfile__DOT__read_data2),32);
    bufp->fullBit(oldp+58,(vlSelfRef.cpu__DOT__regfile__DOT__write_enable));
    bufp->fullIData(oldp+59,(vlSelfRef.cpu__DOT__regfile__DOT__write_data),32);
    bufp->fullCData(oldp+60,(vlSelfRef.cpu__DOT__regfile__DOT__address3),5);
    bufp->fullIData(oldp+61,(vlSelfRef.cpu__DOT__regfile__DOT__registers[0]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.cpu__DOT__regfile__DOT__registers[1]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.cpu__DOT__regfile__DOT__registers[2]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.cpu__DOT__regfile__DOT__registers[3]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.cpu__DOT__regfile__DOT__registers[4]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.cpu__DOT__regfile__DOT__registers[5]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.cpu__DOT__regfile__DOT__registers[6]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.cpu__DOT__regfile__DOT__registers[7]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.cpu__DOT__regfile__DOT__registers[8]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.cpu__DOT__regfile__DOT__registers[9]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.cpu__DOT__regfile__DOT__registers[10]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.cpu__DOT__regfile__DOT__registers[11]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.cpu__DOT__regfile__DOT__registers[12]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.cpu__DOT__regfile__DOT__registers[13]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.cpu__DOT__regfile__DOT__registers[14]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.cpu__DOT__regfile__DOT__registers[15]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.cpu__DOT__regfile__DOT__registers[16]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.cpu__DOT__regfile__DOT__registers[17]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.cpu__DOT__regfile__DOT__registers[18]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.cpu__DOT__regfile__DOT__registers[19]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.cpu__DOT__regfile__DOT__registers[20]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.cpu__DOT__regfile__DOT__registers[21]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.cpu__DOT__regfile__DOT__registers[22]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.cpu__DOT__regfile__DOT__registers[23]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.cpu__DOT__regfile__DOT__registers[24]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.cpu__DOT__regfile__DOT__registers[25]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.cpu__DOT__regfile__DOT__registers[26]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.cpu__DOT__regfile__DOT__registers[27]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.cpu__DOT__regfile__DOT__registers[28]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.cpu__DOT__regfile__DOT__registers[29]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.cpu__DOT__regfile__DOT__registers[30]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.cpu__DOT__regfile__DOT__registers[31]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+94,(vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src),25);
    bufp->fullCData(oldp+95,(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source),2);
    bufp->fullIData(oldp+96,(vlSelfRef.cpu__DOT__sign_extender__DOT__immediate),32);
    bufp->fullSData(oldp+97,(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm),12);
}
