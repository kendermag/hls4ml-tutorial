// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _shift_line_buffer_array_ap_fixed_8u_config5_s_HH_
#define _shift_line_buffer_array_ap_fixed_8u_config5_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe.h"

namespace ap_rtl {

struct shift_line_buffer_array_ap_fixed_8u_config5_s : public sc_module {
    // Port declarations 63
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<6> > kernel_window_24_V_write;
    sc_in< sc_lv<6> > kernel_window_25_V_write;
    sc_in< sc_lv<6> > kernel_window_26_V_write;
    sc_in< sc_lv<6> > kernel_window_27_V_write;
    sc_in< sc_lv<6> > kernel_window_28_V_write;
    sc_in< sc_lv<6> > kernel_window_29_V_write;
    sc_in< sc_lv<6> > kernel_window_30_V_write;
    sc_in< sc_lv<6> > kernel_window_31_V_write;
    sc_in< sc_lv<6> > kernel_window_8_V_read;
    sc_in< sc_lv<6> > kernel_window_9_V_read;
    sc_in< sc_lv<6> > kernel_window_10_V_read;
    sc_in< sc_lv<6> > kernel_window_11_V_read;
    sc_in< sc_lv<6> > kernel_window_12_V_read;
    sc_in< sc_lv<6> > kernel_window_13_V_read;
    sc_in< sc_lv<6> > kernel_window_14_V_read;
    sc_in< sc_lv<6> > kernel_window_15_V_read;
    sc_in< sc_lv<6> > kernel_window_24_V_read;
    sc_in< sc_lv<6> > kernel_window_25_V_read;
    sc_in< sc_lv<6> > kernel_window_26_V_read;
    sc_in< sc_lv<6> > kernel_window_27_V_read;
    sc_in< sc_lv<6> > kernel_window_28_V_read;
    sc_in< sc_lv<6> > kernel_window_29_V_read;
    sc_in< sc_lv<6> > kernel_window_30_V_read;
    sc_in< sc_lv<6> > kernel_window_31_V_read;
    sc_out< sc_lv<6> > ap_return_0;
    sc_out< sc_lv<6> > ap_return_1;
    sc_out< sc_lv<6> > ap_return_2;
    sc_out< sc_lv<6> > ap_return_3;
    sc_out< sc_lv<6> > ap_return_4;
    sc_out< sc_lv<6> > ap_return_5;
    sc_out< sc_lv<6> > ap_return_6;
    sc_out< sc_lv<6> > ap_return_7;
    sc_out< sc_lv<6> > ap_return_8;
    sc_out< sc_lv<6> > ap_return_9;
    sc_out< sc_lv<6> > ap_return_10;
    sc_out< sc_lv<6> > ap_return_11;
    sc_out< sc_lv<6> > ap_return_12;
    sc_out< sc_lv<6> > ap_return_13;
    sc_out< sc_lv<6> > ap_return_14;
    sc_out< sc_lv<6> > ap_return_15;
    sc_out< sc_lv<6> > ap_return_16;
    sc_out< sc_lv<6> > ap_return_17;
    sc_out< sc_lv<6> > ap_return_18;
    sc_out< sc_lv<6> > ap_return_19;
    sc_out< sc_lv<6> > ap_return_20;
    sc_out< sc_lv<6> > ap_return_21;
    sc_out< sc_lv<6> > ap_return_22;
    sc_out< sc_lv<6> > ap_return_23;
    sc_out< sc_lv<6> > ap_return_24;
    sc_out< sc_lv<6> > ap_return_25;
    sc_out< sc_lv<6> > ap_return_26;
    sc_out< sc_lv<6> > ap_return_27;
    sc_out< sc_lv<6> > ap_return_28;
    sc_out< sc_lv<6> > ap_return_29;
    sc_out< sc_lv<6> > ap_return_30;
    sc_out< sc_lv<6> > ap_return_31;
    sc_in< sc_logic > ap_ce;
    sc_signal< sc_lv<4> > ap_var_for_const0;


    // Module declarations
    shift_line_buffer_array_ap_fixed_8u_config5_s(sc_module_name name);
    SC_HAS_PROCESS(shift_line_buffer_array_ap_fixed_8u_config5_s);

    ~shift_line_buffer_array_ap_fixed_8u_config5_s();

    sc_trace_file* mVcdFile;

    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_0_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_1_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_2_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_3_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_4_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_5_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_6_U;
    shift_line_buffer_array_ap_fixed_8u_config5_s_line_bufferdEe* line_buffer_Array_V_6_0_7_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_0_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_0_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_0_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_1_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_1_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_1_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_2_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_2_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_2_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_3_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_3_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_3_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_4_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_4_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_4_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_5_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_5_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_5_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_6_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_6_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_6_q0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_7_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_6_0_7_we0;
    sc_signal< sc_lv<6> > line_buffer_Array_V_6_0_7_q0;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_20();
    void thread_ap_return_21();
    void thread_ap_return_22();
    void thread_ap_return_23();
    void thread_ap_return_24();
    void thread_ap_return_25();
    void thread_ap_return_26();
    void thread_ap_return_27();
    void thread_ap_return_28();
    void thread_ap_return_29();
    void thread_ap_return_3();
    void thread_ap_return_30();
    void thread_ap_return_31();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_line_buffer_Array_V_6_0_0_ce0();
    void thread_line_buffer_Array_V_6_0_0_we0();
    void thread_line_buffer_Array_V_6_0_1_ce0();
    void thread_line_buffer_Array_V_6_0_1_we0();
    void thread_line_buffer_Array_V_6_0_2_ce0();
    void thread_line_buffer_Array_V_6_0_2_we0();
    void thread_line_buffer_Array_V_6_0_3_ce0();
    void thread_line_buffer_Array_V_6_0_3_we0();
    void thread_line_buffer_Array_V_6_0_4_ce0();
    void thread_line_buffer_Array_V_6_0_4_we0();
    void thread_line_buffer_Array_V_6_0_5_ce0();
    void thread_line_buffer_Array_V_6_0_5_we0();
    void thread_line_buffer_Array_V_6_0_6_ce0();
    void thread_line_buffer_Array_V_6_0_6_we0();
    void thread_line_buffer_Array_V_6_0_7_ce0();
    void thread_line_buffer_Array_V_6_0_7_we0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
