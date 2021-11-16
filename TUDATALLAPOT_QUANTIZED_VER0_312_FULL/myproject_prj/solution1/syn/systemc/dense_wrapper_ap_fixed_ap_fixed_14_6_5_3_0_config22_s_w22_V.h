// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_H__
#define __dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 24;
  static const unsigned AddressRange = 20;
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


   SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_ram) {
        ram[0] = "0b000000000000000000000001";
        ram[1] = "0b000000001001000000011010";
        ram[2] = "0b110001110101110011101001";
        ram[3] = "0b001110000000001111010111";
        ram[4] = "0b000000011101000000000000";
        ram[5] = "0b000000000000110001000000";
        ram[6] = "0b000111000000100011000000";
        ram[7] = "0b000000000000110001000000";
        ram[8] = "0b010011111000010000111000";
        ram[9] = "0b000000000000000000011000";
        ram[10] = "0b101111111000111101001110";
        ram[11] = "0b000101010100100101000000";
        ram[12] = "0b000000101000000000110111";
        ram[13] = "0b000000000000000000000000";
        ram[14] = "0b100011110110111111000000";
        ram[15] = "0b001110000000000000010001";
        ram[16] = "0b100100000000101010000000";
        ram[17] = "0b000000101110000000000000";
        ram[18] = "0b000000110011001100000000";
        ram[19] = "0b000000000000000000000111";


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


SC_MODULE(dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V) {


static const unsigned DataWidth = 24;
static const unsigned AddressRange = 20;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V) {
meminst = new dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_ram("dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V() {
    delete meminst;
}


};//endmodule
#endif
