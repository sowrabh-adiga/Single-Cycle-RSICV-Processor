// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__instruction_memory__DOT__clk__0 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regfile__DOT__clk__0 
        = vlSelfRef.cpu__DOT__regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_memory__DOT__clk__0 
        = vlSelfRef.cpu__DOT__data_memory__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 64, 0, "./test_imemory.hex"s
                 ,  &(vlSelfRef.cpu__DOT__instruction_memory__DOT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, "./test_dmemory.hex"s
                 ,  &(vlSelfRef.cpu__DOT__data_memory__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.cpu__DOT__instruction_memory__DOT__write_data = 0U;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__write_enable = 0U;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__rst_n = 1U;
    vlSelfRef.cpu__DOT__control_unit__DOT__func7 = 0U;
    vlSelfRef.cpu__DOT__data_memory__DOT__rst_n = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/kali/riscv/beq/tb/beq_cpu/../../beq/beq.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge cpu.instruction_memory.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge cpu.regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge cpu.data_memory.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->cpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5456728620559131056ull);
    vlSelf->cpu__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12949139165289987104ull);
    vlSelf->cpu__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12979896101630030509ull);
    vlSelf->cpu__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11401018961025754907ull);
    vlSelf->cpu__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3676520396987702001ull);
    vlSelf->cpu__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12508572871176283413ull);
    vlSelf->cpu__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 596015922531462669ull);
    vlSelf->cpu__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17161198845646111129ull);
    vlSelf->cpu__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2478348765490579174ull);
    vlSelf->cpu__DOT__imm_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4586295343091075808ull);
    vlSelf->cpu__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4199765347900879115ull);
    vlSelf->cpu__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15999734060210743814ull);
    vlSelf->cpu__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6534914121567284302ull);
    vlSelf->cpu__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11069135130404140919ull);
    vlSelf->cpu__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370498713040622867ull);
    vlSelf->cpu__DOT__source_reg1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14035701915223311449ull);
    vlSelf->cpu__DOT__source_reg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4380140507199591624ull);
    vlSelf->cpu__DOT__dest_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17360345143593915006ull);
    vlSelf->cpu__DOT__read_reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1524000216712112607ull);
    vlSelf->cpu__DOT__read_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12531379444480071751ull);
    vlSelf->cpu__DOT__write_back_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7679111009518496669ull);
    vlSelf->cpu__DOT__raw_imm = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17663876785484434241ull);
    vlSelf->cpu__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7657775539254847072ull);
    vlSelf->cpu__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12522730548817195188ull);
    vlSelf->cpu__DOT__alu_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8284561064640361552ull);
    vlSelf->cpu__DOT__mem_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7262268092522396926ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14625368131609872853ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13860628555311754532ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3343631852543303497ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2011051885990867248ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17054789272233748714ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5435733009246666832ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__instruction_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7404162715100081064ull);
    }
    vlSelf->cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__control_unit__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3611403323189279122ull);
    vlSelf->cpu__DOT__control_unit__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3110094534871067700ull);
    vlSelf->cpu__DOT__control_unit__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17253829472483387209ull);
    vlSelf->cpu__DOT__control_unit__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1791935297008950456ull);
    vlSelf->cpu__DOT__control_unit__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17425714914367488737ull);
    vlSelf->cpu__DOT__control_unit__DOT__imm_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6485016073868578189ull);
    vlSelf->cpu__DOT__control_unit__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8294752314298161282ull);
    vlSelf->cpu__DOT__control_unit__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13869306721224570585ull);
    vlSelf->cpu__DOT__control_unit__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13788007134988577272ull);
    vlSelf->cpu__DOT__control_unit__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 490859545281816256ull);
    vlSelf->cpu__DOT__control_unit__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2512942167037623742ull);
    vlSelf->cpu__DOT__control_unit__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8179692090656847853ull);
    vlSelf->cpu__DOT__control_unit__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2709023761027822046ull);
    vlSelf->cpu__DOT__control_unit__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309178397259977647ull);
    vlSelf->cpu__DOT__control_unit__DOT__assert_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5253589969340897323ull);
    vlSelf->cpu__DOT__regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418748850776135729ull);
    vlSelf->cpu__DOT__regfile__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15713003529679336938ull);
    vlSelf->cpu__DOT__regfile__DOT__address1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14750483544627185196ull);
    vlSelf->cpu__DOT__regfile__DOT__address2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8597712201974368323ull);
    vlSelf->cpu__DOT__regfile__DOT__read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10013646264735073798ull);
    vlSelf->cpu__DOT__regfile__DOT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4968804507512006539ull);
    vlSelf->cpu__DOT__regfile__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9988947362695560081ull);
    vlSelf->cpu__DOT__regfile__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 544213930637243827ull);
    vlSelf->cpu__DOT__regfile__DOT__address3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 954105450285310959ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15800446414295255430ull);
    }
    vlSelf->cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__sign_extender__DOT__raw_src = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3508015887788509646ull);
    vlSelf->cpu__DOT__sign_extender__DOT__imm_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3458098460170252871ull);
    vlSelf->cpu__DOT__sign_extender__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8774878167709989639ull);
    vlSelf->cpu__DOT__sign_extender__DOT__gathered_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2156041809648887449ull);
    vlSelf->cpu__DOT__alu_inst__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11209935511910668533ull);
    vlSelf->cpu__DOT__alu_inst__DOT__src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1464569046335488162ull);
    vlSelf->cpu__DOT__alu_inst__DOT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9682957663792374465ull);
    vlSelf->cpu__DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3987035607850862406ull);
    vlSelf->cpu__DOT__alu_inst__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14474213535884226629ull);
    vlSelf->cpu__DOT__data_memory__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11098813462957875079ull);
    vlSelf->cpu__DOT__data_memory__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2410208994358422173ull);
    vlSelf->cpu__DOT__data_memory__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2701052512181033886ull);
    vlSelf->cpu__DOT__data_memory__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1215334658594043730ull);
    vlSelf->cpu__DOT__data_memory__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 770764005843819664ull);
    vlSelf->cpu__DOT__data_memory__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13538062894372254119ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__data_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16394125434072290796ull);
    }
    vlSelf->cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__instruction_memory__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__data_memory__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
