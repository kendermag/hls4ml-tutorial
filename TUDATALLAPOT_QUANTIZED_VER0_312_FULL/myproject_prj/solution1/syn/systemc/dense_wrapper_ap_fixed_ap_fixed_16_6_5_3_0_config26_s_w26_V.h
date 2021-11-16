// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_H__
#define __dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 45;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_ram) {
        ram[0] = "0b001101011100100000000000000000000000000000000";
        ram[1] = "0b000000000000000000000000000001111101100110110";
        ram[2] = "0b001001000000011111111111101101111101011101000";
        ram[3] = "0b000011111000111111111000000111111100110000000";
        ram[4] = "0b000000000000000000000000000000000000000000000";
        ram[5] = "0b111011001110100000000000000000000010000111110";
        ram[6] = "0b101101000000100000000000000000000000000000000";
        ram[7] = "0b000010110011000000100000111000000000000000000";
        ram[8] = "0b000000000000000000000000000001111110010100100";
        ram[9] = "0b000000000000000000100001001100000000000000000";
        ram[10] = "0b000000000000011110111101111010000000000100000";
        ram[11] = "0b000000000000000000000000000000000011100001111";
        ram[12] = "0b000000000000000000000000000000000000000000000";
        ram[13] = "0b001001101110100000000000000001111101111111011";
        ram[14] = "0b110101011010111111011110011000000011010000011";
        ram[15] = "0b000000000000000000110100101010000000000000000";


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


SC_MODULE(dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V) {


static const unsigned DataWidth = 45;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V) {
meminst = new dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_ram("dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V() {
    delete meminst;
}


};//endmodule
#endif
