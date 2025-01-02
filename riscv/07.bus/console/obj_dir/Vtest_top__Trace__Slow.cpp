// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtest_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtest_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtest_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtest_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+272,"clk_i", false,-1);
        tracep->declBit(c+273,"rst_i", false,-1);
        tracep->declBit(c+274,"halt_o", false,-1);
        tracep->declBit(c+272,"test_top clk_i", false,-1);
        tracep->declBit(c+273,"test_top rst_i", false,-1);
        tracep->declBit(c+14,"test_top halt_o", false,-1);
        tracep->declBus(c+286,"test_top NrDevices", false,-1, 31,0);
        tracep->declBus(c+287,"test_top NrHosts", false,-1, 31,0);
        tracep->declBus(c+288,"test_top MemSize", false,-1, 31,0);
        tracep->declBus(c+289,"test_top MemAddrWidth", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+163+i*1,"test_top host_req", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+164+i*1,"test_top host_gnt", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+165+i*1,"test_top host_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+166+i*1,"test_top host_we", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+167+i*1,"test_top host_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+168+i*1,"test_top host_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+169+i*1,"test_top device_req", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+172+i*1,"test_top device_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+175+i*1,"test_top device_we", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+178+i*1,"test_top device_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+181+i*1,"test_top device_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"test_top cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"test_top cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBit(c+14,"test_top halt_from_console", false,-1);
        tracep->declBit(c+15,"test_top inst_ce_o", false,-1);
        tracep->declBus(c+16,"test_top pc_o", false,-1, 31,0);
        tracep->declBus(c+275,"test_top inst_o", false,-1, 31,0);
        tracep->declBus(c+290,"test_top u_bus NrDevices", false,-1, 31,0);
        tracep->declBus(c+291,"test_top u_bus NrHosts", false,-1, 31,0);
        tracep->declBus(c+292,"test_top u_bus DataWidth", false,-1, 31,0);
        tracep->declBus(c+292,"test_top u_bus AddressWidth", false,-1, 31,0);
        tracep->declBit(c+272,"test_top u_bus clk_i", false,-1);
        tracep->declBit(c+273,"test_top u_bus rst_i", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+184+i*1,"test_top u_bus host_req_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+185+i*1,"test_top u_bus host_gnt_o", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+186+i*1,"test_top u_bus host_addr_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+187+i*1,"test_top u_bus host_we_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+188+i*1,"test_top u_bus host_wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+189+i*1,"test_top u_bus host_rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+190+i*1,"test_top u_bus device_req_o", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+193+i*1,"test_top u_bus device_addr_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+196+i*1,"test_top u_bus device_we_o", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+199+i*1,"test_top u_bus device_wdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+202+i*1,"test_top u_bus device_rdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"test_top u_bus cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"test_top u_bus cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBus(c+291,"test_top u_bus NumBitsHostSel", false,-1, 31,0);
        tracep->declBus(c+293,"test_top u_bus NumBitsDeviceSel", false,-1, 31,0);
        tracep->declBus(c+205,"test_top u_bus host_sel_req", false,-1, 0,0);
        tracep->declBus(c+206,"test_top u_bus device_sel_req", false,-1, 1,0);
        tracep->declBus(c+158,"test_top u_bus host_sel_resp", false,-1, 0,0);
        tracep->declBus(c+159,"test_top u_bus device_sel_resp", false,-1, 1,0);
        tracep->declBus(c+207,"test_top u_bus unnamedblk1 host", false,-1, 31,0);
        tracep->declBus(c+208,"test_top u_bus unnamedblk2 device", false,-1, 31,0);
        tracep->declBus(c+294,"test_top u_bus unnamedblk3 device", false,-1, 31,0);
        tracep->declBus(c+295,"test_top u_bus unnamedblk4 host", false,-1, 31,0);
        tracep->declBit(c+296,"test_top console0 FlushOnChar", false,-1);
        tracep->declBit(c+272,"test_top console0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top console0 rst_i", false,-1);
        tracep->declBit(c+209,"test_top console0 req_i", false,-1);
        tracep->declBit(c+210,"test_top console0 we_i", false,-1);
        tracep->declBus(c+211,"test_top console0 addr_i", false,-1, 31,0);
        tracep->declBus(c+212,"test_top console0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+14,"test_top console0 halt_o", false,-1);
        tracep->declBus(c+297,"test_top console0 CHAR_OUT_ADDR", false,-1, 7,0);
        tracep->declBus(c+298,"test_top console0 SIM_CTRL_ADDR", false,-1, 7,0);
        tracep->declBus(c+213,"test_top console0 ctrl_addr", false,-1, 7,0);
        tracep->declBus(c+17,"test_top console0 sim_finish", false,-1, 2,0);
        tracep->declBus(c+18,"test_top console0 log_fd", false,-1, 31,0);
        tracep->declBus(c+292,"test_top timer0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+292,"test_top timer0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+272,"test_top timer0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top timer0 rst_i", false,-1);
        tracep->declBit(c+214,"test_top timer0 req_i", false,-1);
        tracep->declBit(c+215,"test_top timer0 we_i", false,-1);
        tracep->declBus(c+216,"test_top timer0 addr_i", false,-1, 31,0);
        tracep->declBus(c+217,"test_top timer0 wdata_i", false,-1, 31,0);
        tracep->declBus(c+218,"test_top timer0 rdata_o", false,-1, 31,0);
        tracep->declBit(c+160,"test_top timer0 timer_interrupt_o", false,-1);
        tracep->declBus(c+299,"test_top timer0 TIMER_CTRL_ADDR", false,-1, 31,0);
        tracep->declBus(c+300,"test_top timer0 TIMER_COUNT_ADDR", false,-1, 31,0);
        tracep->declBit(c+161,"test_top timer0 timer_enable", false,-1);
        tracep->declBus(c+162,"test_top timer0 timer_count", false,-1, 31,0);
        tracep->declBit(c+273,"test_top core_top0 rst_i", false,-1);
        tracep->declBit(c+272,"test_top core_top0 clk_i", false,-1);
        tracep->declBit(c+15,"test_top core_top0 rom_ce_o", false,-1);
        tracep->declBus(c+16,"test_top core_top0 rom_addr_o", false,-1, 31,0);
        tracep->declBus(c+275,"test_top core_top0 rom_data_i", false,-1, 31,0);
        tracep->declBit(c+219,"test_top core_top0 ram_ce_o", false,-1);
        tracep->declBus(c+220,"test_top core_top0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+221,"test_top core_top0 ram_wdata_o", false,-1, 31,0);
        tracep->declBus(c+222,"test_top core_top0 ram_rdata_i", false,-1, 31,0);
        tracep->declBit(c+223,"test_top core_top0 ram_we_o", false,-1);
        tracep->declBus(c+16,"test_top core_top0 if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+275,"test_top core_top0 if_inst_o", false,-1, 31,0);
        tracep->declBus(c+222,"test_top core_top0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+224,"test_top core_top0 ctrl_flush_jump_o", false,-1);
        tracep->declBus(c+276,"test_top core_top0 ctrl_new_pc_o", false,-1, 31,0);
        tracep->declBus(c+225,"test_top core_top0 ctrl_stall_o", false,-1, 5,0);
        tracep->declBus(c+16,"test_top core_top0 pc_wire", false,-1, 31,0);
        tracep->declBit(c+15,"test_top core_top0 ce_wire", false,-1);
        tracep->declBus(c+19,"test_top core_top0 if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+20,"test_top core_top0 if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+226,"test_top core_top0 id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+227,"test_top core_top0 id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+228,"test_top core_top0 id_reg1_re_o", false,-1);
        tracep->declBit(c+229,"test_top core_top0 id_reg2_re_o", false,-1);
        tracep->declBus(c+230,"test_top core_top0 id_inst_o", false,-1, 31,0);
        tracep->declBus(c+231,"test_top core_top0 id_op1_o", false,-1, 31,0);
        tracep->declBus(c+232,"test_top core_top0 id_op2_o", false,-1, 31,0);
        tracep->declBit(c+233,"test_top core_top0 id_reg_we_o", false,-1);
        tracep->declBus(c+234,"test_top core_top0 id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+19,"test_top core_top0 id_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+21,"test_top core_top0 id_stallreq_o", false,-1);
        tracep->declBus(c+22,"test_top core_top0 id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+24,"test_top core_top0 id_exe_reg_we_o", false,-1);
        tracep->declBus(c+25,"test_top core_top0 id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+26,"test_top core_top0 id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+27,"test_top core_top0 id_exe_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+28,"test_top core_top0 id_exe_inst_is_load_o", false,-1);
        tracep->declBus(c+29,"test_top core_top0 id_exe_rd_o", false,-1, 4,0);
        tracep->declBus(c+235,"test_top core_top0 exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+236,"test_top core_top0 exe_reg_we_o", false,-1);
        tracep->declBus(c+237,"test_top core_top0 exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+277,"test_top core_top0 exe_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+278,"test_top core_top0 exe_mem_we_o", false,-1);
        tracep->declBus(c+279,"test_top core_top0 exe_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+280,"test_top core_top0 exe_mem_op_o", false,-1, 3,0);
        tracep->declBit(c+153,"test_top core_top0 exe_stallreq_o", false,-1);
        tracep->declBit(c+224,"test_top core_top0 exe_jump_enable_o", false,-1);
        tracep->declBus(c+281,"test_top core_top0 exe_jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+30,"test_top core_top0 exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"test_top core_top0 exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+32,"test_top core_top0 exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+33,"test_top core_top0 exe_mem_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+34,"test_top core_top0 exe_mem_mem_we_o", false,-1);
        tracep->declBus(c+35,"test_top core_top0 exe_mem_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+36,"test_top core_top0 exe_mem_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+238,"test_top core_top0 mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+239,"test_top core_top0 mem_reg_we_o", false,-1);
        tracep->declBus(c+240,"test_top core_top0 mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+220,"test_top core_top0 mem_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+223,"test_top core_top0 mem_mem_we_o", false,-1);
        tracep->declBus(c+221,"test_top core_top0 mem_mem_data_o", false,-1, 31,0);
        tracep->declBit(c+219,"test_top core_top0 mem_mem_ce_o", false,-1);
        tracep->declBus(c+37,"test_top core_top0 mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+38,"test_top core_top0 mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+39,"test_top core_top0 mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+241,"test_top core_top0 reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+242,"test_top core_top0 reg2_data_o", false,-1, 31,0);
        tracep->declBit(c+273,"test_top core_top0 ctrl0 rst_i", false,-1);
        tracep->declBit(c+21,"test_top core_top0 ctrl0 stallreq_from_id_i", false,-1);
        tracep->declBit(c+153,"test_top core_top0 ctrl0 stallreq_from_exe_i", false,-1);
        tracep->declBit(c+224,"test_top core_top0 ctrl0 jump_en_i", false,-1);
        tracep->declBus(c+281,"test_top core_top0 ctrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBus(c+225,"test_top core_top0 ctrl0 stall_o", false,-1, 5,0);
        tracep->declBit(c+224,"test_top core_top0 ctrl0 flush_jump_o", false,-1);
        tracep->declBus(c+276,"test_top core_top0 ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBit(c+272,"test_top core_top0 pc_reg0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 pc_reg0 rst_i", false,-1);
        tracep->declBus(c+276,"test_top core_top0 pc_reg0 new_pc_i", false,-1, 31,0);
        tracep->declBit(c+224,"test_top core_top0 pc_reg0 flush_jump_i", false,-1);
        tracep->declBus(c+225,"test_top core_top0 pc_reg0 stall_i", false,-1, 5,0);
        tracep->declBus(c+16,"test_top core_top0 pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+15,"test_top core_top0 pc_reg0 ce_o", false,-1);
        tracep->declBit(c+224,"test_top core_top0 pc_reg0 is_new_pc", false,-1);
        tracep->declBit(c+272,"test_top core_top0 if_id0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 if_id0 rst_i", false,-1);
        tracep->declBus(c+16,"test_top core_top0 if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+275,"test_top core_top0 if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+225,"test_top core_top0 if_id0 stall_i", false,-1, 5,0);
        tracep->declBit(c+224,"test_top core_top0 if_id0 flush_jump_i", false,-1);
        tracep->declBus(c+19,"test_top core_top0 if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+20,"test_top core_top0 if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+273,"test_top core_top0 id0 rst_i", false,-1);
        tracep->declBus(c+19,"test_top core_top0 id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+20,"test_top core_top0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+29,"test_top core_top0 id0 exe_rd_i", false,-1, 4,0);
        tracep->declBit(c+28,"test_top core_top0 id0 pre_inst_is_load_i", false,-1);
        tracep->declBus(c+241,"test_top core_top0 id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+242,"test_top core_top0 id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+235,"test_top core_top0 id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+237,"test_top core_top0 id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+236,"test_top core_top0 id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+238,"test_top core_top0 id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+240,"test_top core_top0 id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+239,"test_top core_top0 id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+226,"test_top core_top0 id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+227,"test_top core_top0 id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+228,"test_top core_top0 id0 reg1_re_o", false,-1);
        tracep->declBit(c+229,"test_top core_top0 id0 reg2_re_o", false,-1);
        tracep->declBus(c+230,"test_top core_top0 id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+231,"test_top core_top0 id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+232,"test_top core_top0 id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+233,"test_top core_top0 id0 reg_we_o", false,-1);
        tracep->declBus(c+234,"test_top core_top0 id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+19,"test_top core_top0 id0 inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+21,"test_top core_top0 id0 stallreq_o", false,-1);
        tracep->declBus(c+243,"test_top core_top0 id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+244,"test_top core_top0 id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+40,"test_top core_top0 id0 funct7", false,-1, 6,0);
        tracep->declBus(c+41,"test_top core_top0 id0 opcode", false,-1, 6,0);
        tracep->declBus(c+42,"test_top core_top0 id0 funct3", false,-1, 2,0);
        tracep->declBus(c+43,"test_top core_top0 id0 rd", false,-1, 4,0);
        tracep->declBus(c+44,"test_top core_top0 id0 rs1", false,-1, 4,0);
        tracep->declBus(c+45,"test_top core_top0 id0 rs2", false,-1, 4,0);
        tracep->declBit(c+21,"test_top core_top0 id0 is_load_hazard", false,-1);
        tracep->declBus(c+46,"test_top core_top0 id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+47,"test_top core_top0 id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+48,"test_top core_top0 id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+49,"test_top core_top0 id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+245,"test_top core_top0 id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+51,"test_top core_top0 id0 i_reg_we_o", false,-1);
        tracep->declBus(c+52,"test_top core_top0 id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+53,"test_top core_top0 id0 r_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+54,"test_top core_top0 id0 r_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+55,"test_top core_top0 id0 r_reg1_re_o", false,-1);
        tracep->declBit(c+56,"test_top core_top0 id0 r_reg2_re_o", false,-1);
        tracep->declBus(c+154,"test_top core_top0 id0 r_op1_o", false,-1, 31,0);
        tracep->declBus(c+155,"test_top core_top0 id0 r_op2_o", false,-1, 31,0);
        tracep->declBit(c+57,"test_top core_top0 id0 r_reg_we_o", false,-1);
        tracep->declBus(c+58,"test_top core_top0 id0 r_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+20,"test_top core_top0 id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+241,"test_top core_top0 id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"test_top core_top0 id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+47,"test_top core_top0 id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+48,"test_top core_top0 id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+49,"test_top core_top0 id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+245,"test_top core_top0 id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+51,"test_top core_top0 id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+52,"test_top core_top0 id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+41,"test_top core_top0 id0 inst_type_i opcode", false,-1, 6,0);
        tracep->declBus(c+42,"test_top core_top0 id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+40,"test_top core_top0 id0 inst_type_i funct7", false,-1, 6,0);
        tracep->declBus(c+45,"test_top core_top0 id0 inst_type_i shamt", false,-1, 4,0);
        tracep->declBus(c+43,"test_top core_top0 id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+44,"test_top core_top0 id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBus(c+45,"test_top core_top0 id0 inst_type_i rs2", false,-1, 4,0);
        tracep->declBit(c+59,"test_top core_top0 id0 inst_type_i isType_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 id0 inst_type_r inst_i", false,-1, 31,0);
        tracep->declBus(c+241,"test_top core_top0 id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+242,"test_top core_top0 id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+54,"test_top core_top0 id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+55,"test_top core_top0 id0 inst_type_r reg1_re_o", false,-1);
        tracep->declBit(c+56,"test_top core_top0 id0 inst_type_r reg2_re_o", false,-1);
        tracep->declBus(c+154,"test_top core_top0 id0 inst_type_r op1_o", false,-1, 31,0);
        tracep->declBus(c+155,"test_top core_top0 id0 inst_type_r op2_o", false,-1, 31,0);
        tracep->declBit(c+57,"test_top core_top0 id0 inst_type_r reg_we_o", false,-1);
        tracep->declBus(c+58,"test_top core_top0 id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+41,"test_top core_top0 id0 inst_type_r opcode", false,-1, 6,0);
        tracep->declBus(c+42,"test_top core_top0 id0 inst_type_r funct3", false,-1, 2,0);
        tracep->declBus(c+40,"test_top core_top0 id0 inst_type_r funct7", false,-1, 6,0);
        tracep->declBus(c+45,"test_top core_top0 id0 inst_type_r shamt", false,-1, 4,0);
        tracep->declBus(c+43,"test_top core_top0 id0 inst_type_r rd", false,-1, 4,0);
        tracep->declBus(c+44,"test_top core_top0 id0 inst_type_r rs1", false,-1, 4,0);
        tracep->declBus(c+45,"test_top core_top0 id0 inst_type_r rs2", false,-1, 4,0);
        tracep->declBit(c+60,"test_top core_top0 id0 inst_type_r isType_r", false,-1);
        tracep->declBit(c+61,"test_top core_top0 id0 inst_type_r isType_m", false,-1);
        tracep->declBit(c+273,"test_top core_top0 id_exe0 rst_i", false,-1);
        tracep->declBit(c+272,"test_top core_top0 id_exe0 clk_i", false,-1);
        tracep->declBus(c+231,"test_top core_top0 id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+232,"test_top core_top0 id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+233,"test_top core_top0 id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+234,"test_top core_top0 id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+230,"test_top core_top0 id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+19,"test_top core_top0 id_exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBit(c+28,"test_top core_top0 id_exe0 inst_is_load_o", false,-1);
        tracep->declBus(c+29,"test_top core_top0 id_exe0 rd_o", false,-1, 4,0);
        tracep->declBus(c+225,"test_top core_top0 id_exe0 stall_i", false,-1, 5,0);
        tracep->declBit(c+224,"test_top core_top0 id_exe0 flush_jump_i", false,-1);
        tracep->declBus(c+22,"test_top core_top0 id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+24,"test_top core_top0 id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+25,"test_top core_top0 id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+27,"test_top core_top0 id_exe0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+26,"test_top core_top0 id_exe0 inst_o", false,-1, 31,0);
        tracep->declBus(c+246,"test_top core_top0 id_exe0 opcode", false,-1, 6,0);
        tracep->declBit(c+272,"test_top core_top0 exe0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 exe0 rst_i", false,-1);
        tracep->declBus(c+22,"test_top core_top0 exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+24,"test_top core_top0 exe0 reg_we_i", false,-1);
        tracep->declBus(c+25,"test_top core_top0 exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+26,"test_top core_top0 exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+27,"test_top core_top0 exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+235,"test_top core_top0 exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+236,"test_top core_top0 exe0 reg_we_o", false,-1);
        tracep->declBus(c+237,"test_top core_top0 exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+278,"test_top core_top0 exe0 mem_we_o", false,-1);
        tracep->declBus(c+277,"test_top core_top0 exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+279,"test_top core_top0 exe0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+280,"test_top core_top0 exe0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+281,"test_top core_top0 exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+224,"test_top core_top0 exe0 jump_enable_o", false,-1);
        tracep->declBit(c+153,"test_top core_top0 exe0 stallreq_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+64,"test_top core_top0 exe0 funct7", false,-1, 6,0);
        tracep->declBit(c+282,"test_top core_top0 exe0 i_reg_we_o", false,-1);
        tracep->declBus(c+247,"test_top core_top0 exe0 i_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+283,"test_top core_top0 exe0 r_reg_we_o", false,-1);
        tracep->declBus(c+248,"test_top core_top0 exe0 r_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+249,"test_top core_top0 exe0 s_reg_we_o", false,-1);
        tracep->declBus(c+301,"test_top core_top0 exe0 s_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+250,"test_top core_top0 exe0 s_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+251,"test_top core_top0 exe0 s_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+252,"test_top core_top0 exe0 s_mem_we_o", false,-1);
        tracep->declBus(c+253,"test_top core_top0 exe0 s_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+65,"test_top core_top0 exe0 b_jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+66,"test_top core_top0 exe0 b_jump_enable_o", false,-1);
        tracep->declBit(c+284,"test_top core_top0 exe0 m_reg_we_o", false,-1);
        tracep->declBit(c+153,"test_top core_top0 exe0 mult_div_stall", false,-1);
        tracep->declBus(c+254,"test_top core_top0 exe0 m_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_i0 rst_i", false,-1);
        tracep->declBus(c+22,"test_top core_top0 exe0 exe_type_i0 op1_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 exe0 exe_type_i0 op2_i", false,-1, 31,0);
        tracep->declBus(c+26,"test_top core_top0 exe0 exe_type_i0 inst_i", false,-1, 31,0);
        tracep->declBus(c+247,"test_top core_top0 exe0 exe_type_i0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+282,"test_top core_top0 exe0 exe_type_i0 reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe0 exe_type_i0 opcode", false,-1, 6,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 exe_type_i0 funct3", false,-1, 2,0);
        tracep->declBus(c+64,"test_top core_top0 exe0 exe_type_i0 funct7", false,-1, 6,0);
        tracep->declBit(c+67,"test_top core_top0 exe0 exe_type_i0 op1_ge_op2_signed", false,-1);
        tracep->declBit(c+68,"test_top core_top0 exe0 exe_type_i0 op1_ge_op2_unsigned", false,-1);
        tracep->declBus(c+69,"test_top core_top0 exe0 exe_type_i0 sr_shift", false,-1, 31,0);
        tracep->declBus(c+70,"test_top core_top0 exe0 exe_type_i0 sr_shift_mask", false,-1, 31,0);
        tracep->declBit(c+71,"test_top core_top0 exe0 exe_type_i0 isType_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_r0 rst_i", false,-1);
        tracep->declBus(c+22,"test_top core_top0 exe0 exe_type_r0 op1_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 exe0 exe_type_r0 op2_i", false,-1, 31,0);
        tracep->declBus(c+26,"test_top core_top0 exe0 exe_type_r0 inst_i", false,-1, 31,0);
        tracep->declBus(c+248,"test_top core_top0 exe0 exe_type_r0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+283,"test_top core_top0 exe0 exe_type_r0 reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe0 exe_type_r0 opcode", false,-1, 6,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 exe_type_r0 funct3", false,-1, 2,0);
        tracep->declBus(c+64,"test_top core_top0 exe0 exe_type_r0 funct7", false,-1, 6,0);
        tracep->declBit(c+67,"test_top core_top0 exe0 exe_type_r0 op1_ge_op2_signed", false,-1);
        tracep->declBit(c+68,"test_top core_top0 exe0 exe_type_r0 op1_ge_op2_unsigned", false,-1);
        tracep->declBus(c+69,"test_top core_top0 exe0 exe_type_r0 sr_shift", false,-1, 31,0);
        tracep->declBus(c+70,"test_top core_top0 exe0 exe_type_r0 sr_shift_mask", false,-1, 31,0);
        tracep->declBit(c+72,"test_top core_top0 exe0 exe_type_r0 isType_r", false,-1);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_s_l0 rst_i", false,-1);
        tracep->declBus(c+22,"test_top core_top0 exe0 exe_type_s_l0 op1_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 exe0 exe_type_s_l0 op2_i", false,-1, 31,0);
        tracep->declBus(c+26,"test_top core_top0 exe0 exe_type_s_l0 inst_i", false,-1, 31,0);
        tracep->declBus(c+301,"test_top core_top0 exe0 exe_type_s_l0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+249,"test_top core_top0 exe0 exe_type_s_l0 reg_we_o", false,-1);
        tracep->declBus(c+251,"test_top core_top0 exe0 exe_type_s_l0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+250,"test_top core_top0 exe0 exe_type_s_l0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+252,"test_top core_top0 exe0 exe_type_s_l0 mem_we_o", false,-1);
        tracep->declBus(c+253,"test_top core_top0 exe0 exe_type_s_l0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+62,"test_top core_top0 exe0 exe_type_s_l0 opcode", false,-1, 6,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 exe_type_s_l0 funct3", false,-1, 2,0);
        tracep->declBus(c+73,"test_top core_top0 exe0 exe_type_s_l0 load_addr_offset", false,-1, 31,0);
        tracep->declBus(c+74,"test_top core_top0 exe0 exe_type_s_l0 store_addr_offset", false,-1, 31,0);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_b_j0 rst_i", false,-1);
        tracep->declBus(c+26,"test_top core_top0 exe0 exe_type_b_j0 inst_i", false,-1, 31,0);
        tracep->declBus(c+27,"test_top core_top0 exe0 exe_type_b_j0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+22,"test_top core_top0 exe0 exe_type_b_j0 op1_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 exe0 exe_type_b_j0 op2_i", false,-1, 31,0);
        tracep->declBus(c+65,"test_top core_top0 exe0 exe_type_b_j0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+66,"test_top core_top0 exe0 exe_type_b_j0 jump_enable_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe0 exe_type_b_j0 opcode", false,-1, 6,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 exe_type_b_j0 funct3", false,-1, 2,0);
        tracep->declBit(c+75,"test_top core_top0 exe0 exe_type_b_j0 op1_eq_op2", false,-1);
        tracep->declBit(c+76,"test_top core_top0 exe0 exe_type_b_j0 op1_ge_op2_signed", false,-1);
        tracep->declBit(c+77,"test_top core_top0 exe0 exe_type_b_j0 op1_ge_op2_unsigned", false,-1);
        tracep->declBus(c+27,"test_top core_top0 exe0 exe_type_b_j0 pc", false,-1, 31,0);
        tracep->declBus(c+78,"test_top core_top0 exe0 exe_type_b_j0 b_imm", false,-1, 31,0);
        tracep->declBus(c+79,"test_top core_top0 exe0 exe_type_b_j0 jal_imm", false,-1, 31,0);
        tracep->declBit(c+272,"test_top core_top0 exe0 exe_type_m0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_m0 rst_i", false,-1);
        tracep->declBus(c+22,"test_top core_top0 exe0 exe_type_m0 op1_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top core_top0 exe0 exe_type_m0 op2_i", false,-1, 31,0);
        tracep->declBus(c+26,"test_top core_top0 exe0 exe_type_m0 inst_i", false,-1, 31,0);
        tracep->declBit(c+153,"test_top core_top0 exe0 exe_type_m0 stall_o", false,-1);
        tracep->declBus(c+254,"test_top core_top0 exe0 exe_type_m0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+284,"test_top core_top0 exe0 exe_type_m0 reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe0 exe_type_m0 opcode", false,-1, 6,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 exe_type_m0 funct3", false,-1, 2,0);
        tracep->declBus(c+64,"test_top core_top0 exe0 exe_type_m0 funct7", false,-1, 6,0);
        tracep->declBit(c+80,"test_top core_top0 exe0 exe_type_m0 isType_m", false,-1);
        tracep->declBus(c+255,"test_top core_top0 exe0 exe_type_m0 a_o", false,-1, 31,0);
        tracep->declBus(c+256,"test_top core_top0 exe0 exe_type_m0 b_o", false,-1, 31,0);
        tracep->declBus(c+81,"test_top core_top0 exe0 exe_type_m0 div_result", false,-1, 31,0);
        tracep->declBit(c+257,"test_top core_top0 exe0 exe_type_m0 is_q_operation", false,-1);
        tracep->declBit(c+258,"test_top core_top0 exe0 exe_type_m0 mult_req_o", false,-1);
        tracep->declBit(c+259,"test_top core_top0 exe0 exe_type_m0 div_req_o", false,-1);
        tracep->declBit(c+82,"test_top core_top0 exe0 exe_type_m0 mult_ready_i", false,-1);
        tracep->declBit(c+83,"test_top core_top0 exe0 exe_type_m0 div_ready_i", false,-1);
        tracep->declQuad(c+84,"test_top core_top0 exe0 exe_type_m0 mult_result_i", false,-1, 63,0);
        tracep->declBus(c+260,"test_top core_top0 exe0 exe_type_m0 result", false,-1, 31,0);
        tracep->declBit(c+86,"test_top core_top0 exe0 exe_type_m0 is_a_neg", false,-1);
        tracep->declBit(c+87,"test_top core_top0 exe0 exe_type_m0 is_b_neg", false,-1);
        tracep->declBit(c+88,"test_top core_top0 exe0 exe_type_m0 is_b_zero", false,-1);
        tracep->declBit(c+89,"test_top core_top0 exe0 exe_type_m0 signed_adjust", false,-1);
        tracep->declQuad(c+261,"test_top core_top0 exe0 exe_type_m0 invert_result", false,-1, 63,0);
        tracep->declBus(c+292,"test_top core_top0 exe0 exe_type_m0 mul0 XLEN", false,-1, 31,0);
        tracep->declBit(c+272,"test_top core_top0 exe0 exe_type_m0 mul0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_m0 mul0 rst_i", false,-1);
        tracep->declBus(c+255,"test_top core_top0 exe0 exe_type_m0 mul0 a_i", false,-1, 31,0);
        tracep->declBus(c+256,"test_top core_top0 exe0 exe_type_m0 mul0 b_i", false,-1, 31,0);
        tracep->declBit(c+258,"test_top core_top0 exe0 exe_type_m0 mul0 req_i", false,-1);
        tracep->declBit(c+82,"test_top core_top0 exe0 exe_type_m0 mul0 ready_o", false,-1);
        tracep->declQuad(c+84,"test_top core_top0 exe0 exe_type_m0 mul0 result_o", false,-1, 63,0);
        tracep->declBit(c+263,"test_top core_top0 exe0 exe_type_m0 mul0 is_a_zero", false,-1);
        tracep->declBit(c+264,"test_top core_top0 exe0 exe_type_m0 mul0 is_b_zero", false,-1);
        tracep->declBus(c+255,"test_top core_top0 exe0 exe_type_m0 mul0 op_a", false,-1, 31,0);
        tracep->declBus(c+256,"test_top core_top0 exe0 exe_type_m0 mul0 op_b", false,-1, 31,0);
        tracep->declBit(c+90,"test_top core_top0 exe0 exe_type_m0 mul0 is_calc_done", false,-1);
        tracep->declBus(c+91,"test_top core_top0 exe0 exe_type_m0 mul0 reg32", false,-1, 31,0);
        tracep->declArray(c+92,"test_top core_top0 exe0 exe_type_m0 mul0 result", false,-1, 64,0);
        tracep->declBus(c+95,"test_top core_top0 exe0 exe_type_m0 mul0 cnt", false,-1, 5,0);
        tracep->declBus(c+302,"test_top core_top0 exe0 exe_type_m0 mul0 S_IDLE", false,-1, 2,0);
        tracep->declBus(c+303,"test_top core_top0 exe0 exe_type_m0 mul0 S_CALC", false,-1, 2,0);
        tracep->declBus(c+304,"test_top core_top0 exe0 exe_type_m0 mul0 S_DONE", false,-1, 2,0);
        tracep->declBus(c+96,"test_top core_top0 exe0 exe_type_m0 mul0 S", false,-1, 2,0);
        tracep->declBus(c+156,"test_top core_top0 exe0 exe_type_m0 mul0 S_nxt", false,-1, 2,0);
        tracep->declBit(c+97,"test_top core_top0 exe0 exe_type_m0 mul0 mul_add", false,-1);
        tracep->declBus(c+91,"test_top core_top0 exe0 exe_type_m0 mul0 adder_opa", false,-1, 31,0);
        tracep->declBus(c+98,"test_top core_top0 exe0 exe_type_m0 mul0 adder_opb", false,-1, 31,0);
        tracep->declQuad(c+99,"test_top core_top0 exe0 exe_type_m0 mul0 adder_tmp", false,-1, 32,0);
        tracep->declArray(c+101,"test_top core_top0 exe0 exe_type_m0 mul0 result_tmp", false,-1, 64,0);
        tracep->declBus(c+292,"test_top core_top0 exe0 exe_type_m0 div0 XLEN", false,-1, 31,0);
        tracep->declBit(c+272,"test_top core_top0 exe0 exe_type_m0 div0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 exe0 exe_type_m0 div0 rst_i", false,-1);
        tracep->declBus(c+255,"test_top core_top0 exe0 exe_type_m0 div0 a_i", false,-1, 31,0);
        tracep->declBus(c+256,"test_top core_top0 exe0 exe_type_m0 div0 b_i", false,-1, 31,0);
        tracep->declBit(c+259,"test_top core_top0 exe0 exe_type_m0 div0 req_i", false,-1);
        tracep->declBit(c+257,"test_top core_top0 exe0 exe_type_m0 div0 is_q_i", false,-1);
        tracep->declBus(c+81,"test_top core_top0 exe0 exe_type_m0 div0 result_o", false,-1, 31,0);
        tracep->declBit(c+83,"test_top core_top0 exe0 exe_type_m0 div0 ready_o", false,-1);
        tracep->declBit(c+265,"test_top core_top0 exe0 exe_type_m0 div0 is_a_zero", false,-1);
        tracep->declBit(c+266,"test_top core_top0 exe0 exe_type_m0 div0 is_b_zero", false,-1);
        tracep->declBus(c+255,"test_top core_top0 exe0 exe_type_m0 div0 op_a", false,-1, 31,0);
        tracep->declBus(c+256,"test_top core_top0 exe0 exe_type_m0 div0 op_b", false,-1, 31,0);
        tracep->declBit(c+104,"test_top core_top0 exe0 exe_type_m0 div0 is_calc_done", false,-1);
        tracep->declBus(c+105,"test_top core_top0 exe0 exe_type_m0 div0 reg32", false,-1, 31,0);
        tracep->declArray(c+106,"test_top core_top0 exe0 exe_type_m0 div0 result", false,-1, 64,0);
        tracep->declBus(c+109,"test_top core_top0 exe0 exe_type_m0 div0 cnt", false,-1, 5,0);
        tracep->declBus(c+110,"test_top core_top0 exe0 exe_type_m0 div0 quotient", false,-1, 31,0);
        tracep->declBus(c+111,"test_top core_top0 exe0 exe_type_m0 div0 remainder", false,-1, 31,0);
        tracep->declBus(c+302,"test_top core_top0 exe0 exe_type_m0 div0 S_IDLE", false,-1, 2,0);
        tracep->declBus(c+303,"test_top core_top0 exe0 exe_type_m0 div0 S_CALC", false,-1, 2,0);
        tracep->declBus(c+304,"test_top core_top0 exe0 exe_type_m0 div0 S_DONE", false,-1, 2,0);
        tracep->declBus(c+112,"test_top core_top0 exe0 exe_type_m0 div0 S", false,-1, 2,0);
        tracep->declBus(c+157,"test_top core_top0 exe0 exe_type_m0 div0 S_next", false,-1, 2,0);
        tracep->declBit(c+113,"test_top core_top0 exe0 exe_type_m0 div0 div_sub", false,-1);
        tracep->declQuad(c+114,"test_top core_top0 exe0 exe_type_m0 div0 sub_tmp", false,-1, 32,0);
        tracep->declArray(c+116,"test_top core_top0 exe0 exe_type_m0 div0 result_tmp", false,-1, 64,0);
        tracep->declBit(c+273,"test_top core_top0 exe_mem0 rst_i", false,-1);
        tracep->declBit(c+272,"test_top core_top0 exe_mem0 clk_i", false,-1);
        tracep->declBus(c+235,"test_top core_top0 exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+236,"test_top core_top0 exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+237,"test_top core_top0 exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+278,"test_top core_top0 exe_mem0 mem_we_i", false,-1);
        tracep->declBus(c+277,"test_top core_top0 exe_mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+279,"test_top core_top0 exe_mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+280,"test_top core_top0 exe_mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+30,"test_top core_top0 exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"test_top core_top0 exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+32,"test_top core_top0 exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+34,"test_top core_top0 exe_mem0 mem_we_o", false,-1);
        tracep->declBus(c+33,"test_top core_top0 exe_mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+35,"test_top core_top0 exe_mem0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+36,"test_top core_top0 exe_mem0 mem_op_o", false,-1, 3,0);
        tracep->declBit(c+272,"test_top core_top0 mem0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 mem0 rst_i", false,-1);
        tracep->declBus(c+30,"test_top core_top0 mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+31,"test_top core_top0 mem0 reg_we_i", false,-1);
        tracep->declBus(c+32,"test_top core_top0 mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+34,"test_top core_top0 mem0 mem_we_i", false,-1);
        tracep->declBus(c+33,"test_top core_top0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+35,"test_top core_top0 mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+36,"test_top core_top0 mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+222,"test_top core_top0 mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+220,"test_top core_top0 mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBit(c+223,"test_top core_top0 mem0 ram_w_request_o", false,-1);
        tracep->declBus(c+221,"test_top core_top0 mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+219,"test_top core_top0 mem0 ram_ce_o", false,-1);
        tracep->declBus(c+238,"test_top core_top0 mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+239,"test_top core_top0 mem0 reg_we_o", false,-1);
        tracep->declBus(c+240,"test_top core_top0 mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+119,"test_top core_top0 mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBus(c+240,"test_top core_top0 mem0 reg_wdata", false,-1, 31,0);
        tracep->declBit(c+273,"test_top core_top0 mem_wb0 rst_i", false,-1);
        tracep->declBit(c+272,"test_top core_top0 mem_wb0 clk_i", false,-1);
        tracep->declBus(c+238,"test_top core_top0 mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+239,"test_top core_top0 mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+240,"test_top core_top0 mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+37,"test_top core_top0 mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+38,"test_top core_top0 mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+39,"test_top core_top0 mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+305,"test_top data_ram0 RAM_SIZE", false,-1, 31,0);
        tracep->declBus(c+306,"test_top data_ram0 RAM_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+272,"test_top data_ram0 clk_i", false,-1);
        tracep->declBit(c+267,"test_top data_ram0 ce_i", false,-1);
        tracep->declBus(c+268,"test_top data_ram0 addr_i", false,-1, 31,0);
        tracep->declBit(c+269,"test_top data_ram0 we_i", false,-1);
        tracep->declBus(c+270,"test_top data_ram0 data_i", false,-1, 31,0);
        tracep->declBus(c+285,"test_top data_ram0 data_o", false,-1, 31,0);
        tracep->declBit(c+15,"test_top data_ram0 inst_ce_i", false,-1);
        tracep->declBus(c+16,"test_top data_ram0 pc_i", false,-1, 31,0);
        tracep->declBus(c+275,"test_top data_ram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+271,"test_top data_ram0 addr4", false,-1, 20,0);
        tracep->declBus(c+120,"test_top data_ram0 rom_addr4", false,-1, 20,0);
        tracep->declBit(c+272,"test_top core_top0 regfile0 clk_i", false,-1);
        tracep->declBit(c+273,"test_top core_top0 regfile0 rst_i", false,-1);
        tracep->declBit(c+38,"test_top core_top0 regfile0 we_i", false,-1);
        tracep->declBus(c+37,"test_top core_top0 regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+39,"test_top core_top0 regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+228,"test_top core_top0 regfile0 re1_i", false,-1);
        tracep->declBus(c+226,"test_top core_top0 regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+229,"test_top core_top0 regfile0 re2_i", false,-1);
        tracep->declBus(c+227,"test_top core_top0 regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+241,"test_top core_top0 regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+242,"test_top core_top0 regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+121+i*1,"test_top core_top0 regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+13,"test_top core_top0 regfile0 i", false,-1, 31,0);
    }
}

void Vtest_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtest_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtest_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        tracep->fullBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        tracep->fullBit(oldp+15,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        tracep->fullIData(oldp+16,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        tracep->fullCData(oldp+17,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        tracep->fullBit(oldp+21,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                  & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                     | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
        tracep->fullIData(oldp+22,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        tracep->fullBit(oldp+28,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
        tracep->fullCData(oldp+29,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
        tracep->fullCData(oldp+30,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+31,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+32,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        tracep->fullBit(oldp+34,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        tracep->fullIData(oldp+35,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        tracep->fullCData(oldp+36,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        tracep->fullCData(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+39,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullCData(oldp+40,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+41,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+42,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+43,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->fullCData(oldp+44,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+45,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o),5);
        tracep->fullCData(oldp+47,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o),5);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o));
        tracep->fullIData(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullBit(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o));
        tracep->fullCData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o),5);
        tracep->fullCData(oldp+53,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                     | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                     ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->fullCData(oldp+54,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                     | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                     ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U))
                                     : 0U)),5);
        tracep->fullBit(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
        tracep->fullBit(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
        tracep->fullBit(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
        tracep->fullCData(oldp+58,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                     | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                     ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullBit(oldp+59,((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
        tracep->fullBit(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        tracep->fullBit(oldp+61,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
        tracep->fullCData(oldp+62,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+63,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+64,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U))),7);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o),32);
        tracep->fullBit(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o));
        tracep->fullBit(oldp+67,(VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
        tracep->fullBit(oldp+68,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                  >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
        tracep->fullIData(oldp+69,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
        tracep->fullIData(oldp+70,((0xffffffffU >> 
                                    (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
        tracep->fullBit(oldp+71,((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        tracep->fullBit(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        tracep->fullIData(oldp+73,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x14U)))),32);
        tracep->fullIData(oldp+74,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 7U))))),32);
        tracep->fullBit(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        tracep->fullBit(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
        tracep->fullBit(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
        tracep->fullIData(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm),32);
        tracep->fullIData(oldp+79,(((0xfff00000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0x14U)) | 
                                    ((0xff000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                     | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U)))))),32);
        tracep->fullBit(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
        tracep->fullIData(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
        tracep->fullBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
        tracep->fullBit(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
        tracep->fullQData(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
        tracep->fullBit(oldp+86,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                        >> 0x1fU))));
        tracep->fullBit(oldp+87,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                        >> 0x1fU))));
        tracep->fullBit(oldp+88,((1U & (~ (IData)((0U 
                                                   != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
        tracep->fullBit(oldp+90,((1U & (~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
        tracep->fullIData(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
        tracep->fullWData(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
        tracep->fullCData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
        tracep->fullCData(oldp+96,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
        tracep->fullBit(oldp+97,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
        tracep->fullIData(oldp+98,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
        tracep->fullQData(oldp+99,((0x1ffffffffULL 
                                    & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                       + (QData)((IData)(
                                                         vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]))))),33);
        __Vtemp1[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
        __Vtemp1[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                                  + (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
        __Vtemp1[2U] = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                                   + (QData)((IData)(
                                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                                >> 0x20U));
        tracep->fullWData(oldp+101,(__Vtemp1),65);
        tracep->fullBit(oldp+104,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
        tracep->fullIData(oldp+105,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
        tracep->fullWData(oldp+106,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
        tracep->fullCData(oldp+109,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
        tracep->fullIData(oldp+111,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                      << 0x1fU) | (
                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                                   >> 1U))),32);
        tracep->fullCData(oldp+112,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
        tracep->fullBit(oldp+113,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                   >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
        tracep->fullQData(oldp+114,((0x1ffffffffULL 
                                     & ((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                        - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32))))),33);
        __Vtemp2[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
        __Vtemp2[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                  - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
        __Vtemp2[2U] = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                                >> 0x20U));
        tracep->fullWData(oldp+116,(__Vtemp2),65);
        tracep->fullCData(oldp+119,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        tracep->fullIData(oldp+120,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+124,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+127,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+141,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+143,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+146,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+148,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+149,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+151,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        tracep->fullBit(oldp+153,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                    & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                   | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                      & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
        tracep->fullIData(oldp+154,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                      : 0U)),32);
        tracep->fullIData(oldp+155,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                      : 0U)),32);
        tracep->fullCData(oldp+156,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                      ? ((1U & ((~ (IData)(
                                                           (0U 
                                                            != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                                                | (~ (IData)(
                                                             (0U 
                                                              != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                                          ? 3U : 1U)
                                      : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                              ? 1U : 3U)
                                          : 0U))),3);
        tracep->fullCData(oldp+157,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                      ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                                          ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                                              | (0U 
                                                 == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                                              ? 3U : 1U)
                                          : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                                     ? 1U
                                                     : 3U)
                                                    : 0U))),3);
        tracep->fullBit(oldp+158,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_resp));
        tracep->fullCData(oldp+159,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
        tracep->fullBit(oldp+160,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__timer_interrupt_o));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__timer_enable));
        tracep->fullIData(oldp+162,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__timer_count),32);
        tracep->fullBit(oldp+163,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        tracep->fullBit(oldp+164,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        tracep->fullIData(oldp+165,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        tracep->fullBit(oldp+166,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        tracep->fullIData(oldp+167,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        tracep->fullBit(oldp+169,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        tracep->fullBit(oldp+170,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        tracep->fullBit(oldp+171,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
        tracep->fullIData(oldp+172,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
        tracep->fullBit(oldp+175,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        tracep->fullBit(oldp+176,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        tracep->fullBit(oldp+177,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
        tracep->fullIData(oldp+178,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        tracep->fullIData(oldp+179,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
        tracep->fullBit(oldp+184,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        tracep->fullBit(oldp+185,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        tracep->fullIData(oldp+186,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        tracep->fullBit(oldp+187,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        tracep->fullIData(oldp+188,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        tracep->fullBit(oldp+190,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
        tracep->fullBit(oldp+192,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
        tracep->fullIData(oldp+193,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
        tracep->fullBit(oldp+196,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
        tracep->fullIData(oldp+199,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        tracep->fullIData(oldp+201,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        tracep->fullIData(oldp+203,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
        tracep->fullBit(oldp+205,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
        tracep->fullCData(oldp+206,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__unnamedblk1__DOT__host),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__unnamedblk2__DOT__device),32);
        tracep->fullBit(oldp+209,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [1U]));
        tracep->fullBit(oldp+210,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [1U]));
        tracep->fullIData(oldp+211,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [1U]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [1U]),32);
        tracep->fullCData(oldp+213,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [1U])),8);
        tracep->fullBit(oldp+214,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [2U]));
        tracep->fullBit(oldp+215,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [2U]));
        tracep->fullIData(oldp+216,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [2U]),32);
        tracep->fullIData(oldp+217,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [2U]),32);
        tracep->fullIData(oldp+218,(vlSymsp->TOP__test_top.__Vcellout__timer0__rdata_o),32);
        tracep->fullBit(oldp+219,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
        tracep->fullIData(oldp+220,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
        tracep->fullIData(oldp+221,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
        tracep->fullIData(oldp+222,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                    [0U]),32);
        tracep->fullBit(oldp+223,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
        tracep->fullBit(oldp+224,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
        tracep->fullCData(oldp+225,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        tracep->fullCData(oldp+226,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        tracep->fullCData(oldp+227,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        tracep->fullBit(oldp+228,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+230,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        tracep->fullIData(oldp+231,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                      & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                          : 0U) : (
                                                   (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                     : 0U)
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
        tracep->fullIData(oldp+232,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                      & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                          : 0U) : (
                                                   (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                     : 0U)
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
        tracep->fullBit(oldp+233,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        tracep->fullCData(oldp+234,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+236,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+237,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        tracep->fullCData(oldp+238,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+239,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+240,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
        tracep->fullIData(oldp+241,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        tracep->fullIData(oldp+242,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        tracep->fullIData(oldp+243,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        tracep->fullIData(oldp+244,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        tracep->fullIData(oldp+245,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o),32);
        tracep->fullCData(oldp+246,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
        tracep->fullIData(oldp+247,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o),32);
        tracep->fullIData(oldp+248,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
        tracep->fullBit(oldp+249,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o));
        tracep->fullIData(oldp+250,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o),32);
        tracep->fullIData(oldp+251,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o),32);
        tracep->fullBit(oldp+252,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o));
        tracep->fullCData(oldp+253,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o),4);
        tracep->fullIData(oldp+254,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
        tracep->fullIData(oldp+255,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
        tracep->fullIData(oldp+256,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
        tracep->fullBit(oldp+257,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
        tracep->fullBit(oldp+258,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
        tracep->fullIData(oldp+260,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
        tracep->fullQData(oldp+261,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
        tracep->fullBit(oldp+263,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
        tracep->fullBit(oldp+264,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
        tracep->fullBit(oldp+265,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
        tracep->fullBit(oldp+266,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
        tracep->fullBit(oldp+267,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [0U]));
        tracep->fullIData(oldp+268,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]),32);
        tracep->fullBit(oldp+269,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [0U]));
        tracep->fullIData(oldp+270,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+271,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U])),21);
        tracep->fullBit(oldp+272,(vlTOPp->clk_i));
        tracep->fullBit(oldp+273,(vlTOPp->rst_i));
        tracep->fullBit(oldp+274,(vlTOPp->halt_o));
        tracep->fullIData(oldp+275,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                      ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                          [(0x1ffffcU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                          << 0x18U) 
                                         | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                             << 0x10U) 
                                            | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1fffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x1ffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                << 8U) 
                                               | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                               [(0x1fffffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x1ffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                                      : 0U)),32);
        tracep->fullIData(oldp+276,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
                                      ? ((IData)(vlTOPp->rst_i)
                                          ? 0U : ((0x40U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                         ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                         ? 
                                                        (0xfffffffeU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
                                                            + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                         ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                   : 0U))
                                      : 0U)),32);
        tracep->fullIData(oldp+277,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o
                                                        : 0U)
                                                       : 0U)))))))),32);
        tracep->fullBit(oldp+278,(((~ (IData)(vlTOPp->rst_i)) 
                                   & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 6U)) & 
                                      ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 4U)) 
                                           & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 3U)) 
                                              & ((~ 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 2U)) 
                                                 & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 1U) 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o))))))
                                        : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 4U)) 
                                           & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 3U)) 
                                              & ((~ 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 2U)) 
                                                 & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 1U) 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o)))))))))));
        tracep->fullIData(oldp+279,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o
                                                        : 0U)
                                                       : 0U)))))))),32);
        tracep->fullCData(oldp+280,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o)
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o)
                                                        : 0U)
                                                       : 0U)))))))),4);
        tracep->fullIData(oldp+281,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x20U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? 
                                                       (0xfffffffeU 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
                                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                               : 0U))),32);
        tracep->fullBit(oldp+282,(((~ ((IData)(vlTOPp->rst_i) 
                                       | (0x13U != 
                                          (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))) 
                                   & ((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                      & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                          ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0xdU) 
                                             | ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0xcU)) 
                                                | ((0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x19U))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x19U))))))
                                          : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0xdU) 
                                             | ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0xcU)) 
                                                | (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x19U))))))))));
        tracep->fullBit(oldp+283,((1U & ((~ ((IData)(vlTOPp->rst_i) 
                                             | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                         & ((0x4000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0xdU) 
                                                | ((~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0xcU)) 
                                                   | ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x19U))) 
                                                      | (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U))))))
                                             : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0xdU) 
                                                | ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0xcU) 
                                                   | ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x19U))) 
                                                      | (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U)))))))))));
        tracep->fullBit(oldp+284,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                            | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
        tracep->fullIData(oldp+285,((vlSymsp->TOP__test_top.__PVT__device_req
                                     [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                [0U])] 
                                              << 0x18U) 
                                             | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__device_addr
                                                       [0U])))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__device_addr
                                                         [0U])))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__device_addr
                                                        [0U])))])))
                                      : 0U)),32);
        tracep->fullIData(oldp+286,(3U),32);
        tracep->fullIData(oldp+287,(1U),32);
        tracep->fullIData(oldp+288,(0x200000U),32);
        tracep->fullIData(oldp+289,(0x15U),32);
        tracep->fullIData(oldp+290,(3U),32);
        tracep->fullIData(oldp+291,(1U),32);
        tracep->fullIData(oldp+292,(0x20U),32);
        tracep->fullIData(oldp+293,(2U),32);
        tracep->fullIData(oldp+294,(3U),32);
        tracep->fullIData(oldp+295,(1U),32);
        tracep->fullBit(oldp+296,(1U));
        tracep->fullCData(oldp+297,(4U),8);
        tracep->fullCData(oldp+298,(8U),8);
        tracep->fullIData(oldp+299,(4U),32);
        tracep->fullIData(oldp+300,(8U),32);
        tracep->fullIData(oldp+301,(0U),32);
        tracep->fullCData(oldp+302,(0U),3);
        tracep->fullCData(oldp+303,(1U),3);
        tracep->fullCData(oldp+304,(3U),3);
        tracep->fullIData(oldp+305,(0x200000U),32);
        tracep->fullIData(oldp+306,(0x15U),32);
    }
}
