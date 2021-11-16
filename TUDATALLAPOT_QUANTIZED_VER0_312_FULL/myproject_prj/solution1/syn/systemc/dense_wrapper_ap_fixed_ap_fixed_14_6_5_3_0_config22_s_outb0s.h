// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_H__
#define __dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 2;
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


   SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_ram) {
        for (unsigned i = 0; i < 5 ; i = i + 1) {
            ram[i] = "0b00";
        }
        for (unsigned i = 5; i < 10 ; i = i + 1) {
            ram[i] = "0b01";
        }
        for (unsigned i = 10; i < 15 ; i = i + 1) {
            ram[i] = "0b10";
        }
        for (unsigned i = 15; i < 20 ; i = i + 1) {
            ram[i] = "0b11";
        }


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


SC_MODULE(dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s) {


static const unsigned DataWidth = 2;
static const unsigned AddressRange = 20;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_ram* meminst;


SC_CTOR(dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s) {
meminst = new dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_ram("dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_outb0s() {
    delete meminst;
}


};//endmodule
#endif
