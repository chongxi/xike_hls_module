// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _rt_feedback_HH_
#define _rt_feedback_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct rt_feedback : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > fet_packet_spk_id_V_dout;
    sc_in< sc_logic > fet_packet_spk_id_V_empty_n;
    sc_out< sc_logic > fet_packet_spk_id_V_read;
    sc_out< sc_lv<32> > spk_id_out_V_V_TDATA;
    sc_out< sc_logic > spk_id_out_V_V_TVALID;
    sc_in< sc_logic > spk_id_out_V_V_TREADY;


    // Module declarations
    rt_feedback(sc_module_name name);
    SC_HAS_PROCESS(rt_feedback);

    ~rt_feedback();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_22;
    sc_signal< sc_logic > fet_packet_spk_id_V_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg1_fsm_2;
    sc_signal< bool > ap_sig_42;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_lv<1> > exitcond1_reg_162;
    sc_signal< sc_lv<1> > tmp_1_reg_171;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_1;
    sc_signal< bool > ap_sig_60;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<1> > tmp_2_reg_175;
    sc_signal< sc_logic > spk_id_out_V_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_4;
    sc_signal< bool > ap_sig_76;
    sc_signal< sc_lv<1> > tmp_reg_179;
    sc_signal< sc_lv<1> > exitcond_fu_143_p2;
    sc_signal< sc_lv<3> > i_reg_78;
    sc_signal< sc_lv<1> > exitcond1_fu_105_p2;
    sc_signal< bool > ap_sig_90;
    sc_signal< sc_lv<3> > i_1_fu_111_p2;
    sc_signal< sc_lv<3> > i_1_reg_166;
    sc_signal< sc_lv<1> > tmp_1_fu_117_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_123_p2;
    sc_signal< sc_lv<1> > tmp_fu_137_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_3;
    sc_signal< bool > ap_sig_108;
    sc_signal< sc_lv<18> > j_1_fu_149_p2;
    sc_signal< sc_logic > ap_sig_ioackin_spk_id_out_V_V_TREADY;
    sc_signal< bool > ap_sig_124;
    sc_signal< sc_lv<3> > i_phi_fu_82_p4;
    sc_signal< sc_lv<18> > j_reg_89;
    sc_signal< sc_lv<32> > val_assign_fu_60;
    sc_signal< sc_logic > ap_reg_ioackin_spk_id_out_V_V_TREADY;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    sc_signal< bool > ap_sig_85;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_st1_fsm_0;
    static const sc_lv<5> ap_ST_pp0_stg0_fsm_1;
    static const sc_lv<5> ap_ST_pp0_stg1_fsm_2;
    static const sc_lv<5> ap_ST_st5_fsm_3;
    static const sc_lv<5> ap_ST_st6_fsm_4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<18> ap_const_lv18_0;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<32> ap_const_lv32_378;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<18> ap_const_lv18_3D090;
    static const sc_lv<18> ap_const_lv18_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_108();
    void thread_ap_sig_124();
    void thread_ap_sig_22();
    void thread_ap_sig_42();
    void thread_ap_sig_60();
    void thread_ap_sig_76();
    void thread_ap_sig_85();
    void thread_ap_sig_90();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_1();
    void thread_ap_sig_cseq_ST_pp0_stg1_fsm_2();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st5_fsm_3();
    void thread_ap_sig_cseq_ST_st6_fsm_4();
    void thread_ap_sig_ioackin_spk_id_out_V_V_TREADY();
    void thread_exitcond1_fu_105_p2();
    void thread_exitcond_fu_143_p2();
    void thread_fet_packet_spk_id_V_blk_n();
    void thread_fet_packet_spk_id_V_read();
    void thread_i_1_fu_111_p2();
    void thread_i_phi_fu_82_p4();
    void thread_j_1_fu_149_p2();
    void thread_spk_id_out_V_V_TDATA();
    void thread_spk_id_out_V_V_TDATA_blk_n();
    void thread_spk_id_out_V_V_TVALID();
    void thread_tmp_1_fu_117_p2();
    void thread_tmp_2_fu_123_p2();
    void thread_tmp_fu_137_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
