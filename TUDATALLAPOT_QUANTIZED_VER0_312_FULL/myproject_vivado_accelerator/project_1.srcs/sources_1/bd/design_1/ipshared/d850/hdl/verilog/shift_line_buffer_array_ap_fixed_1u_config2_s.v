// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module shift_line_buffer_array_ap_fixed_1u_config2_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        kernel_window_8_V_write,
        kernel_window_1_V_read,
        kernel_window_2_V_read,
        kernel_window_4_V_read,
        kernel_window_5_V_read,
        kernel_window_7_V_read,
        kernel_window_8_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8
);

parameter    ap_ST_fsm_state1 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [15:0] kernel_window_8_V_write;
input  [15:0] kernel_window_1_V_read;
input  [15:0] kernel_window_2_V_read;
input  [15:0] kernel_window_4_V_read;
input  [15:0] kernel_window_5_V_read;
input  [15:0] kernel_window_7_V_read;
input  [15:0] kernel_window_8_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
output  [15:0] ap_return_4;
output  [15:0] ap_return_5;
output  [15:0] ap_return_6;
output  [15:0] ap_return_7;
output  [15:0] ap_return_8;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    line_buffer_Array_V_1_0_0_ce0;
reg    line_buffer_Array_V_1_0_0_we0;
wire   [15:0] line_buffer_Array_V_1_0_0_q0;
reg    line_buffer_Array_V_1_1_0_ce0;
reg    line_buffer_Array_V_1_1_0_we0;
wire   [15:0] line_buffer_Array_V_1_1_0_q0;
reg   [0:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
end

shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb #(
    .DataWidth( 16 ),
    .AddressRange( 18 ),
    .AddressWidth( 5 ))
line_buffer_Array_V_1_0_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(5'd17),
    .ce0(line_buffer_Array_V_1_0_0_ce0),
    .we0(line_buffer_Array_V_1_0_0_we0),
    .d0(kernel_window_8_V_write),
    .q0(line_buffer_Array_V_1_0_0_q0)
);

shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb #(
    .DataWidth( 16 ),
    .AddressRange( 18 ),
    .AddressWidth( 5 ))
line_buffer_Array_V_1_1_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(5'd17),
    .ce0(line_buffer_Array_V_1_1_0_ce0),
    .we0(line_buffer_Array_V_1_1_0_we0),
    .d0(line_buffer_Array_V_1_0_0_q0),
    .q0(line_buffer_Array_V_1_1_0_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        line_buffer_Array_V_1_0_0_ce0 = 1'd1;
    end else begin
        line_buffer_Array_V_1_0_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        line_buffer_Array_V_1_0_0_we0 = 1'd1;
    end else begin
        line_buffer_Array_V_1_0_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        line_buffer_Array_V_1_1_0_ce0 = 1'd1;
    end else begin
        line_buffer_Array_V_1_1_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        line_buffer_Array_V_1_1_0_we0 = 1'd1;
    end else begin
        line_buffer_Array_V_1_1_0_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_return_0 = kernel_window_1_V_read;

assign ap_return_1 = kernel_window_4_V_read;

assign ap_return_2 = kernel_window_7_V_read;

assign ap_return_3 = kernel_window_2_V_read;

assign ap_return_4 = line_buffer_Array_V_1_1_0_q0;

assign ap_return_5 = kernel_window_5_V_read;

assign ap_return_6 = line_buffer_Array_V_1_0_0_q0;

assign ap_return_7 = kernel_window_8_V_read;

assign ap_return_8 = kernel_window_8_V_write;

endmodule //shift_line_buffer_array_ap_fixed_1u_config2_s
