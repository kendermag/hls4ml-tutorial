#include "conv_2d_cl_array_array_ap_fixed_12u_config13_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_2d_cl_array_array_ap_fixed_12u_config13_s::thread_ap_clk_no_reset_() {
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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln78_fu_12294_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_4889_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
            ap_enable_reg_pp0_iter4 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_10_reg_1127 = ap_phi_reg_pp0_iter1_phi_ln76_10_reg_1127.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_11_reg_1162 = ap_phi_reg_pp0_iter1_phi_ln76_11_reg_1162.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_12_reg_1197 = ap_phi_reg_pp0_iter1_phi_ln76_12_reg_1197.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_13_reg_1232 = ap_phi_reg_pp0_iter1_phi_ln76_13_reg_1232.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_14_reg_1267 = ap_phi_reg_pp0_iter1_phi_ln76_14_reg_1267.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_15_reg_1302 = ap_phi_reg_pp0_iter1_phi_ln76_15_reg_1302.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_16_reg_1337 = ap_phi_reg_pp0_iter1_phi_ln76_16_reg_1337.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_17_reg_1372 = ap_phi_reg_pp0_iter1_phi_ln76_17_reg_1372.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_18_reg_1407 = ap_phi_reg_pp0_iter1_phi_ln76_18_reg_1407.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_19_reg_1442 = ap_phi_reg_pp0_iter1_phi_ln76_19_reg_1442.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_1_reg_812 = ap_phi_reg_pp0_iter1_phi_ln76_1_reg_812.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_20_reg_1477 = ap_phi_reg_pp0_iter1_phi_ln76_20_reg_1477.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_21_reg_1512 = ap_phi_reg_pp0_iter1_phi_ln76_21_reg_1512.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_22_reg_1547 = ap_phi_reg_pp0_iter1_phi_ln76_22_reg_1547.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_23_reg_1582 = ap_phi_reg_pp0_iter1_phi_ln76_23_reg_1582.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_24_reg_1617 = ap_phi_reg_pp0_iter1_phi_ln76_24_reg_1617.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_25_reg_1652 = ap_phi_reg_pp0_iter1_phi_ln76_25_reg_1652.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_26_reg_1687 = ap_phi_reg_pp0_iter1_phi_ln76_26_reg_1687.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_27_reg_1722 = ap_phi_reg_pp0_iter1_phi_ln76_27_reg_1722.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_28_reg_1757 = ap_phi_reg_pp0_iter1_phi_ln76_28_reg_1757.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_29_reg_1792 = ap_phi_reg_pp0_iter1_phi_ln76_29_reg_1792.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_2_reg_847 = ap_phi_reg_pp0_iter1_phi_ln76_2_reg_847.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_30_reg_1827 = ap_phi_reg_pp0_iter1_phi_ln76_30_reg_1827.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_31_reg_1862 = ap_phi_reg_pp0_iter1_phi_ln76_31_reg_1862.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_32_reg_1897 = ap_phi_reg_pp0_iter1_phi_ln76_32_reg_1897.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_33_reg_1932 = ap_phi_reg_pp0_iter1_phi_ln76_33_reg_1932.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_34_reg_1967 = ap_phi_reg_pp0_iter1_phi_ln76_34_reg_1967.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_35_reg_2002 = ap_phi_reg_pp0_iter1_phi_ln76_35_reg_2002.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_36_reg_2037 = ap_phi_reg_pp0_iter1_phi_ln76_36_reg_2037.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_37_reg_2072 = ap_phi_reg_pp0_iter1_phi_ln76_37_reg_2072.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_38_reg_2107 = ap_phi_reg_pp0_iter1_phi_ln76_38_reg_2107.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_39_reg_2142 = ap_phi_reg_pp0_iter1_phi_ln76_39_reg_2142.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_3_reg_882 = ap_phi_reg_pp0_iter1_phi_ln76_3_reg_882.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_40_reg_2177 = ap_phi_reg_pp0_iter1_phi_ln76_40_reg_2177.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_41_reg_2212 = ap_phi_reg_pp0_iter1_phi_ln76_41_reg_2212.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_42_reg_2247 = ap_phi_reg_pp0_iter1_phi_ln76_42_reg_2247.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_43_reg_2282 = ap_phi_reg_pp0_iter1_phi_ln76_43_reg_2282.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_44_reg_2317 = ap_phi_reg_pp0_iter1_phi_ln76_44_reg_2317.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_45_reg_2352 = ap_phi_reg_pp0_iter1_phi_ln76_45_reg_2352.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_46_reg_2387 = ap_phi_reg_pp0_iter1_phi_ln76_46_reg_2387.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_47_reg_2422 = ap_phi_reg_pp0_iter1_phi_ln76_47_reg_2422.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_48_reg_2457 = ap_phi_reg_pp0_iter1_phi_ln76_48_reg_2457.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_49_reg_2492 = ap_phi_reg_pp0_iter1_phi_ln76_49_reg_2492.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_4_reg_917 = ap_phi_reg_pp0_iter1_phi_ln76_4_reg_917.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_50_reg_2527 = ap_phi_reg_pp0_iter1_phi_ln76_50_reg_2527.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_51_reg_2562 = ap_phi_reg_pp0_iter1_phi_ln76_51_reg_2562.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_52_reg_2597 = ap_phi_reg_pp0_iter1_phi_ln76_52_reg_2597.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_53_reg_2632 = ap_phi_reg_pp0_iter1_phi_ln76_53_reg_2632.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_54_reg_2667 = ap_phi_reg_pp0_iter1_phi_ln76_54_reg_2667.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_55_reg_2702 = ap_phi_reg_pp0_iter1_phi_ln76_55_reg_2702.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_56_reg_2737 = ap_phi_reg_pp0_iter1_phi_ln76_56_reg_2737.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_57_reg_2772 = ap_phi_reg_pp0_iter1_phi_ln76_57_reg_2772.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_58_reg_2807 = ap_phi_reg_pp0_iter1_phi_ln76_58_reg_2807.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_59_reg_2842 = ap_phi_reg_pp0_iter1_phi_ln76_59_reg_2842.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_5_reg_952 = ap_phi_reg_pp0_iter1_phi_ln76_5_reg_952.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_60_reg_2877 = ap_phi_reg_pp0_iter1_phi_ln76_60_reg_2877.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_61_reg_2912 = ap_phi_reg_pp0_iter1_phi_ln76_61_reg_2912.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_62_reg_2947 = ap_phi_reg_pp0_iter1_phi_ln76_62_reg_2947.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_63_reg_2982 = ap_phi_reg_pp0_iter1_phi_ln76_63_reg_2982.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_64_reg_3017 = ap_phi_reg_pp0_iter1_phi_ln76_64_reg_3017.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_65_reg_3052 = ap_phi_reg_pp0_iter1_phi_ln76_65_reg_3052.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_66_reg_3087 = ap_phi_reg_pp0_iter1_phi_ln76_66_reg_3087.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_67_reg_3122 = ap_phi_reg_pp0_iter1_phi_ln76_67_reg_3122.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_68_reg_3157 = ap_phi_reg_pp0_iter1_phi_ln76_68_reg_3157.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_69_reg_3192 = ap_phi_reg_pp0_iter1_phi_ln76_69_reg_3192.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_6_reg_987 = ap_phi_reg_pp0_iter1_phi_ln76_6_reg_987.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_74.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_73.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_72.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_71.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_70.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_69.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_68.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_67.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_66.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_65.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_64.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_63.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_62.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_61.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = kernel_data_V_3_60.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_70_reg_3227 = ap_phi_reg_pp0_iter1_phi_ln76_70_reg_3227.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_89.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_88.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_87.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_86.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_85.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_84.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_83.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_82.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_81.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_80.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_79.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_78.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_77.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_76.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = kernel_data_V_3_75.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_71_reg_3262 = ap_phi_reg_pp0_iter1_phi_ln76_71_reg_3262.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_29.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_28.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_27.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_26.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_25.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_24.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_23.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_22.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_21.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_20.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_19.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_18.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_17.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_16.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = kernel_data_V_3_15.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_7_reg_1022 = ap_phi_reg_pp0_iter1_phi_ln76_7_reg_1022.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_44.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_43.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_42.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_41.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_40.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_39.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_38.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_37.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_36.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_35.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_34.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_33.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_32.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_31.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = kernel_data_V_3_30.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_8_reg_1057 = ap_phi_reg_pp0_iter1_phi_ln76_8_reg_1057.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_59.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_58.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_57.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_56.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_55.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_54.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_53.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_52.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_51.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_50.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_49.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_48.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_47.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_46.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = kernel_data_V_3_45.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_9_reg_1092 = ap_phi_reg_pp0_iter1_phi_ln76_9_reg_1092.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_520.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_F) || 
             esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_E))) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_14.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_D)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_13.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_C)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_12.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_B)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_11.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_A)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_10.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_9)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_9.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_8)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_8.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_7)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_7.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_6)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_6.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_5)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_5.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_4)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_4.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_3)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_3.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_2)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_2.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_1.read();
        } else if (esl_seteq<1,4,4>(w_index30_reg_765.read(), ap_const_lv4_0)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = kernel_data_V_3_0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln76_reg_777 = ap_phi_reg_pp0_iter1_phi_ln76_reg_777.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln78_fu_12294_p2.read()))) {
        indvar_flatten31_reg_753 = add_ln78_reg_12386.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvar_flatten31_reg_753 = ap_const_lv10_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_2972.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_12209_p2.read())) {
            pX_3 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(icmp_ln292_fu_12209_p2.read(), ap_const_lv1_0)) {
            pX_3 = add_ln305_fu_12214_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_2981.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln296_fu_12249_p2.read())) {
            pY_3 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln296_fu_12249_p2.read())) {
            pY_3 = add_ln300_fu_12254_p2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         esl_seteq<1,1,1>(icmp_ln292_reg_18437.read(), ap_const_lv1_0))) {
        sX_3 = select_ln307_reg_18441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
                !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_12209_p2.read()))) {
        sX_3 = ap_const_lv32_0;
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_12209_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln296_fu_12249_p2.read()))) {
        storemerge_i_i_reg_3429 = ap_const_lv32_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_reg_18437.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln296_reg_18446.read()))) {
        storemerge_i_i_reg_3429 = select_ln302_reg_18450.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_0_V_3828_reg_3297 = acc_0_V_fu_11961_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_0_V_3828_reg_3297 = ap_const_lv14_C0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_10_V_88_reg_3407 = acc_10_V_fu_12181_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_10_V_88_reg_3407 = ap_const_lv14_3FD0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_11_V_86_reg_3418 = acc_11_V_fu_12203_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_11_V_86_reg_3418 = ap_const_lv14_3F80;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_1_V_3326_reg_3308 = acc_1_V_fu_11983_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_1_V_3326_reg_3308 = ap_const_lv14_60;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_2_V_3324_reg_3319 = acc_2_V_fu_12005_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_2_V_3324_reg_3319 = ap_const_lv14_78;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_3_V_3022_reg_3330 = acc_3_V_fu_12027_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_3_V_3022_reg_3330 = ap_const_lv14_80;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_4_V_3020_reg_3341 = acc_4_V_fu_12049_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_4_V_3020_reg_3341 = ap_const_lv14_60;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_5_V_2718_reg_3352 = acc_5_V_fu_12071_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_5_V_2718_reg_3352 = ap_const_lv14_3F90;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_6_V_2716_reg_3363 = acc_6_V_fu_12093_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_6_V_2716_reg_3363 = ap_const_lv14_3FF0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_7_V_2714_reg_3374 = acc_7_V_fu_12115_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_7_V_2714_reg_3374 = ap_const_lv14_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_8_V_2112_reg_3385 = acc_8_V_fu_12137_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_8_V_2112_reg_3385 = ap_const_lv14_3F00;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp_data_9_V_2110_reg_3396 = acc_9_V_fu_12159_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        tmp_data_9_V_2110_reg_3396 = ap_const_lv14_10;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_12401.read(), ap_const_lv1_0))) {
        w_index30_reg_765 = w_index_reg_12391.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
        w_index30_reg_765 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        acc_0_V_reg_18365 = acc_0_V_fu_11961_p2.read();
        acc_10_V_reg_18425 = acc_10_V_fu_12181_p2.read();
        acc_11_V_reg_18431 = acc_11_V_fu_12203_p2.read();
        acc_1_V_reg_18371 = acc_1_V_fu_11983_p2.read();
        acc_2_V_reg_18377 = acc_2_V_fu_12005_p2.read();
        acc_3_V_reg_18383 = acc_3_V_fu_12027_p2.read();
        acc_4_V_reg_18389 = acc_4_V_fu_12049_p2.read();
        acc_5_V_reg_18395 = acc_5_V_fu_12071_p2.read();
        acc_6_V_reg_18401 = acc_6_V_fu_12093_p2.read();
        acc_7_V_reg_18407 = acc_7_V_fu_12115_p2.read();
        acc_8_V_reg_18413 = acc_8_V_fu_12137_p2.read();
        acc_9_V_reg_18419 = acc_9_V_fu_12159_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        add_ln703_120_reg_18245 = add_ln703_120_fu_11373_p2.read();
        add_ln703_122_reg_18250 = add_ln703_122_fu_11389_p2.read();
        add_ln703_126_reg_18255 = add_ln703_126_fu_11423_p2.read();
        add_ln703_128_reg_18260 = add_ln703_128_fu_11439_p2.read();
        add_ln703_132_reg_18265 = add_ln703_132_fu_11473_p2.read();
        add_ln703_134_reg_18270 = add_ln703_134_fu_11489_p2.read();
        add_ln703_138_reg_18275 = add_ln703_138_fu_11523_p2.read();
        add_ln703_140_reg_18280 = add_ln703_140_fu_11539_p2.read();
        add_ln703_144_reg_18285 = add_ln703_144_fu_11573_p2.read();
        add_ln703_146_reg_18290 = add_ln703_146_fu_11589_p2.read();
        add_ln703_150_reg_18295 = add_ln703_150_fu_11623_p2.read();
        add_ln703_152_reg_18300 = add_ln703_152_fu_11639_p2.read();
        add_ln703_156_reg_18305 = add_ln703_156_fu_11673_p2.read();
        add_ln703_158_reg_18310 = add_ln703_158_fu_11689_p2.read();
        add_ln703_162_reg_18315 = add_ln703_162_fu_11723_p2.read();
        add_ln703_164_reg_18320 = add_ln703_164_fu_11739_p2.read();
        add_ln703_168_reg_18325 = add_ln703_168_fu_11773_p2.read();
        add_ln703_170_reg_18330 = add_ln703_170_fu_11789_p2.read();
        add_ln703_174_reg_18335 = add_ln703_174_fu_11823_p2.read();
        add_ln703_176_reg_18340 = add_ln703_176_fu_11839_p2.read();
        add_ln703_180_reg_18345 = add_ln703_180_fu_11873_p2.read();
        add_ln703_182_reg_18350 = add_ln703_182_fu_11889_p2.read();
        add_ln703_186_reg_18355 = add_ln703_186_fu_11923_p2.read();
        add_ln703_188_reg_18360 = add_ln703_188_fu_11939_p2.read();
        icmp_ln64_reg_12401_pp0_iter2_reg = icmp_ln64_reg_12401_pp0_iter1_reg.read();
        icmp_ln64_reg_12401_pp0_iter3_reg = icmp_ln64_reg_12401_pp0_iter2_reg.read();
        trunc_ln708_183_reg_17895 = mul_ln1118_147_fu_9052_p2.read().range(11, 2);
        trunc_ln708_184_reg_17900 = mul_ln1118_148_fu_9085_p2.read().range(11, 2);
        trunc_ln708_185_reg_17905 = mul_ln1118_149_fu_9118_p2.read().range(11, 2);
        trunc_ln708_186_reg_17910 = mul_ln1118_150_fu_9151_p2.read().range(11, 2);
        trunc_ln708_187_reg_17915 = mul_ln1118_151_fu_9184_p2.read().range(11, 2);
        trunc_ln708_188_reg_17920 = mul_ln1118_152_fu_9217_p2.read().range(11, 2);
        trunc_ln708_189_reg_17925 = mul_ln1118_153_fu_9250_p2.read().range(11, 2);
        trunc_ln708_190_reg_17930 = mul_ln1118_154_fu_9283_p2.read().range(11, 2);
        trunc_ln708_191_reg_17935 = mul_ln1118_155_fu_9316_p2.read().range(11, 2);
        trunc_ln708_192_reg_17940 = mul_ln1118_156_fu_9349_p2.read().range(11, 2);
        trunc_ln708_193_reg_17945 = mul_ln1118_157_fu_9382_p2.read().range(11, 2);
        trunc_ln708_194_reg_17950 = mul_ln1118_158_fu_9415_p2.read().range(11, 2);
        trunc_ln708_195_reg_17955 = mul_ln1118_159_fu_9448_p2.read().range(11, 2);
        trunc_ln708_196_reg_17960 = mul_ln1118_160_fu_9481_p2.read().range(11, 2);
        trunc_ln708_197_reg_17965 = mul_ln1118_161_fu_9514_p2.read().range(11, 2);
        trunc_ln708_198_reg_17970 = mul_ln1118_162_fu_9547_p2.read().range(11, 2);
        trunc_ln708_199_reg_17975 = mul_ln1118_163_fu_9580_p2.read().range(11, 2);
        trunc_ln708_200_reg_17980 = mul_ln1118_164_fu_9613_p2.read().range(11, 2);
        trunc_ln708_201_reg_17985 = mul_ln1118_165_fu_9646_p2.read().range(11, 2);
        trunc_ln708_202_reg_17990 = mul_ln1118_166_fu_9679_p2.read().range(11, 2);
        trunc_ln708_203_reg_17995 = mul_ln1118_167_fu_9712_p2.read().range(11, 2);
        trunc_ln708_204_reg_18000 = mul_ln1118_168_fu_9745_p2.read().range(11, 2);
        trunc_ln708_205_reg_18005 = mul_ln1118_169_fu_9778_p2.read().range(11, 2);
        trunc_ln708_206_reg_18010 = mul_ln1118_170_fu_9811_p2.read().range(11, 2);
        trunc_ln708_207_reg_18015 = mul_ln1118_171_fu_9844_p2.read().range(11, 2);
        trunc_ln708_208_reg_18020 = mul_ln1118_172_fu_9877_p2.read().range(11, 2);
        trunc_ln708_209_reg_18025 = mul_ln1118_173_fu_9910_p2.read().range(11, 2);
        trunc_ln708_210_reg_18030 = mul_ln1118_174_fu_9943_p2.read().range(11, 2);
        trunc_ln708_211_reg_18035 = mul_ln1118_175_fu_9976_p2.read().range(11, 2);
        trunc_ln708_212_reg_18040 = mul_ln1118_176_fu_10009_p2.read().range(11, 2);
        trunc_ln708_213_reg_18045 = mul_ln1118_177_fu_10042_p2.read().range(11, 2);
        trunc_ln708_214_reg_18050 = mul_ln1118_178_fu_10075_p2.read().range(11, 2);
        trunc_ln708_215_reg_18055 = mul_ln1118_179_fu_10108_p2.read().range(11, 2);
        trunc_ln708_216_reg_18060 = mul_ln1118_180_fu_10141_p2.read().range(11, 2);
        trunc_ln708_217_reg_18065 = mul_ln1118_181_fu_10174_p2.read().range(11, 2);
        trunc_ln708_218_reg_18070 = mul_ln1118_182_fu_10207_p2.read().range(11, 2);
        trunc_ln708_219_reg_18075 = mul_ln1118_183_fu_10240_p2.read().range(11, 2);
        trunc_ln708_220_reg_18080 = mul_ln1118_184_fu_10273_p2.read().range(11, 2);
        trunc_ln708_221_reg_18085 = mul_ln1118_185_fu_10306_p2.read().range(11, 2);
        trunc_ln708_222_reg_18090 = mul_ln1118_186_fu_10339_p2.read().range(11, 2);
        trunc_ln708_223_reg_18095 = mul_ln1118_187_fu_10372_p2.read().range(11, 2);
        trunc_ln708_224_reg_18100 = mul_ln1118_188_fu_10405_p2.read().range(11, 2);
        trunc_ln708_225_reg_18105 = mul_ln1118_189_fu_10438_p2.read().range(11, 2);
        trunc_ln708_226_reg_18110 = mul_ln1118_190_fu_10471_p2.read().range(11, 2);
        trunc_ln708_227_reg_18115 = mul_ln1118_191_fu_10504_p2.read().range(11, 2);
        trunc_ln708_228_reg_18120 = mul_ln1118_192_fu_10537_p2.read().range(11, 2);
        trunc_ln708_229_reg_18125 = mul_ln1118_193_fu_10570_p2.read().range(11, 2);
        trunc_ln708_230_reg_18130 = mul_ln1118_194_fu_10603_p2.read().range(11, 2);
        trunc_ln708_231_reg_18135 = mul_ln1118_195_fu_10636_p2.read().range(11, 2);
        trunc_ln708_232_reg_18140 = mul_ln1118_196_fu_10669_p2.read().range(11, 2);
        trunc_ln708_233_reg_18145 = mul_ln1118_197_fu_10702_p2.read().range(11, 2);
        trunc_ln708_234_reg_18150 = mul_ln1118_198_fu_10735_p2.read().range(11, 2);
        trunc_ln708_235_reg_18155 = mul_ln1118_199_fu_10768_p2.read().range(11, 2);
        trunc_ln708_236_reg_18160 = mul_ln1118_200_fu_10801_p2.read().range(11, 2);
        trunc_ln708_237_reg_18165 = mul_ln1118_201_fu_10834_p2.read().range(11, 2);
        trunc_ln708_238_reg_18170 = mul_ln1118_202_fu_10867_p2.read().range(11, 2);
        trunc_ln708_239_reg_18175 = mul_ln1118_203_fu_10900_p2.read().range(11, 2);
        trunc_ln708_240_reg_18180 = mul_ln1118_204_fu_10933_p2.read().range(11, 2);
        trunc_ln708_241_reg_18185 = mul_ln1118_205_fu_10966_p2.read().range(11, 2);
        trunc_ln708_242_reg_18190 = mul_ln1118_206_fu_10999_p2.read().range(11, 2);
        trunc_ln708_243_reg_18195 = mul_ln1118_207_fu_11032_p2.read().range(11, 2);
        trunc_ln708_244_reg_18200 = mul_ln1118_208_fu_11065_p2.read().range(11, 2);
        trunc_ln708_245_reg_18205 = mul_ln1118_209_fu_11098_p2.read().range(11, 2);
        trunc_ln708_246_reg_18210 = mul_ln1118_210_fu_11131_p2.read().range(11, 2);
        trunc_ln708_247_reg_18215 = mul_ln1118_211_fu_11164_p2.read().range(11, 2);
        trunc_ln708_248_reg_18220 = mul_ln1118_212_fu_11197_p2.read().range(11, 2);
        trunc_ln708_249_reg_18225 = mul_ln1118_213_fu_11230_p2.read().range(11, 2);
        trunc_ln708_250_reg_18230 = mul_ln1118_214_fu_11263_p2.read().range(11, 2);
        trunc_ln708_251_reg_18235 = mul_ln1118_215_fu_11296_p2.read().range(11, 2);
        trunc_ln708_252_reg_18240 = mul_ln1118_216_fu_11329_p2.read().range(11, 2);
        trunc_ln708_s_reg_17890 = mul_ln1118_146_fu_9019_p2.read().range(11, 2);
        trunc_ln_reg_17885 = mul_ln1118_fu_8986_p2.read().range(11, 2);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln78_reg_12386 = add_ln78_fu_4872_p2.read();
        and_ln271_2_reg_12382 = and_ln271_2_fu_4866_p2.read();
        icmp_ln271_1_reg_12365 = icmp_ln271_1_fu_4808_p2.read();
        icmp_ln271_reg_12355 = icmp_ln271_fu_4798_p2.read();
        kernel_data_V_3_0 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_0.read();
        kernel_data_V_3_1 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_1.read();
        kernel_data_V_3_10 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_30.read();
        kernel_data_V_3_11 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_31.read();
        kernel_data_V_3_12 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_32.read();
        kernel_data_V_3_13 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_33.read();
        kernel_data_V_3_14 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_34.read();
        kernel_data_V_3_15 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_35.read();
        kernel_data_V_3_16 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_36.read();
        kernel_data_V_3_17 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_37.read();
        kernel_data_V_3_18 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_38.read();
        kernel_data_V_3_19 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_39.read();
        kernel_data_V_3_2 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_2.read();
        kernel_data_V_3_20 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_40.read();
        kernel_data_V_3_21 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_41.read();
        kernel_data_V_3_22 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_42.read();
        kernel_data_V_3_23 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_43.read();
        kernel_data_V_3_24 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_44.read();
        kernel_data_V_3_25 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_45.read();
        kernel_data_V_3_26 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_46.read();
        kernel_data_V_3_27 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_47.read();
        kernel_data_V_3_28 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_48.read();
        kernel_data_V_3_29 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_49.read();
        kernel_data_V_3_3 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_3.read();
        kernel_data_V_3_30 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_10.read();
        kernel_data_V_3_31 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_11.read();
        kernel_data_V_3_32 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_12.read();
        kernel_data_V_3_33 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_13.read();
        kernel_data_V_3_34 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_14.read();
        kernel_data_V_3_35 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_15.read();
        kernel_data_V_3_36 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_16.read();
        kernel_data_V_3_37 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_17.read();
        kernel_data_V_3_38 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_18.read();
        kernel_data_V_3_39 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_19.read();
        kernel_data_V_3_4 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_4.read();
        kernel_data_V_3_40 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_50.read();
        kernel_data_V_3_41 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_51.read();
        kernel_data_V_3_42 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_52.read();
        kernel_data_V_3_43 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_53.read();
        kernel_data_V_3_44 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_54.read();
        kernel_data_V_3_45 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_55.read();
        kernel_data_V_3_46 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_56.read();
        kernel_data_V_3_47 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_57.read();
        kernel_data_V_3_48 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_58.read();
        kernel_data_V_3_49 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_59.read();
        kernel_data_V_3_5 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_5.read();
        kernel_data_V_3_50 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_60.read();
        kernel_data_V_3_51 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_61.read();
        kernel_data_V_3_52 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_62.read();
        kernel_data_V_3_53 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_63.read();
        kernel_data_V_3_54 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_64.read();
        kernel_data_V_3_55 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_65.read();
        kernel_data_V_3_56 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_66.read();
        kernel_data_V_3_57 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_67.read();
        kernel_data_V_3_58 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_68.read();
        kernel_data_V_3_59 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_69.read();
        kernel_data_V_3_6 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_6.read();
        kernel_data_V_3_60 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_20.read();
        kernel_data_V_3_61 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_21.read();
        kernel_data_V_3_62 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_22.read();
        kernel_data_V_3_63 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_23.read();
        kernel_data_V_3_64 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_24.read();
        kernel_data_V_3_65 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_25.read();
        kernel_data_V_3_66 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_26.read();
        kernel_data_V_3_67 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_27.read();
        kernel_data_V_3_68 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_28.read();
        kernel_data_V_3_69 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_29.read();
        kernel_data_V_3_7 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_7.read();
        kernel_data_V_3_70 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_70.read();
        kernel_data_V_3_71 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_71.read();
        kernel_data_V_3_72 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_72.read();
        kernel_data_V_3_73 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_73.read();
        kernel_data_V_3_74 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_74.read();
        kernel_data_V_3_75 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_75.read();
        kernel_data_V_3_76 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_76.read();
        kernel_data_V_3_77 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_77.read();
        kernel_data_V_3_78 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_78.read();
        kernel_data_V_3_79 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_79.read();
        kernel_data_V_3_8 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_8.read();
        kernel_data_V_3_80 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_80.read();
        kernel_data_V_3_81 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_81.read();
        kernel_data_V_3_82 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_82.read();
        kernel_data_V_3_83 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_83.read();
        kernel_data_V_3_84 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_84.read();
        kernel_data_V_3_85 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_85.read();
        kernel_data_V_3_86 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_86.read();
        kernel_data_V_3_87 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_87.read();
        kernel_data_V_3_88 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_88.read();
        kernel_data_V_3_89 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_89.read();
        kernel_data_V_3_9 = call_ret_shift_line_buffer_array_ap_fixed_10u_config13_s_fu_3440_ap_return_9.read();
        pX_3_load_reg_12376 = pX_3.read();
        pY_3_load_reg_12370 = pY_3.read();
        sX_3_load_reg_12350 = sX_3.read();
        sY_3_load_reg_12360 = sY_3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        ap_phi_reg_pp0_iter1_phi_ln76_10_reg_1127 = ap_phi_reg_pp0_iter0_phi_ln76_10_reg_1127.read();
        ap_phi_reg_pp0_iter1_phi_ln76_11_reg_1162 = ap_phi_reg_pp0_iter0_phi_ln76_11_reg_1162.read();
        ap_phi_reg_pp0_iter1_phi_ln76_12_reg_1197 = ap_phi_reg_pp0_iter0_phi_ln76_12_reg_1197.read();
        ap_phi_reg_pp0_iter1_phi_ln76_13_reg_1232 = ap_phi_reg_pp0_iter0_phi_ln76_13_reg_1232.read();
        ap_phi_reg_pp0_iter1_phi_ln76_14_reg_1267 = ap_phi_reg_pp0_iter0_phi_ln76_14_reg_1267.read();
        ap_phi_reg_pp0_iter1_phi_ln76_15_reg_1302 = ap_phi_reg_pp0_iter0_phi_ln76_15_reg_1302.read();
        ap_phi_reg_pp0_iter1_phi_ln76_16_reg_1337 = ap_phi_reg_pp0_iter0_phi_ln76_16_reg_1337.read();
        ap_phi_reg_pp0_iter1_phi_ln76_17_reg_1372 = ap_phi_reg_pp0_iter0_phi_ln76_17_reg_1372.read();
        ap_phi_reg_pp0_iter1_phi_ln76_18_reg_1407 = ap_phi_reg_pp0_iter0_phi_ln76_18_reg_1407.read();
        ap_phi_reg_pp0_iter1_phi_ln76_19_reg_1442 = ap_phi_reg_pp0_iter0_phi_ln76_19_reg_1442.read();
        ap_phi_reg_pp0_iter1_phi_ln76_1_reg_812 = ap_phi_reg_pp0_iter0_phi_ln76_1_reg_812.read();
        ap_phi_reg_pp0_iter1_phi_ln76_20_reg_1477 = ap_phi_reg_pp0_iter0_phi_ln76_20_reg_1477.read();
        ap_phi_reg_pp0_iter1_phi_ln76_21_reg_1512 = ap_phi_reg_pp0_iter0_phi_ln76_21_reg_1512.read();
        ap_phi_reg_pp0_iter1_phi_ln76_22_reg_1547 = ap_phi_reg_pp0_iter0_phi_ln76_22_reg_1547.read();
        ap_phi_reg_pp0_iter1_phi_ln76_23_reg_1582 = ap_phi_reg_pp0_iter0_phi_ln76_23_reg_1582.read();
        ap_phi_reg_pp0_iter1_phi_ln76_24_reg_1617 = ap_phi_reg_pp0_iter0_phi_ln76_24_reg_1617.read();
        ap_phi_reg_pp0_iter1_phi_ln76_25_reg_1652 = ap_phi_reg_pp0_iter0_phi_ln76_25_reg_1652.read();
        ap_phi_reg_pp0_iter1_phi_ln76_26_reg_1687 = ap_phi_reg_pp0_iter0_phi_ln76_26_reg_1687.read();
        ap_phi_reg_pp0_iter1_phi_ln76_27_reg_1722 = ap_phi_reg_pp0_iter0_phi_ln76_27_reg_1722.read();
        ap_phi_reg_pp0_iter1_phi_ln76_28_reg_1757 = ap_phi_reg_pp0_iter0_phi_ln76_28_reg_1757.read();
        ap_phi_reg_pp0_iter1_phi_ln76_29_reg_1792 = ap_phi_reg_pp0_iter0_phi_ln76_29_reg_1792.read();
        ap_phi_reg_pp0_iter1_phi_ln76_2_reg_847 = ap_phi_reg_pp0_iter0_phi_ln76_2_reg_847.read();
        ap_phi_reg_pp0_iter1_phi_ln76_30_reg_1827 = ap_phi_reg_pp0_iter0_phi_ln76_30_reg_1827.read();
        ap_phi_reg_pp0_iter1_phi_ln76_31_reg_1862 = ap_phi_reg_pp0_iter0_phi_ln76_31_reg_1862.read();
        ap_phi_reg_pp0_iter1_phi_ln76_32_reg_1897 = ap_phi_reg_pp0_iter0_phi_ln76_32_reg_1897.read();
        ap_phi_reg_pp0_iter1_phi_ln76_33_reg_1932 = ap_phi_reg_pp0_iter0_phi_ln76_33_reg_1932.read();
        ap_phi_reg_pp0_iter1_phi_ln76_34_reg_1967 = ap_phi_reg_pp0_iter0_phi_ln76_34_reg_1967.read();
        ap_phi_reg_pp0_iter1_phi_ln76_35_reg_2002 = ap_phi_reg_pp0_iter0_phi_ln76_35_reg_2002.read();
        ap_phi_reg_pp0_iter1_phi_ln76_36_reg_2037 = ap_phi_reg_pp0_iter0_phi_ln76_36_reg_2037.read();
        ap_phi_reg_pp0_iter1_phi_ln76_37_reg_2072 = ap_phi_reg_pp0_iter0_phi_ln76_37_reg_2072.read();
        ap_phi_reg_pp0_iter1_phi_ln76_38_reg_2107 = ap_phi_reg_pp0_iter0_phi_ln76_38_reg_2107.read();
        ap_phi_reg_pp0_iter1_phi_ln76_39_reg_2142 = ap_phi_reg_pp0_iter0_phi_ln76_39_reg_2142.read();
        ap_phi_reg_pp0_iter1_phi_ln76_3_reg_882 = ap_phi_reg_pp0_iter0_phi_ln76_3_reg_882.read();
        ap_phi_reg_pp0_iter1_phi_ln76_40_reg_2177 = ap_phi_reg_pp0_iter0_phi_ln76_40_reg_2177.read();
        ap_phi_reg_pp0_iter1_phi_ln76_41_reg_2212 = ap_phi_reg_pp0_iter0_phi_ln76_41_reg_2212.read();
        ap_phi_reg_pp0_iter1_phi_ln76_42_reg_2247 = ap_phi_reg_pp0_iter0_phi_ln76_42_reg_2247.read();
        ap_phi_reg_pp0_iter1_phi_ln76_43_reg_2282 = ap_phi_reg_pp0_iter0_phi_ln76_43_reg_2282.read();
        ap_phi_reg_pp0_iter1_phi_ln76_44_reg_2317 = ap_phi_reg_pp0_iter0_phi_ln76_44_reg_2317.read();
        ap_phi_reg_pp0_iter1_phi_ln76_45_reg_2352 = ap_phi_reg_pp0_iter0_phi_ln76_45_reg_2352.read();
        ap_phi_reg_pp0_iter1_phi_ln76_46_reg_2387 = ap_phi_reg_pp0_iter0_phi_ln76_46_reg_2387.read();
        ap_phi_reg_pp0_iter1_phi_ln76_47_reg_2422 = ap_phi_reg_pp0_iter0_phi_ln76_47_reg_2422.read();
        ap_phi_reg_pp0_iter1_phi_ln76_48_reg_2457 = ap_phi_reg_pp0_iter0_phi_ln76_48_reg_2457.read();
        ap_phi_reg_pp0_iter1_phi_ln76_49_reg_2492 = ap_phi_reg_pp0_iter0_phi_ln76_49_reg_2492.read();
        ap_phi_reg_pp0_iter1_phi_ln76_4_reg_917 = ap_phi_reg_pp0_iter0_phi_ln76_4_reg_917.read();
        ap_phi_reg_pp0_iter1_phi_ln76_50_reg_2527 = ap_phi_reg_pp0_iter0_phi_ln76_50_reg_2527.read();
        ap_phi_reg_pp0_iter1_phi_ln76_51_reg_2562 = ap_phi_reg_pp0_iter0_phi_ln76_51_reg_2562.read();
        ap_phi_reg_pp0_iter1_phi_ln76_52_reg_2597 = ap_phi_reg_pp0_iter0_phi_ln76_52_reg_2597.read();
        ap_phi_reg_pp0_iter1_phi_ln76_53_reg_2632 = ap_phi_reg_pp0_iter0_phi_ln76_53_reg_2632.read();
        ap_phi_reg_pp0_iter1_phi_ln76_54_reg_2667 = ap_phi_reg_pp0_iter0_phi_ln76_54_reg_2667.read();
        ap_phi_reg_pp0_iter1_phi_ln76_55_reg_2702 = ap_phi_reg_pp0_iter0_phi_ln76_55_reg_2702.read();
        ap_phi_reg_pp0_iter1_phi_ln76_56_reg_2737 = ap_phi_reg_pp0_iter0_phi_ln76_56_reg_2737.read();
        ap_phi_reg_pp0_iter1_phi_ln76_57_reg_2772 = ap_phi_reg_pp0_iter0_phi_ln76_57_reg_2772.read();
        ap_phi_reg_pp0_iter1_phi_ln76_58_reg_2807 = ap_phi_reg_pp0_iter0_phi_ln76_58_reg_2807.read();
        ap_phi_reg_pp0_iter1_phi_ln76_59_reg_2842 = ap_phi_reg_pp0_iter0_phi_ln76_59_reg_2842.read();
        ap_phi_reg_pp0_iter1_phi_ln76_5_reg_952 = ap_phi_reg_pp0_iter0_phi_ln76_5_reg_952.read();
        ap_phi_reg_pp0_iter1_phi_ln76_60_reg_2877 = ap_phi_reg_pp0_iter0_phi_ln76_60_reg_2877.read();
        ap_phi_reg_pp0_iter1_phi_ln76_61_reg_2912 = ap_phi_reg_pp0_iter0_phi_ln76_61_reg_2912.read();
        ap_phi_reg_pp0_iter1_phi_ln76_62_reg_2947 = ap_phi_reg_pp0_iter0_phi_ln76_62_reg_2947.read();
        ap_phi_reg_pp0_iter1_phi_ln76_63_reg_2982 = ap_phi_reg_pp0_iter0_phi_ln76_63_reg_2982.read();
        ap_phi_reg_pp0_iter1_phi_ln76_64_reg_3017 = ap_phi_reg_pp0_iter0_phi_ln76_64_reg_3017.read();
        ap_phi_reg_pp0_iter1_phi_ln76_65_reg_3052 = ap_phi_reg_pp0_iter0_phi_ln76_65_reg_3052.read();
        ap_phi_reg_pp0_iter1_phi_ln76_66_reg_3087 = ap_phi_reg_pp0_iter0_phi_ln76_66_reg_3087.read();
        ap_phi_reg_pp0_iter1_phi_ln76_67_reg_3122 = ap_phi_reg_pp0_iter0_phi_ln76_67_reg_3122.read();
        ap_phi_reg_pp0_iter1_phi_ln76_68_reg_3157 = ap_phi_reg_pp0_iter0_phi_ln76_68_reg_3157.read();
        ap_phi_reg_pp0_iter1_phi_ln76_69_reg_3192 = ap_phi_reg_pp0_iter0_phi_ln76_69_reg_3192.read();
        ap_phi_reg_pp0_iter1_phi_ln76_6_reg_987 = ap_phi_reg_pp0_iter0_phi_ln76_6_reg_987.read();
        ap_phi_reg_pp0_iter1_phi_ln76_70_reg_3227 = ap_phi_reg_pp0_iter0_phi_ln76_70_reg_3227.read();
        ap_phi_reg_pp0_iter1_phi_ln76_71_reg_3262 = ap_phi_reg_pp0_iter0_phi_ln76_71_reg_3262.read();
        ap_phi_reg_pp0_iter1_phi_ln76_7_reg_1022 = ap_phi_reg_pp0_iter0_phi_ln76_7_reg_1022.read();
        ap_phi_reg_pp0_iter1_phi_ln76_8_reg_1057 = ap_phi_reg_pp0_iter0_phi_ln76_8_reg_1057.read();
        ap_phi_reg_pp0_iter1_phi_ln76_9_reg_1092 = ap_phi_reg_pp0_iter0_phi_ln76_9_reg_1092.read();
        ap_phi_reg_pp0_iter1_phi_ln76_reg_777 = ap_phi_reg_pp0_iter0_phi_ln76_reg_777.read();
        w_index_reg_12391 = w_index_fu_4878_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())))) {
        icmp_ln292_reg_18437 = icmp_ln292_fu_12209_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_12209_p2.read()))) {
        icmp_ln296_reg_18446 = icmp_ln296_fu_12249_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln64_reg_12401 = icmp_ln64_fu_4889_p2.read();
        icmp_ln64_reg_12401_pp0_iter1_reg = icmp_ln64_reg_12401.read();
        trunc_ln76_reg_12555 = trunc_ln76_fu_4935_p1.read();
        w13_V_load_reg_12480 = w13_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_reg_18437.read()))) {
        sY_3 = ap_phi_mux_storemerge_i_i_phi_fu_3433_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_12209_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln296_fu_12249_p2.read()))) {
        select_ln302_reg_18450 = select_ln302_fu_12270_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())) && esl_seteq<1,1,1>(icmp_ln292_fu_12209_p2.read(), ap_const_lv1_0))) {
        select_ln307_reg_18441 = select_ln307_fu_12230_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op34.read(), ap_const_logic_1))) {
        tmp_data_0_V_reg_12300 = data_V_data_0_V_dout.read();
        tmp_data_1_V_reg_12305 = data_V_data_1_V_dout.read();
        tmp_data_2_V_reg_12310 = data_V_data_2_V_dout.read();
        tmp_data_3_V_reg_12315 = data_V_data_3_V_dout.read();
        tmp_data_4_V_reg_12320 = data_V_data_4_V_dout.read();
        tmp_data_5_V_reg_12325 = data_V_data_5_V_dout.read();
        tmp_data_6_V_reg_12330 = data_V_data_6_V_dout.read();
        tmp_data_7_V_reg_12335 = data_V_data_7_V_dout.read();
        tmp_data_8_V_reg_12340 = data_V_data_8_V_dout.read();
        tmp_data_9_V_reg_12345 = data_V_data_9_V_dout.read();
    }
}

void conv_2d_cl_array_array_ap_fixed_12u_config13_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op34.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln271_2_fu_4866_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 8 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln271_2_reg_12382.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3201.read())))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln78_fu_12294_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

}

