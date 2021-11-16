set moduleName conv_2d_cl_array_array_ap_fixed_10u_config10_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {conv_2d_cl<array,array<ap_fixed,10u>,config10>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_3_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_4_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_5_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_6_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_7_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_8_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_9_V int 16 regular {fifo 0 volatile }  }
	{ res_V_data_0_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_1_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_2_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_3_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_4_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_5_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_6_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_7_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_8_V int 14 regular {fifo 1 volatile }  }
	{ res_V_data_9_V int 14 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_8_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_9_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_3_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_4_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_5_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_6_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_7_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_8_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_9_V", "interface" : "fifo", "bitwidth" : 14, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 70
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ data_V_data_3_V_dout sc_in sc_lv 16 signal 3 } 
	{ data_V_data_3_V_empty_n sc_in sc_logic 1 signal 3 } 
	{ data_V_data_3_V_read sc_out sc_logic 1 signal 3 } 
	{ data_V_data_4_V_dout sc_in sc_lv 16 signal 4 } 
	{ data_V_data_4_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ data_V_data_4_V_read sc_out sc_logic 1 signal 4 } 
	{ data_V_data_5_V_dout sc_in sc_lv 16 signal 5 } 
	{ data_V_data_5_V_empty_n sc_in sc_logic 1 signal 5 } 
	{ data_V_data_5_V_read sc_out sc_logic 1 signal 5 } 
	{ data_V_data_6_V_dout sc_in sc_lv 16 signal 6 } 
	{ data_V_data_6_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ data_V_data_6_V_read sc_out sc_logic 1 signal 6 } 
	{ data_V_data_7_V_dout sc_in sc_lv 16 signal 7 } 
	{ data_V_data_7_V_empty_n sc_in sc_logic 1 signal 7 } 
	{ data_V_data_7_V_read sc_out sc_logic 1 signal 7 } 
	{ data_V_data_8_V_dout sc_in sc_lv 16 signal 8 } 
	{ data_V_data_8_V_empty_n sc_in sc_logic 1 signal 8 } 
	{ data_V_data_8_V_read sc_out sc_logic 1 signal 8 } 
	{ data_V_data_9_V_dout sc_in sc_lv 16 signal 9 } 
	{ data_V_data_9_V_empty_n sc_in sc_logic 1 signal 9 } 
	{ data_V_data_9_V_read sc_out sc_logic 1 signal 9 } 
	{ res_V_data_0_V_din sc_out sc_lv 14 signal 10 } 
	{ res_V_data_0_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_V_data_0_V_write sc_out sc_logic 1 signal 10 } 
	{ res_V_data_1_V_din sc_out sc_lv 14 signal 11 } 
	{ res_V_data_1_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_V_data_1_V_write sc_out sc_logic 1 signal 11 } 
	{ res_V_data_2_V_din sc_out sc_lv 14 signal 12 } 
	{ res_V_data_2_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_V_data_2_V_write sc_out sc_logic 1 signal 12 } 
	{ res_V_data_3_V_din sc_out sc_lv 14 signal 13 } 
	{ res_V_data_3_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_V_data_3_V_write sc_out sc_logic 1 signal 13 } 
	{ res_V_data_4_V_din sc_out sc_lv 14 signal 14 } 
	{ res_V_data_4_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_V_data_4_V_write sc_out sc_logic 1 signal 14 } 
	{ res_V_data_5_V_din sc_out sc_lv 14 signal 15 } 
	{ res_V_data_5_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_V_data_5_V_write sc_out sc_logic 1 signal 15 } 
	{ res_V_data_6_V_din sc_out sc_lv 14 signal 16 } 
	{ res_V_data_6_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_V_data_6_V_write sc_out sc_logic 1 signal 16 } 
	{ res_V_data_7_V_din sc_out sc_lv 14 signal 17 } 
	{ res_V_data_7_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_V_data_7_V_write sc_out sc_logic 1 signal 17 } 
	{ res_V_data_8_V_din sc_out sc_lv 14 signal 18 } 
	{ res_V_data_8_V_full_n sc_in sc_logic 1 signal 18 } 
	{ res_V_data_8_V_write sc_out sc_logic 1 signal 18 } 
	{ res_V_data_9_V_din sc_out sc_lv 14 signal 19 } 
	{ res_V_data_9_V_full_n sc_in sc_logic 1 signal 19 } 
	{ res_V_data_9_V_write sc_out sc_logic 1 signal 19 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "read" }} , 
 	{ "name": "data_V_data_3_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "dout" }} , 
 	{ "name": "data_V_data_3_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_3_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "read" }} , 
 	{ "name": "data_V_data_4_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "dout" }} , 
 	{ "name": "data_V_data_4_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_4_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "read" }} , 
 	{ "name": "data_V_data_5_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "dout" }} , 
 	{ "name": "data_V_data_5_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_5_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "read" }} , 
 	{ "name": "data_V_data_6_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "dout" }} , 
 	{ "name": "data_V_data_6_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_6_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "read" }} , 
 	{ "name": "data_V_data_7_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "dout" }} , 
 	{ "name": "data_V_data_7_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_7_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "read" }} , 
 	{ "name": "data_V_data_8_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_8_V", "role": "dout" }} , 
 	{ "name": "data_V_data_8_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_8_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_8_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_8_V", "role": "read" }} , 
 	{ "name": "data_V_data_9_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_9_V", "role": "dout" }} , 
 	{ "name": "data_V_data_9_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_9_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_9_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_9_V", "role": "read" }} , 
 	{ "name": "res_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82"],
		"CDFG" : "conv_2d_cl_array_array_ap_fixed_10u_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3120", "EstimateLatencyMax" : "19500",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pX_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_48", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_49", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_50", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_51", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_55", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_70", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_71", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_72", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_73", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_74", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_75", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_76", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_77", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_78", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_79", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_80", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_81", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_82", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_83", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_84", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_85", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_86", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_87", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_88", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_89", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1581_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_0"}]},
			{"Name" : "line_buffer_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_1"}]},
			{"Name" : "line_buffer_Array_V_1581_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_1"}]},
			{"Name" : "line_buffer_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_2"}]},
			{"Name" : "line_buffer_Array_V_1581_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_2"}]},
			{"Name" : "line_buffer_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_3"}]},
			{"Name" : "line_buffer_Array_V_1581_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_3"}]},
			{"Name" : "line_buffer_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_4"}]},
			{"Name" : "line_buffer_Array_V_1581_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_4"}]},
			{"Name" : "line_buffer_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_5"}]},
			{"Name" : "line_buffer_Array_V_1581_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_5"}]},
			{"Name" : "line_buffer_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_6"}]},
			{"Name" : "line_buffer_Array_V_1581_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_6"}]},
			{"Name" : "line_buffer_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_7"}]},
			{"Name" : "line_buffer_Array_V_1581_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_7"}]},
			{"Name" : "line_buffer_Array_V_0_8", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_8"}]},
			{"Name" : "line_buffer_Array_V_1581_8", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_8"}]},
			{"Name" : "line_buffer_Array_V_0_9", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_0_9"}]},
			{"Name" : "line_buffer_Array_V_1581_9", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Port" : "line_buffer_Array_V_1581_9"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1582", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2583", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3584", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4585", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5586", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_6587", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_64", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_65", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_66", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_67", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_68", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_69", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w10_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938", "Parent" : "0", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22"],
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
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_0_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_0_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_1_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_1_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_2_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_2_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_3_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_3_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_4_U", "Parent" : "2"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_4_U", "Parent" : "2"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_5_U", "Parent" : "2"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_5_U", "Parent" : "2"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_6_U", "Parent" : "2"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_6_U", "Parent" : "2"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_7_U", "Parent" : "2"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_7_U", "Parent" : "2"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_8_U", "Parent" : "2"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_8_U", "Parent" : "2"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_0_9_U", "Parent" : "2"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_fixed_10u_config10_s_fu_2938.line_buffer_Array_V_1581_9_U", "Parent" : "2"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_6s_16s_21_3_1_U389", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U390", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U391", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U392", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U393", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U394", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U395", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U396", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U397", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U398", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U399", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U400", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U401", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U402", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U403", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U404", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U405", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U406", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U407", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U408", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U409", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U410", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U411", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U412", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U413", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U414", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U415", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U416", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U417", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U418", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U419", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U420", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U421", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U422", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U423", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U424", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U425", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U426", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U427", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U428", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U429", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U430", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U431", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U432", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U433", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U434", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U435", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U436", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U437", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U438", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U439", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U440", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U441", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U442", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U443", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U444", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U445", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U446", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U447", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mul_mul_16s_6s_21_3_1_U448", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv_2d_cl_array_array_ap_fixed_10u_config10_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 10}
		w10_V {Type I LastRead -1 FirstWrite -1}
		pX_6 {Type IO LastRead -1 FirstWrite -1}
		sX_6 {Type IO LastRead -1 FirstWrite -1}
		pY_6 {Type IO LastRead -1 FirstWrite -1}
		sY_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_71 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_72 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_73 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_74 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_75 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_76 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_77 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_78 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_79 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_80 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_81 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_82 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_83 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_84 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_85 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_86 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_87 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_88 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_89 {Type IO LastRead -1 FirstWrite -1}
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
		line_buffer_Array_V_1581_9 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1582 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2583 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3584 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4585 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5586 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6587 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_69 {Type IO LastRead -1 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "3120", "Max" : "19500"}
	, {"Name" : "Interval", "Min" : "3120", "Max" : "19500"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V_data_0_V { ap_fifo {  { data_V_data_0_V_dout fifo_data 0 16 }  { data_V_data_0_V_empty_n fifo_status 0 1 }  { data_V_data_0_V_read fifo_update 1 1 } } }
	data_V_data_1_V { ap_fifo {  { data_V_data_1_V_dout fifo_data 0 16 }  { data_V_data_1_V_empty_n fifo_status 0 1 }  { data_V_data_1_V_read fifo_update 1 1 } } }
	data_V_data_2_V { ap_fifo {  { data_V_data_2_V_dout fifo_data 0 16 }  { data_V_data_2_V_empty_n fifo_status 0 1 }  { data_V_data_2_V_read fifo_update 1 1 } } }
	data_V_data_3_V { ap_fifo {  { data_V_data_3_V_dout fifo_data 0 16 }  { data_V_data_3_V_empty_n fifo_status 0 1 }  { data_V_data_3_V_read fifo_update 1 1 } } }
	data_V_data_4_V { ap_fifo {  { data_V_data_4_V_dout fifo_data 0 16 }  { data_V_data_4_V_empty_n fifo_status 0 1 }  { data_V_data_4_V_read fifo_update 1 1 } } }
	data_V_data_5_V { ap_fifo {  { data_V_data_5_V_dout fifo_data 0 16 }  { data_V_data_5_V_empty_n fifo_status 0 1 }  { data_V_data_5_V_read fifo_update 1 1 } } }
	data_V_data_6_V { ap_fifo {  { data_V_data_6_V_dout fifo_data 0 16 }  { data_V_data_6_V_empty_n fifo_status 0 1 }  { data_V_data_6_V_read fifo_update 1 1 } } }
	data_V_data_7_V { ap_fifo {  { data_V_data_7_V_dout fifo_data 0 16 }  { data_V_data_7_V_empty_n fifo_status 0 1 }  { data_V_data_7_V_read fifo_update 1 1 } } }
	data_V_data_8_V { ap_fifo {  { data_V_data_8_V_dout fifo_data 0 16 }  { data_V_data_8_V_empty_n fifo_status 0 1 }  { data_V_data_8_V_read fifo_update 1 1 } } }
	data_V_data_9_V { ap_fifo {  { data_V_data_9_V_dout fifo_data 0 16 }  { data_V_data_9_V_empty_n fifo_status 0 1 }  { data_V_data_9_V_read fifo_update 1 1 } } }
	res_V_data_0_V { ap_fifo {  { res_V_data_0_V_din fifo_data 1 14 }  { res_V_data_0_V_full_n fifo_status 0 1 }  { res_V_data_0_V_write fifo_update 1 1 } } }
	res_V_data_1_V { ap_fifo {  { res_V_data_1_V_din fifo_data 1 14 }  { res_V_data_1_V_full_n fifo_status 0 1 }  { res_V_data_1_V_write fifo_update 1 1 } } }
	res_V_data_2_V { ap_fifo {  { res_V_data_2_V_din fifo_data 1 14 }  { res_V_data_2_V_full_n fifo_status 0 1 }  { res_V_data_2_V_write fifo_update 1 1 } } }
	res_V_data_3_V { ap_fifo {  { res_V_data_3_V_din fifo_data 1 14 }  { res_V_data_3_V_full_n fifo_status 0 1 }  { res_V_data_3_V_write fifo_update 1 1 } } }
	res_V_data_4_V { ap_fifo {  { res_V_data_4_V_din fifo_data 1 14 }  { res_V_data_4_V_full_n fifo_status 0 1 }  { res_V_data_4_V_write fifo_update 1 1 } } }
	res_V_data_5_V { ap_fifo {  { res_V_data_5_V_din fifo_data 1 14 }  { res_V_data_5_V_full_n fifo_status 0 1 }  { res_V_data_5_V_write fifo_update 1 1 } } }
	res_V_data_6_V { ap_fifo {  { res_V_data_6_V_din fifo_data 1 14 }  { res_V_data_6_V_full_n fifo_status 0 1 }  { res_V_data_6_V_write fifo_update 1 1 } } }
	res_V_data_7_V { ap_fifo {  { res_V_data_7_V_din fifo_data 1 14 }  { res_V_data_7_V_full_n fifo_status 0 1 }  { res_V_data_7_V_write fifo_update 1 1 } } }
	res_V_data_8_V { ap_fifo {  { res_V_data_8_V_din fifo_data 1 14 }  { res_V_data_8_V_full_n fifo_status 0 1 }  { res_V_data_8_V_write fifo_update 1 1 } } }
	res_V_data_9_V { ap_fifo {  { res_V_data_9_V_din fifo_data 1 14 }  { res_V_data_9_V_full_n fifo_status 0 1 }  { res_V_data_9_V_write fifo_update 1 1 } } }
}
