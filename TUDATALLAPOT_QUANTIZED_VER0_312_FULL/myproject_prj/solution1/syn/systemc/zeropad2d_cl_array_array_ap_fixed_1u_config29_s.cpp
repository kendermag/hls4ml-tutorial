// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "zeropad2d_cl_array_array_ap_fixed_1u_config29_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_ST_fsm_state1 = "1";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_ST_fsm_state2 = "10";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_ST_fsm_state3 = "100";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_ST_fsm_state4 = "1000";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_ST_fsm_state5 = "10000";
const sc_lv<32> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv32_3 = "11";
const sc_lv<1> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv1_0 = "0";
const sc_lv<32> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv32_1 = "1";
const sc_lv<32> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv32_2 = "10";
const sc_lv<1> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv1_1 = "1";
const sc_lv<32> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv32_4 = "100";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv5_0 = "00000";
const sc_lv<10> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv10_0 = "0000000000";
const sc_lv<16> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv16_0 = "0000000000000000";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv5_12 = "10010";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv5_1 = "1";
const sc_lv<10> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv10_200 = "1000000000";
const sc_lv<10> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv10_1 = "1";
const sc_lv<5> zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_lv5_10 = "10000";
const bool zeropad2d_cl_array_array_ap_fixed_1u_config29_s::ap_const_boolean_1 = true;

