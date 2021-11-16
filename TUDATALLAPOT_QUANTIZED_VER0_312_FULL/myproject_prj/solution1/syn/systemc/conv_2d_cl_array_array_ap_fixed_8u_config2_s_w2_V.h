// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_H__
#define __conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 24;
  static const unsigned AddressRange = 18;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_ram) {
        ram[0] = "0b001101001101000000010011";
        ram[1] = "0b110011111000000000000000";
        ram[2] = "0b000000000000001001000000";
        ram[3] = "0b000000000000001100000000";
        ram[4] = "0b000000111001000000110000";
        ram[5] = "0b001100110010110010001110";
        ram[6] = "0b000000000000110010000000";
        ram[7] = "0b111100110101111000000000";
        ram[8] = "0b010011110110110111110011";
        ram[9] = "0b000000000000000000000000";
        ram[10] = "0b000000110100101101000000";
        ram[11] = "0b000000110011000000000000";
        ram[12] = "0b101101010111101111000000";
        ram[13] = "0b000000000000010010000000";
        ram[14] = "0b000000110001000000000000";
        ram[15] = "0b000000000000010001100111";
        ram[16] = "0b010101001111001100001001";
        ram[17] = "0b000000000000000000010011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V) {


static const unsigned DataWidth = 24;
static const unsigned AddressRange = 18;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_ram* meminst;


SC_CTOR(conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V) {
meminst = new conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_ram("conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_array_ap_fixed_8u_config2_s_w2_V() {
    delete meminst;
}


};//endmodule
#endif
