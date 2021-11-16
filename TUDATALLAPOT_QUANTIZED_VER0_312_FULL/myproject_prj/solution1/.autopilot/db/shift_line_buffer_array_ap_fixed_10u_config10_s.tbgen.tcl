set moduleName shift_line_buffer_array_ap_fixed_10u_config10_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {shift_line_buffer<array<ap_fixed,10u>,config10>}
set C_modelType { int 1440 }
set C_modelArgList {
	{ kernel_window_80_V_write int 16 regular  }
	{ kernel_window_81_V_write int 16 regular  }
	{ kernel_window_82_V_write int 16 regular  }
	{ kernel_window_83_V_write int 16 regular  }
	{ kernel_window_84_V_write int 16 regular  }
	{ kernel_window_85_V_write int 16 regular  }
	{ kernel_window_86_V_write int 16 regular  }
	{ kernel_window_87_V_write int 16 regular  }
	{ kernel_window_88_V_write int 16 regular  }
	{ kernel_window_89_V_write int 16 regular  }
	{ kernel_window_10_V_read int 16 regular  }
	{ kernel_window_11_V_read int 16 regular  }
	{ kernel_window_12_V_read int 16 regular  }
	{ kernel_window_13_V_read int 16 regular  }
	{ kernel_window_14_V_read int 16 regular  }
	{ kernel_window_15_V_read int 16 regular  }
	{ kernel_window_16_V_read int 16 regular  }
	{ kernel_window_17_V_read int 16 regular  }
	{ kernel_window_18_V_read int 16 regular  }
	{ kernel_window_19_V_read int 16 regular  }
	{ kernel_window_20_V_read int 16 regular  }
	{ kernel_window_21_V_read int 16 regular  }
	{ kernel_window_22_V_read int 16 regular  }
	{ kernel_window_23_V_read int 16 regular  }
	{ kernel_window_24_V_read int 16 regular  }
	{ kernel_window_25_V_read int 16 regular  }
	{ kernel_window_26_V_read int 16 regular  }
	{ kernel_window_27_V_read int 16 regular  }
	{ kernel_window_28_V_read int 16 regular  }
	{ kernel_window_29_V_read int 16 regular  }
	{ kernel_window_40_V_read int 16 regular  }
	{ kernel_window_41_V_read int 16 regular  }
	{ kernel_window_42_V_read int 16 regular  }
	{ kernel_window_43_V_read int 16 regular  }
	{ kernel_window_44_V_read int 16 regular  }
	{ kernel_window_45_V_read int 16 regular  }
	{ kernel_window_46_V_read int 16 regular  }
	{ kernel_window_47_V_read int 16 regular  }
	{ kernel_window_48_V_read int 16 regular  }
	{ kernel_window_49_V_read int 16 regular  }
	{ kernel_window_50_V_read int 16 regular  }
	{ kernel_window_51_V_read int 16 regular  }
	{ kernel_window_52_V_read int 16 regular  }
	{ kernel_window_53_V_read int 16 regular  }
	{ kernel_window_54_V_read int 16 regular  }
	{ kernel_window_55_V_read int 16 regular  }
	{ kernel_window_56_V_read int 16 regular  }
	{ kernel_window_57_V_read int 16 regular  }
	{ kernel_window_58_V_read int 16 regular  }
	{ kernel_window_59_V_read int 16 regular  }
	{ kernel_window_70_V_read int 16 regular  }
	{ kernel_window_71_V_read int 16 regular  }
	{ kernel_window_72_V_read int 16 regular  }
	{ kernel_window_73_V_read int 16 regular  }
	{ kernel_window_74_V_read int 16 regular  }
	{ kernel_window_75_V_read int 16 regular  }
	{ kernel_window_76_V_read int 16 regular  }
	{ kernel_window_77_V_read int 16 regular  }
	{ kernel_window_78_V_read int 16 regular  }
	{ kernel_window_79_V_read int 16 regular  }
	{ kernel_window_80_V_read int 16 regular  }
	{ kernel_window_81_V_read int 16 regular  }
	{ kernel_window_82_V_read int 16 regular  }
	{ kernel_window_83_V_read int 16 regular  }
	{ kernel_window_84_V_read int 16 regular  }
	{ kernel_window_85_V_read int 16 regular  }
	{ kernel_window_86_V_read int 16 regular  }
	{ kernel_window_87_V_read int 16 regular  }
	{ kernel_window_88_V_read int 16 regular  }
	{ kernel_window_89_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "kernel_window_80_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_81_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_82_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_83_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_84_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_85_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_86_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_87_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_88_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_89_V_write", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_26_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_28_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_29_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_40_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_41_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_42_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_43_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_44_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_45_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_46_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_47_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_48_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_49_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_50_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_51_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_52_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_53_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_54_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_55_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_56_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_57_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_58_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_59_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_70_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_71_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_72_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_73_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_74_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_75_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_76_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_77_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_78_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_79_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_80_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_81_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_82_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_83_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_84_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_85_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_86_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_87_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_88_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_window_89_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1440} ]}