zeropad2d_cl_array_array_ap_fixed_1u_config29_s::zeropad2d_cl_array_array_ap_fixed_1u_config29_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_block_state2);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( icmp_ln56_fu_125_p2 );

    SC_METHOD(thread_ap_block_state3);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( icmp_ln61_fu_137_p2 );

    SC_METHOD(thread_ap_block_state4);
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( icmp_ln65_fu_149_p2 );

    SC_METHOD(thread_ap_block_state5);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( icmp_ln74_fu_161_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_data_V_data_V_blk_n);
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );

    SC_METHOD(thread_data_V_data_V_read);
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );

    SC_METHOD(thread_i_fu_143_p2);
    sensitive << ( i1_0_reg_92 );

    SC_METHOD(thread_icmp_ln56_fu_125_p2);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln56_fu_125_p2 );
    sensitive << ( j_0_reg_81 );

    SC_METHOD(thread_icmp_ln61_fu_137_p2);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln61_fu_137_p2 );
    sensitive << ( i1_0_reg_92 );

    SC_METHOD(thread_icmp_ln65_fu_149_p2);
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );
    sensitive << ( j3_0_reg_103 );

    SC_METHOD(thread_icmp_ln74_fu_161_p2);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );
    sensitive << ( j6_0_reg_114 );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );

    SC_METHOD(thread_j_3_fu_167_p2);
    sensitive << ( j6_0_reg_114 );

    SC_METHOD(thread_j_4_fu_155_p2);
    sensitive << ( j3_0_reg_103 );

    SC_METHOD(thread_j_fu_131_p2);
    sensitive << ( j_0_reg_81 );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_res_V_data_V_blk_n);
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln56_fu_125_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln61_fu_137_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );

    SC_METHOD(thread_res_V_data_V_din);
    sensitive << ( data_V_data_V_dout );
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln56_fu_125_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln61_fu_137_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );

    SC_METHOD(thread_res_V_data_V_write);
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln56_fu_125_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln61_fu_137_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( data_V_data_V_empty_n );
    sensitive << ( res_V_data_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln65_fu_149_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln56_fu_125_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln61_fu_137_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln74_fu_161_p2 );

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "zeropad2d_cl_array_array_ap_fixed_1u_config29_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, start_full_n, "(port)start_full_n");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, start_out, "(port)start_out");
    sc_trace(mVcdFile, start_write, "(port)start_write");
    sc_trace(mVcdFile, data_V_data_V_dout, "(port)data_V_data_V_dout");
    sc_trace(mVcdFile, data_V_data_V_empty_n, "(port)data_V_data_V_empty_n");
    sc_trace(mVcdFile, data_V_data_V_read, "(port)data_V_data_V_read");
    sc_trace(mVcdFile, res_V_data_V_din, "(port)res_V_data_V_din");
    sc_trace(mVcdFile, res_V_data_V_full_n, "(port)res_V_data_V_full_n");
    sc_trace(mVcdFile, res_V_data_V_write, "(port)res_V_data_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, real_start, "real_start");
    sc_trace(mVcdFile, start_once_reg, "start_once_reg");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, internal_ap_ready, "internal_ap_ready");
    sc_trace(mVcdFile, data_V_data_V_blk_n, "data_V_data_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln65_fu_149_p2, "icmp_ln65_fu_149_p2");
    sc_trace(mVcdFile, res_V_data_V_blk_n, "res_V_data_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln56_fu_125_p2, "icmp_ln56_fu_125_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, icmp_ln61_fu_137_p2, "icmp_ln61_fu_137_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, icmp_ln74_fu_161_p2, "icmp_ln74_fu_161_p2");
    sc_trace(mVcdFile, j_fu_131_p2, "j_fu_131_p2");
    sc_trace(mVcdFile, ap_block_state2, "ap_block_state2");
    sc_trace(mVcdFile, i_fu_143_p2, "i_fu_143_p2");
    sc_trace(mVcdFile, i_reg_184, "i_reg_184");
    sc_trace(mVcdFile, ap_block_state3, "ap_block_state3");
    sc_trace(mVcdFile, j_4_fu_155_p2, "j_4_fu_155_p2");
    sc_trace(mVcdFile, ap_block_state4, "ap_block_state4");
    sc_trace(mVcdFile, j_3_fu_167_p2, "j_3_fu_167_p2");
    sc_trace(mVcdFile, ap_block_state5, "ap_block_state5");
    sc_trace(mVcdFile, j_0_reg_81, "j_0_reg_81");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, i1_0_reg_92, "i1_0_reg_92");
    sc_trace(mVcdFile, j3_0_reg_103, "j3_0_reg_103");
    sc_trace(mVcdFile, j6_0_reg_114, "j6_0_reg_114");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

zeropad2d_cl_array_array_ap_fixed_1u_config29_s::~zeropad2d_cl_array_array_ap_fixed_1u_config29_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_161_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && 
         esl_seteq<1,1,1>(icmp_ln56_fu_125_p2.read(), ap_const_lv1_1))) {
        i1_0_reg_92 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
                !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
        i1_0_reg_92 = i_reg_184.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
        j3_0_reg_103 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
                !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
        j3_0_reg_103 = j_4_fu_155_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
        j6_0_reg_114 = j_3_fu_167_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && 
                esl_seteq<1,1,1>(icmp_ln61_fu_137_p2.read(), ap_const_lv1_1))) {
        j6_0_reg_114 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
        j_0_reg_81 = j_fu_131_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        j_0_reg_81 = ap_const_lv5_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
        i_reg_184 = i_fu_143_p2.read();
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_block_state3() {
    ap_block_state3 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_block_state4() {
    ap_block_state4 = ((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_block_state5() {
    ap_block_state5 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_161_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_data_V_data_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0))) {
        data_V_data_V_blk_n = data_V_data_V_empty_n.read();
    } else {
        data_V_data_V_blk_n = ap_const_logic_1;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_data_V_data_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
        data_V_data_V_read = ap_const_logic_1;
    } else {
        data_V_data_V_read = ap_const_logic_0;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_i_fu_143_p2() {
    i_fu_143_p2 = (!i1_0_reg_92.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i1_0_reg_92.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_icmp_ln56_fu_125_p2() {
    icmp_ln56_fu_125_p2 = (!j_0_reg_81.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_81.read() == ap_const_lv5_12);
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_icmp_ln61_fu_137_p2() {
    icmp_ln61_fu_137_p2 = (!i1_0_reg_92.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_0_reg_92.read() == ap_const_lv10_200);
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_icmp_ln65_fu_149_p2() {
    icmp_ln65_fu_149_p2 = (!j3_0_reg_103.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j3_0_reg_103.read() == ap_const_lv5_10);
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_icmp_ln74_fu_161_p2() {
    icmp_ln74_fu_161_p2 = (!j6_0_reg_114.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(j6_0_reg_114.read() == ap_const_lv5_12);
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_161_p2.read()))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_j_3_fu_167_p2() {
    j_3_fu_167_p2 = (!j6_0_reg_114.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j6_0_reg_114.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_j_4_fu_155_p2() {
    j_4_fu_155_p2 = (!j3_0_reg_103.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j3_0_reg_103.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_j_fu_131_p2() {
    j_fu_131_p2 = (!j_0_reg_81.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_81.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_res_V_data_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read())))) {
        res_V_data_V_blk_n = res_V_data_V_full_n.read();
    } else {
        res_V_data_V_blk_n = ap_const_logic_1;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_res_V_data_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
        res_V_data_V_din = data_V_data_V_dout.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
                 !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
        res_V_data_V_din = ap_const_lv16_0;
    } else {
        res_V_data_V_din = "XXXXXXXXXXXXXXXX";
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_res_V_data_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
          !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
        res_V_data_V_write = ap_const_logic_1;
    } else {
        res_V_data_V_write = ap_const_logic_0;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_start_out() {
    start_out = real_start.read();
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void zeropad2d_cl_array_array_ap_fixed_1u_config29_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && esl_seteq<1,1,1>(icmp_ln56_fu_125_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_125_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && esl_seteq<1,1,1>(icmp_ln61_fu_137_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_137_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_data_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) || (esl_seteq<1,1,1>(icmp_ln65_fu_149_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read()))))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_161_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_161_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_data_V_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

