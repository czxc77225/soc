// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_CORE_TOP_H_
#define _VTEST_TOP_CORE_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;
class Vtest_top_regfile;


//----------

VL_MODULE(Vtest_top_core_top) {
  public:
    // CELLS
    Vtest_top_regfile* regfile0;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_OUT8(__PVT__rom_ce_o,0,0);
    VL_OUT8(__PVT__ram_ce_o,0,0);
    VL_OUT8(__PVT__ram_we_o,0,0);
    VL_IN8(__PVT__irq_external_i,0,0);
    VL_IN8(__PVT__irq_software_i,0,0);
    VL_IN8(__PVT__irq_timer_i,0,0);
    VL_OUT(__PVT__rom_addr_o,31,0);
    VL_IN(__PVT__rom_data_i,31,0);
    VL_OUT(__PVT__ram_addr_o,31,0);
    VL_OUT(__PVT__ram_wdata_o,31,0);
    VL_IN(__PVT__ram_rdata_i,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__int_ctrl_interrupt_type_o;
        CData/*0:0*/ __PVT__int_ctrl_interrupt_en_o;
        CData/*0:0*/ __PVT__int_ctrl_cause_we_o;
        CData/*3:0*/ __PVT__int_ctrl_trap_casue_o;
        CData/*0:0*/ __PVT__int_ctrl_epc_we_o;
        CData/*0:0*/ __PVT__int_ctrl_mstatus_ie_clear_o;
        CData/*0:0*/ __PVT__int_ctrl_mstatus_ie_set_o;
        CData/*0:0*/ __PVT__int_ctrl_flush_o;
        CData/*5:0*/ __PVT__ctrl_stall_o;
        CData/*0:0*/ __PVT__ce_wire;
        CData/*4:0*/ __PVT__id_reg1_addr_o;
        CData/*4:0*/ __PVT__id_reg2_addr_o;
        CData/*0:0*/ __PVT__id_reg1_re_o;
        CData/*0:0*/ __PVT__id_reg2_re_o;
        CData/*0:0*/ __PVT__id_reg_we_o;
        CData/*4:0*/ __PVT__id_reg_waddr_o;
        CData/*0:0*/ __PVT__id_csr_we_o;
        CData/*0:0*/ __PVT__id_exe_reg_we_o;
        CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
        CData/*0:0*/ __PVT__id_exe_inst_is_load_o;
        CData/*4:0*/ __PVT__id_exe_rd_o;
        CData/*0:0*/ __PVT__id_exe_csr_we_o;
        CData/*4:0*/ __PVT__exe_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_op_o;
        CData/*0:0*/ __PVT__exe_jump_enable_o;
        CData/*0:0*/ __PVT__exe_csr_we_o;
        CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_mem_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_mem_op_o;
        CData/*0:0*/ __PVT__exe_mem_csr_we_o;
        CData/*4:0*/ __PVT__mem_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_reg_we_o;
        CData/*0:0*/ __PVT__mem_mem_we_o;
        CData/*0:0*/ __PVT__mem_mem_ce_o;
        CData/*0:0*/ __PVT__mem_csr_we_o;
        CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_wb_reg_we_o;
        CData/*0:0*/ __PVT__mem_wb_csr_we_o;
        CData/*0:0*/ __PVT__mem_wb_instret_incr_o;
        CData/*3:0*/ __PVT__interrupt_ctrl0__DOT__S;
        CData/*3:0*/ __PVT__interrupt_ctrl0__DOT__S_nxt;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__eip;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__tip;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__sip;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__exception;
        CData/*0:0*/ __PVT__id0__DOT__except_mret;
        CData/*0:0*/ __PVT__id0__DOT__except_ecall;
        CData/*4:0*/ __PVT__id0__DOT__i_reg1_raddr_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg2_raddr_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg1_re_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg2_re_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg_we_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg_waddr_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg1_re_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg2_re_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg_we_o;
        CData/*0:0*/ __PVT__id0__DOT__inst_type_r__DOT__isType_r;
        CData/*0:0*/ __PVT__id0__DOT__inst_type_r__DOT__isType_m;
        CData/*0:0*/ __PVT__exe0__DOT__s_reg_we_o;
        CData/*0:0*/ __PVT__exe0__DOT__s_mem_we_o;
        CData/*3:0*/ __PVT__exe0__DOT__s_mem_op_o;
    };
    struct {
        CData/*0:0*/ __PVT__exe0__DOT__b_jump_enable_o;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_r0__DOT__isType_r;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__isType_m;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div_req_o;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust;
        CData/*5:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add;
        CData/*5:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub;
        CData/*0:0*/ __PVT__csr0__DOT__mstatus_mpie;
        CData/*0:0*/ __PVT__csr0__DOT__mstatus_mie;
        CData/*0:0*/ __PVT__csr0__DOT__mie_external;
        CData/*0:0*/ __PVT__csr0__DOT__mie_timer;
        CData/*0:0*/ __PVT__csr0__DOT__mie_software;
        CData/*0:0*/ __PVT__csr0__DOT__w_mie;
        CData/*3:0*/ __PVT__csr0__DOT__cause;
        CData/*0:0*/ __PVT__csr0__DOT__interrupt_type;
        CData/*0:0*/ __PVT__csr0__DOT__w_mcause;
        CData/*0:0*/ __PVT__csr0__DOT__mip_external;
        CData/*0:0*/ __PVT__csr0__DOT__mip_timer;
        CData/*0:0*/ __PVT__csr0__DOT__mip_software;
        SData/*11:0*/ __PVT__id_csr_addr_o;
        SData/*11:0*/ __PVT__id_exe_csr_addr_o;
        SData/*11:0*/ __PVT__exe_mem_csr_waddr_o;
        SData/*11:0*/ __PVT__mem_csr_waddr_o;
        SData/*11:0*/ __PVT__mem_wb_csr_waddr_o;
        IData/*31:0*/ __PVT__int_ctrl_epc_o;
        IData/*31:0*/ __PVT__ctrl_new_pc_o;
        IData/*31:0*/ __PVT__ctrl_pc_o;
        IData/*31:0*/ __PVT__pc_wire;
        IData/*31:0*/ __PVT__if_id_inst_addr_o;
        IData/*31:0*/ __PVT__if_id_inst_o;
        IData/*31:0*/ __PVT__id_inst_o;
        IData/*31:0*/ __PVT__id_exe_op1_o;
        IData/*31:0*/ __PVT__id_exe_op2_o;
        IData/*31:0*/ __PVT__id_exe_inst_o;
        IData/*31:0*/ __PVT__id_exe_inst_addr_o;
        IData/*31:0*/ __PVT__id_exe_exception_o;
        IData/*31:0*/ __PVT__exe_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_data_o;
        IData/*31:0*/ __PVT__exe_jump_addr_o;
        IData/*31:0*/ __PVT__exe_csr_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_mem_data_o;
        IData/*31:0*/ __PVT__exe_mem_csr_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_inst_addr_o;
        IData/*31:0*/ __PVT__exe_mem_exception_o;
        IData/*31:0*/ __PVT__mem_mem_addr_o;
        IData/*31:0*/ __PVT__mem_mem_data_o;
        IData/*31:0*/ __PVT__mem_inst_addr_o;
        IData/*31:0*/ __PVT__mem_csr_wdata_o;
    };
    struct {
        IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
        IData/*31:0*/ __PVT__mem_wb_csr_wdata_o;
        IData/*31:0*/ __PVT__csr_file_csr_rdata_o;
        IData/*31:0*/ __PVT__ctrl0__DOT__current_pc;
        IData/*31:0*/ __PVT__id0__DOT__op1_o_final;
        IData/*31:0*/ __PVT__id0__DOT__op2_o_final;
        IData/*31:0*/ __PVT__id0__DOT__i_op1_o;
        IData/*31:0*/ __PVT__id0__DOT__i_op2_o;
        IData/*31:0*/ __PVT__exe0__DOT__i_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__r_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__s_mem_data_o;
        IData/*31:0*/ __PVT__exe0__DOT__s_mem_addr_o;
        IData/*31:0*/ __PVT__exe0__DOT__b_jump_addr_o;
        IData/*31:0*/ __PVT__exe0__DOT__m_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__system_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__system_csr_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__csr_rdata;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__a_o;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__b_o;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div_result;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__result;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32;
        WData/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[3];
        WData/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[3];
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32;
        WData/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[3];
        WData/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[3];
        IData/*31:0*/ __PVT__mem0__DOT__reg_wdata;
        IData/*31:0*/ __PVT__csr0__DOT__mtvec;
        IData/*31:0*/ __PVT__csr0__DOT__mscratch;
        IData/*31:0*/ __PVT__csr0__DOT__mepc;
        IData/*26:0*/ __PVT__csr0__DOT__cause_rem;
        IData/*31:0*/ __PVT__csr0__DOT__mtval;
        QData/*63:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i;
        QData/*63:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__invert_result;
        QData/*63:0*/ __PVT__csr0__DOT__mcycle;
        QData/*63:0*/ __PVT__csr0__DOT__minstret;
    };
    
    // LOCAL VARIABLES
    CData/*5:0*/ __Vtableidx1;
    static CData/*3:0*/ __Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt[64];
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_core_top);  ///< Copying not allowed
  public:
    Vtest_top_core_top(const char* name = "TOP");
    ~Vtest_top_core_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
    static void _combo__TOP__test_top__core_top0__5(Vtest_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__test_top__core_top0__3(Vtest_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__test_top__core_top0__4(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__core_top0__1(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__test_top__core_top0__2(Vtest_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