# RTL Port declarations: 
set portNum 166
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ kernel_window_80_V_write sc_in sc_lv 16 signal 0 } 
	{ kernel_window_81_V_write sc_in sc_lv 16 signal 1 } 
	{ kernel_window_82_V_write sc_in sc_lv 16 signal 2 } 
	{ kernel_window_83_V_write sc_in sc_lv 16 signal 3 } 
	{ kernel_window_84_V_write sc_in sc_lv 16 signal 4 } 
	{ kernel_window_85_V_write sc_in sc_lv 16 signal 5 } 
	{ kernel_window_86_V_write sc_in sc_lv 16 signal 6 } 
	{ kernel_window_87_V_write sc_in sc_lv 16 signal 7 } 
	{ kernel_window_88_V_write sc_in sc_lv 16 signal 8 } 
	{ kernel_window_89_V_write sc_in sc_lv 16 signal 9 } 
	{ kernel_window_10_V_read sc_in sc_lv 16 signal 10 } 
	{ kernel_window_11_V_read sc_in sc_lv 16 signal 11 } 
	{ kernel_window_12_V_read sc_in sc_lv 16 signal 12 } 
	{ kernel_window_13_V_read sc_in sc_lv 16 signal 13 } 
	{ kernel_window_14_V_read sc_in sc_lv 16 signal 14 } 
	{ kernel_window_15_V_read sc_in sc_lv 16 signal 15 } 
	{ kernel_window_16_V_read sc_in sc_lv 16 signal 16 } 
	{ kernel_window_17_V_read sc_in sc_lv 16 signal 17 } 
	{ kernel_window_18_V_read sc_in sc_lv 16 signal 18 } 
	{ kernel_window_19_V_read sc_in sc_lv 16 signal 19 } 
	{ kernel_window_20_V_read sc_in sc_lv 16 signal 20 } 
	{ kernel_window_21_V_read sc_in sc_lv 16 signal 21 } 
	{ kernel_window_22_V_read sc_in sc_lv 16 signal 22 } 
	{ kernel_window_23_V_read sc_in sc_lv 16 signal 23 } 
	{ kernel_window_24_V_read sc_in sc_lv 16 signal 24 } 
	{ kernel_window_25_V_read sc_in sc_lv 16 signal 25 } 
	{ kernel_window_26_V_read sc_in sc_lv 16 signal 26 } 
	{ kernel_window_27_V_read sc_in sc_lv 16 signal 27 } 
	{ kernel_window_28_V_read sc_in sc_lv 16 signal 28 } 
	{ kernel_window_29_V_read sc_in sc_lv 16 signal 29 } 
	{ kernel_window_40_V_read sc_in sc_lv 16 signal 30 } 
	{ kernel_window_41_V_read sc_in sc_lv 16 signal 31 } 
	{ kernel_window_42_V_read sc_in sc_lv 16 signal 32 } 
	{ kernel_window_43_V_read sc_in sc_lv 16 signal 33 } 
	{ kernel_window_44_V_read sc_in sc_lv 16 signal 34 } 
	{ kernel_window_45_V_read sc_in sc_lv 16 signal 35 } 
	{ kernel_window_46_V_read sc_in sc_lv 16 signal 36 } 
	{ kernel_window_47_V_read sc_in sc_lv 16 signal 37 } 
	{ kernel_window_48_V_read sc_in sc_lv 16 signal 38 } 
	{ kernel_window_49_V_read sc_in sc_lv 16 signal 39 } 
	{ kernel_window_50_V_read sc_in sc_lv 16 signal 40 } 
	{ kernel_window_51_V_read sc_in sc_lv 16 signal 41 } 
	{ kernel_window_52_V_read sc_in sc_lv 16 signal 42 } 
	{ kernel_window_53_V_read sc_in sc_lv 16 signal 43 } 
	{ kernel_window_54_V_read sc_in sc_lv 16 signal 44 } 
	{ kernel_window_55_V_read sc_in sc_lv 16 signal 45 } 
	{ kernel_window_56_V_read sc_in sc_lv 16 signal 46 } 
	{ kernel_window_57_V_read sc_in sc_lv 16 signal 47 } 
	{ kernel_window_58_V_read sc_in sc_lv 16 signal 48 } 
	{ kernel_window_59_V_read sc_in sc_lv 16 signal 49 } 
	{ kernel_window_70_V_read sc_in sc_lv 16 signal 50 } 
	{ kernel_window_71_V_read sc_in sc_lv 16 signal 51 } 
	{ kernel_window_72_V_read sc_in sc_lv 16 signal 52 } 
	{ kernel_window_73_V_read sc_in sc_lv 16 signal 53 } 
	{ kernel_window_74_V_read sc_in sc_lv 16 signal 54 } 
	{ kernel_window_75_V_read sc_in sc_lv 16 signal 55 } 
	{ kernel_window_76_V_read sc_in sc_lv 16 signal 56 } 
	{ kernel_window_77_V_read sc_in sc_lv 16 signal 57 } 
	{ kernel_window_78_V_read sc_in sc_lv 16 signal 58 } 
	{ kernel_window_79_V_read sc_in sc_lv 16 signal 59 } 
	{ kernel_window_80_V_read sc_in sc_lv 16 signal 60 } 
	{ kernel_window_81_V_read sc_in sc_lv 16 signal 61 } 
	{ kernel_window_82_V_read sc_in sc_lv 16 signal 62 } 
	{ kernel_window_83_V_read sc_in sc_lv 16 signal 63 } 
	{ kernel_window_84_V_read sc_in sc_lv 16 signal 64 } 
	{ kernel_window_85_V_read sc_in sc_lv 16 signal 65 } 
	{ kernel_window_86_V_read sc_in sc_lv 16 signal 66 } 
	{ kernel_window_87_V_read sc_in sc_lv 16 signal 67 } 
	{ kernel_window_88_V_read sc_in sc_lv 16 signal 68 } 
	{ kernel_window_89_V_read sc_in sc_lv 16 signal 69 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
	{ ap_return_8 sc_out sc_lv 16 signal -1 } 
	{ ap_return_9 sc_out sc_lv 16 signal -1 } 
	{ ap_return_10 sc_out sc_lv 16 signal -1 } 
	{ ap_return_11 sc_out sc_lv 16 signal -1 } 
	{ ap_return_12 sc_out sc_lv 16 signal -1 } 
	{ ap_return_13 sc_out sc_lv 16 signal -1 } 
	{ ap_return_14 sc_out sc_lv 16 signal -1 } 
	{ ap_return_15 sc_out sc_lv 16 signal -1 } 
	{ ap_return_16 sc_out sc_lv 16 signal -1 } 
	{ ap_return_17 sc_out sc_lv 16 signal -1 } 
	{ ap_return_18 sc_out sc_lv 16 signal -1 } 
	{ ap_return_19 sc_out sc_lv 16 signal -1 } 
	{ ap_return_20 sc_out sc_lv 16 signal -1 } 
	{ ap_return_21 sc_out sc_lv 16 signal -1 } 
	{ ap_return_22 sc_out sc_lv 16 signal -1 } 
	{ ap_return_23 sc_out sc_lv 16 signal -1 } 
	{ ap_return_24 sc_out sc_lv 16 signal -1 } 
	{ ap_return_25 sc_out sc_lv 16 signal -1 } 
	{ ap_return_26 sc_out sc_lv 16 signal -1 } 
	{ ap_return_27 sc_out sc_lv 16 signal -1 } 
	{ ap_return_28 sc_out sc_lv 16 signal -1 } 
	{ ap_return_29 sc_out sc_lv 16 signal -1 } 
	{ ap_return_30 sc_out sc_lv 16 signal -1 } 
	{ ap_return_31 sc_out sc_lv 16 signal -1 } 
	{ ap_return_32 sc_out sc_lv 16 signal -1 } 
	{ ap_return_33 sc_out sc_lv 16 signal -1 } 
	{ ap_return_34 sc_out sc_lv 16 signal -1 } 
	{ ap_return_35 sc_out sc_lv 16 signal -1 } 
	{ ap_return_36 sc_out sc_lv 16 signal -1 } 
	{ ap_return_37 sc_out sc_lv 16 signal -1 } 
	{ ap_return_38 sc_out sc_lv 16 signal -1 } 
	{ ap_return_39 sc_out sc_lv 16 signal -1 } 
	{ ap_return_40 sc_out sc_lv 16 signal -1 } 
	{ ap_return_41 sc_out sc_lv 16 signal -1 } 
	{ ap_return_42 sc_out sc_lv 16 signal -1 } 
	{ ap_return_43 sc_out sc_lv 16 signal -1 } 
	{ ap_return_44 sc_out sc_lv 16 signal -1 } 
	{ ap_return_45 sc_out sc_lv 16 signal -1 } 
	{ ap_return_46 sc_out sc_lv 16 signal -1 } 
	{ ap_return_47 sc_out sc_lv 16 signal -1 } 
	{ ap_return_48 sc_out sc_lv 16 signal -1 } 
	{ ap_return_49 sc_out sc_lv 16 signal -1 } 
	{ ap_return_50 sc_out sc_lv 16 signal -1 } 
	{ ap_return_51 sc_out sc_lv 16 signal -1 } 
	{ ap_return_52 sc_out sc_lv 16 signal -1 } 
	{ ap_return_53 sc_out sc_lv 16 signal -1 } 
	{ ap_return_54 sc_out sc_lv 16 signal -1 } 
	{ ap_return_55 sc_out sc_lv 16 signal -1 } 
	{ ap_return_56 sc_out sc_lv 16 signal -1 } 
	{ ap_return_57 sc_out sc_lv 16 signal -1 } 
	{ ap_return_58 sc_out sc_lv 16 signal -1 } 
	{ ap_return_59 sc_out sc_lv 16 signal -1 } 
	{ ap_return_60 sc_out sc_lv 16 signal -1 } 
	{ ap_return_61 sc_out sc_lv 16 signal -1 } 
	{ ap_return_62 sc_out sc_lv 16 signal -1 } 
	{ ap_return_63 sc_out sc_lv 16 signal -1 } 
	{ ap_return_64 sc_out sc_lv 16 signal -1 } 
	{ ap_return_65 sc_out sc_lv 16 signal -1 } 
	{ ap_return_66 sc_out sc_lv 16 signal -1 } 
	{ ap_return_67 sc_out sc_lv 16 signal -1 } 
	{ ap_return_68 sc_out sc_lv 16 signal -1 } 
	{ ap_return_69 sc_out sc_lv 16 signal -1 } 
	{ ap_return_70 sc_out sc_lv 16 signal -1 } 
	{ ap_return_71 sc_out sc_lv 16 signal -1 } 
	{ ap_return_72 sc_out sc_lv 16 signal -1 } 
	{ ap_return_73 sc_out sc_lv 16 signal -1 } 
	{ ap_return_74 sc_out sc_lv 16 signal -1 } 
	{ ap_return_75 sc_out sc_lv 16 signal -1 } 
	{ ap_return_76 sc_out sc_lv 16 signal -1 } 
	{ ap_return_77 sc_out sc_lv 16 signal -1 } 
	{ ap_return_78 sc_out sc_lv 16 signal -1 } 
	{ ap_return_79 sc_out sc_lv 16 signal -1 } 
	{ ap_return_80 sc_out sc_lv 16 signal -1 } 
	{ ap_return_81 sc_out sc_lv 16 signal -1 } 
	{ ap_return_82 sc_out sc_lv 16 signal -1 } 
	{ ap_return_83 sc_out sc_lv 16 signal -1 } 
	{ ap_return_84 sc_out sc_lv 16 signal -1 } 
	{ ap_return_85 sc_out sc_lv 16 signal -1 } 
	{ ap_return_86 sc_out sc_lv 16 signal -1 } 
	{ ap_return_87 sc_out sc_lv 16 signal -1 } 
	{ ap_return_88 sc_out sc_lv 16 signal -1 } 
	{ ap_return_89 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "kernel_window_80_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_80_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_81_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_81_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_82_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_82_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_83_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_83_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_84_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_84_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_85_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_85_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_86_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_86_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_87_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_87_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_88_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_88_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_89_V_write", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_89_V_write", "role": "default" }} , 
 	{ "name": "kernel_window_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_10_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_11_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_12_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_13_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_14_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_15_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_16_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_17_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_18_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_19_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_20_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_21_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_22_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_23_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_24_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_25_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_26_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_27_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_28_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_29_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_40_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_40_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_41_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_41_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_42_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_42_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_43_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_43_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_44_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_44_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_45_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_45_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_46_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_46_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_47_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_47_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_48_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_48_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_49_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_49_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_50_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_50_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_51_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_51_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_52_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_52_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_53_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_53_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_54_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_54_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_55_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_55_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_56_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_56_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_57_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_57_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_58_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_58_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_59_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_59_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_70_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_70_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_71_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_71_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_72_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_72_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_73_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_73_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_74_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_74_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_75_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_75_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_76_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_76_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_77_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_77_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_78_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_78_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_79_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_79_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_80_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_80_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_81_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_81_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_82_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_82_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_83_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_83_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_84_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_84_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_85_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_85_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_86_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_86_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_87_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_87_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_88_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_88_V_read", "role": "default" }} , 
 	{ "name": "kernel_window_89_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "kernel_window_89_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }} , 
 	{ "name": "ap_return_32", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_32", "role": "default" }} , 
 	{ "name": "ap_return_33", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_33", "role": "default" }} , 
 	{ "name": "ap_return_34", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_34", "role": "default" }} , 
 	{ "name": "ap_return_35", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_35", "role": "default" }} , 
 	{ "name": "ap_return_36", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_36", "role": "default" }} , 
 	{ "name": "ap_return_37", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_37", "role": "default" }} , 
 	{ "name": "ap_return_38", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_38", "role": "default" }} , 
 	{ "name": "ap_return_39", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_39", "role": "default" }} , 
 	{ "name": "ap_return_40", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_40", "role": "default" }} , 
 	{ "name": "ap_return_41", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_41", "role": "default" }} , 
 	{ "name": "ap_return_42", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_42", "role": "default" }} , 
 	{ "name": "ap_return_43", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_43", "role": "default" }} , 
 	{ "name": "ap_return_44", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_44", "role": "default" }} , 
 	{ "name": "ap_return_45", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_45", "role": "default" }} , 
 	{ "name": "ap_return_46", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_46", "role": "default" }} , 
 	{ "name": "ap_return_47", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_47", "role": "default" }} , 
 	{ "name": "ap_return_48", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_48", "role": "default" }} , 
 	{ "name": "ap_return_49", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_49", "role": "default" }} , 
 	{ "name": "ap_return_50", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_50", "role": "default" }} , 
 	{ "name": "ap_return_51", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_51", "role": "default" }} , 
 	{ "name": "ap_return_52", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_52", "role": "default" }} , 
 	{ "name": "ap_return_53", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_53", "role": "default" }} , 
 	{ "name": "ap_return_54", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_54", "role": "default" }} , 
 	{ "name": "ap_return_55", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_55", "role": "default" }} , 
 	{ "name": "ap_return_56", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_56", "role": "default" }} , 
 	{ "name": "ap_return_57", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_57", "role": "default" }} , 
 	{ "name": "ap_return_58", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_58", "role": "default" }} , 
 	{ "name": "ap_return_59", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_59", "role": "default" }} , 
 	{ "name": "ap_return_60", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_60", "role": "default" }} , 
 	{ "name": "ap_return_61", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_61", "role": "default" }} , 
 	{ "name": "ap_return_62", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_62", "role": "default" }} , 
 	{ "name": "ap_return_63", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_63", "role": "default" }} , 
 	{ "name": "ap_return_64", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_64", "role": "default" }} , 
 	{ "name": "ap_return_65", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_65", "role": "default" }} , 
 	{ "name": "ap_return_66", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_66", "role": "default" }} , 
 	{ "name": "ap_return_67", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_67", "role": "default" }} , 
 	{ "name": "ap_return_68", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_68", "role": "default" }} , 
 	{ "name": "ap_return_69", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_69", "role": "default" }} , 
 	{ "name": "ap_return_70", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_70", "role": "default" }} , 
 	{ "name": "ap_return_71", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_71", "role": "default" }} , 
 	{ "name": "ap_return_72", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_72", "role": "default" }} , 
 	{ "name": "ap_return_73", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_73", "role": "default" }} , 
 	{ "name": "ap_return_74", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_74", "role": "default" }} , 
 	{ "name": "ap_return_75", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_75", "role": "default" }} , 
 	{ "name": "ap_return_76", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_76", "role": "default" }} , 
 	{ "name": "ap_return_77", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_77", "role": "default" }} , 
 	{ "name": "ap_return_78", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_78", "role": "default" }} , 
 	{ "name": "ap_return_79", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_79", "role": "default" }} , 
 	{ "name": "ap_return_80", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_80", "role": "default" }} , 
 	{ "name": "ap_return_81", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_81", "role": "default" }} , 
 	{ "name": "ap_return_82", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_82", "role": "default" }} , 
 	{ "name": "ap_return_83", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_83", "role": "default" }} , 
 	{ "name": "ap_return_84", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_84", "role": "default" }} , 
 	{ "name": "ap_return_85", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_85", "role": "default" }} , 
 	{ "name": "ap_return_86", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_86", "role": "default" }} , 
 	{ "name": "ap_return_87", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_87", "role": "default" }} , 
 	{ "name": "ap_return_88", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_88", "role": "default" }} , 
 	{ "name": "ap_return_89", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_89", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20"],
		"CDFG" : "shift_line_buffer_array_ap_fixed_10u_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "kernel_window_80_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_81_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_82_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_83_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_84_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_85_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_86_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_87_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_88_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_89_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_72_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_73_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_74_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_75_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_76_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_77_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_78_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_79_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_81_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_82_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_83_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_84_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_85_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_86_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_87_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_89_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_8", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_8", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_0_9", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1581_9", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_2_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_2_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_3_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_4_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_4_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_5_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_5_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_6_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_6_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_7_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_7_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_8_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_8_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_0_9_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_1581_9_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	shift_line_buffer_array_ap_fixed_10u_config10_s {
		kernel_window_80_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_81_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_82_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_83_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_84_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_85_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_86_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_87_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_88_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_89_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_20_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_24_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_25_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_26_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_27_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_40_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_41_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_42_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_43_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_44_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_45_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_46_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_47_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_48_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_49_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_50_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_51_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_52_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_53_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_54_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_55_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_56_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_57_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_58_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_59_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_70_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_71_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_72_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_73_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_74_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_75_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_76_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_77_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_78_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_79_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_80_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_81_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_82_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_83_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_84_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_85_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_86_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_87_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_88_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_89_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_9 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1581_9 {Type X LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	kernel_window_80_V_write { ap_none {  { kernel_window_80_V_write in_data 0 16 } } }
	kernel_window_81_V_write { ap_none {  { kernel_window_81_V_write in_data 0 16 } } }
	kernel_window_82_V_write { ap_none {  { kernel_window_82_V_write in_data 0 16 } } }
	kernel_window_83_V_write { ap_none {  { kernel_window_83_V_write in_data 0 16 } } }
	kernel_window_84_V_write { ap_none {  { kernel_window_84_V_write in_data 0 16 } } }
	kernel_window_85_V_write { ap_none {  { kernel_window_85_V_write in_data 0 16 } } }
	kernel_window_86_V_write { ap_none {  { kernel_window_86_V_write in_data 0 16 } } }
	kernel_window_87_V_write { ap_none {  { kernel_window_87_V_write in_data 0 16 } } }
	kernel_window_88_V_write { ap_none {  { kernel_window_88_V_write in_data 0 16 } } }
	kernel_window_89_V_write { ap_none {  { kernel_window_89_V_write in_data 0 16 } } }
	kernel_window_10_V_read { ap_none {  { kernel_window_10_V_read in_data 0 16 } } }
	kernel_window_11_V_read { ap_none {  { kernel_window_11_V_read in_data 0 16 } } }
	kernel_window_12_V_read { ap_none {  { kernel_window_12_V_read in_data 0 16 } } }
	kernel_window_13_V_read { ap_none {  { kernel_window_13_V_read in_data 0 16 } } }
	kernel_window_14_V_read { ap_none {  { kernel_window_14_V_read in_data 0 16 } } }
	kernel_window_15_V_read { ap_none {  { kernel_window_15_V_read in_data 0 16 } } }
	kernel_window_16_V_read { ap_none {  { kernel_window_16_V_read in_data 0 16 } } }
	kernel_window_17_V_read { ap_none {  { kernel_window_17_V_read in_data 0 16 } } }
	kernel_window_18_V_read { ap_none {  { kernel_window_18_V_read in_data 0 16 } } }
	kernel_window_19_V_read { ap_none {  { kernel_window_19_V_read in_data 0 16 } } }
	kernel_window_20_V_read { ap_none {  { kernel_window_20_V_read in_data 0 16 } } }
	kernel_window_21_V_read { ap_none {  { kernel_window_21_V_read in_data 0 16 } } }
	kernel_window_22_V_read { ap_none {  { kernel_window_22_V_read in_data 0 16 } } }
	kernel_window_23_V_read { ap_none {  { kernel_window_23_V_read in_data 0 16 } } }
	kernel_window_24_V_read { ap_none {  { kernel_window_24_V_read in_data 0 16 } } }
	kernel_window_25_V_read { ap_none {  { kernel_window_25_V_read in_data 0 16 } } }
	kernel_window_26_V_read { ap_none {  { kernel_window_26_V_read in_data 0 16 } } }
	kernel_window_27_V_read { ap_none {  { kernel_window_27_V_read in_data 0 16 } } }
	kernel_window_28_V_read { ap_none {  { kernel_window_28_V_read in_data 0 16 } } }
	kernel_window_29_V_read { ap_none {  { kernel_window_29_V_read in_data 0 16 } } }
	kernel_window_40_V_read { ap_none {  { kernel_window_40_V_read in_data 0 16 } } }
	kernel_window_41_V_read { ap_none {  { kernel_window_41_V_read in_data 0 16 } } }
	kernel_window_42_V_read { ap_none {  { kernel_window_42_V_read in_data 0 16 } } }
	kernel_window_43_V_read { ap_none {  { kernel_window_43_V_read in_data 0 16 } } }
	kernel_window_44_V_read { ap_none {  { kernel_window_44_V_read in_data 0 16 } } }
	kernel_window_45_V_read { ap_none {  { kernel_window_45_V_read in_data 0 16 } } }
	kernel_window_46_V_read { ap_none {  { kernel_window_46_V_read in_data 0 16 } } }
	kernel_window_47_V_read { ap_none {  { kernel_window_47_V_read in_data 0 16 } } }
	kernel_window_48_V_read { ap_none {  { kernel_window_48_V_read in_data 0 16 } } }
	kernel_window_49_V_read { ap_none {  { kernel_window_49_V_read in_data 0 16 } } }
	kernel_window_50_V_read { ap_none {  { kernel_window_50_V_read in_data 0 16 } } }
	kernel_window_51_V_read { ap_none {  { kernel_window_51_V_read in_data 0 16 } } }
	kernel_window_52_V_read { ap_none {  { kernel_window_52_V_read in_data 0 16 } } }
	kernel_window_53_V_read { ap_none {  { kernel_window_53_V_read in_data 0 16 } } }
	kernel_window_54_V_read { ap_none {  { kernel_window_54_V_read in_data 0 16 } } }
	kernel_window_55_V_read { ap_none {  { kernel_window_55_V_read in_data 0 16 } } }
	kernel_window_56_V_read { ap_none {  { kernel_window_56_V_read in_data 0 16 } } }
	kernel_window_57_V_read { ap_none {  { kernel_window_57_V_read in_data 0 16 } } }
	kernel_window_58_V_read { ap_none {  { kernel_window_58_V_read in_data 0 16 } } }
	kernel_window_59_V_read { ap_none {  { kernel_window_59_V_read in_data 0 16 } } }
	kernel_window_70_V_read { ap_none {  { kernel_window_70_V_read in_data 0 16 } } }
	kernel_window_71_V_read { ap_none {  { kernel_window_71_V_read in_data 0 16 } } }
	kernel_window_72_V_read { ap_none {  { kernel_window_72_V_read in_data 0 16 } } }
	kernel_window_73_V_read { ap_none {  { kernel_window_73_V_read in_data 0 16 } } }
	kernel_window_74_V_read { ap_none {  { kernel_window_74_V_read in_data 0 16 } } }
	kernel_window_75_V_read { ap_none {  { kernel_window_75_V_read in_data 0 16 } } }
	kernel_window_76_V_read { ap_none {  { kernel_window_76_V_read in_data 0 16 } } }
	kernel_window_77_V_read { ap_none {  { kernel_window_77_V_read in_data 0 16 } } }
	kernel_window_78_V_read { ap_none {  { kernel_window_78_V_read in_data 0 16 } } }
	kernel_window_79_V_read { ap_none {  { kernel_window_79_V_read in_data 0 16 } } }
	kernel_window_80_V_read { ap_none {  { kernel_window_80_V_read in_data 0 16 } } }
	kernel_window_81_V_read { ap_none {  { kernel_window_81_V_read in_data 0 16 } } }
	kernel_window_82_V_read { ap_none {  { kernel_window_82_V_read in_data 0 16 } } }
	kernel_window_83_V_read { ap_none {  { kernel_window_83_V_read in_data 0 16 } } }
	kernel_window_84_V_read { ap_none {  { kernel_window_84_V_read in_data 0 16 } } }
	kernel_window_85_V_read { ap_none {  { kernel_window_85_V_read in_data 0 16 } } }
	kernel_window_86_V_read { ap_none {  { kernel_window_86_V_read in_data 0 16 } } }
	kernel_window_87_V_read { ap_none {  { kernel_window_87_V_read in_data 0 16 } } }
	kernel_window_88_V_read { ap_none {  { kernel_window_88_V_read in_data 0 16 } } }
	kernel_window_89_V_read { ap_none {  { kernel_window_89_V_read in_data 0 16 } } }
}
