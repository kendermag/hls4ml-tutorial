//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_1,
    hls::stream<result_t> &layer28_out,
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_1,layer28_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1;
    const_size_out_1 = N_LAYER_26;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<weight2_t, 72>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 8>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight6_t, 720>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 10>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight10_t, 900>(w10, "w10.txt");
        nnet::load_weights_from_txt<bias10_t, 10>(b10, "b10.txt");
        nnet::load_weights_from_txt<weight13_t, 1080>(w13, "w13.txt");
        nnet::load_weights_from_txt<bias13_t, 12>(b13, "b13.txt");
        nnet::load_weights_from_txt<weight18_t, 1920>(w18, "w18.txt");
        nnet::load_weights_from_txt<bias18_t, 5>(b18, "b18.txt");
        nnet::load_weights_from_txt<batch_normalization_4_scale_t, 5>(s20, "s20.txt");
        nnet::load_weights_from_txt<batch_normalization_4_bias_t, 5>(b20, "b20.txt");
        nnet::load_weights_from_txt<weight22_t, 80>(w22, "w22.txt");
        nnet::load_weights_from_txt<bias22_t, 16>(b22, "b22.txt");
        nnet::load_weights_from_txt<batch_normalization_5_scale_t, 16>(s24, "s24.txt");
        nnet::load_weights_from_txt<batch_normalization_5_bias_t, 16>(b24, "b24.txt");
        nnet::load_weights_from_txt<dense_weight_t, 48>(w26, "w26.txt");
        nnet::load_weights_from_txt<dense_bias_t, 3>(b26, "b26.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    hls::stream<layer29_t> layer29_out("layer29_out");
    #pragma HLS STREAM variable=layer29_out depth=9252
    nnet::zeropad2d_cl<input_t, layer29_t, config29>(input_1, layer29_out); // zp2d_q_conv2d_batchnorm

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=8192
    nnet::conv_2d_cl<layer29_t, layer2_t, config2>(layer29_out, layer2_out, w2, b2); // q_conv2d_batchnorm

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=8192
    nnet::relu<layer2_t, layer4_t, relu_config4>(layer2_out, layer4_out); // q_activation

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=2048
    nnet::pooling2d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out); // max_pooling2d

    hls::stream<layer30_t> layer30_out("layer30_out");
    #pragma HLS STREAM variable=layer30_out depth=2580
    nnet::zeropad2d_cl<layer5_t, layer30_t, config30>(layer5_out, layer30_out); // zp2d_q_conv2d_batchnorm_1

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=2048
    nnet::conv_2d_cl<layer30_t, layer6_t, config6>(layer30_out, layer6_out, w6, b6); // q_conv2d_batchnorm_1

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=2048
    nnet::relu<layer6_t, layer8_t, relu_config8>(layer6_out, layer8_out); // q_activation_1

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=512
    nnet::pooling2d_cl<layer8_t, layer9_t, config9>(layer8_out, layer9_out); // max_pooling2d_1

    hls::stream<layer31_t> layer31_out("layer31_out");
    #pragma HLS STREAM variable=layer31_out depth=780
    nnet::zeropad2d_cl<layer9_t, layer31_t, config31>(layer9_out, layer31_out); // zp2d_q_conv2d_batchnorm_2

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=512
    nnet::conv_2d_cl<layer31_t, layer10_t, config10>(layer31_out, layer10_out, w10, b10); // q_conv2d_batchnorm_2

    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=512
    nnet::relu<layer10_t, layer12_t, relu_config12>(layer10_out, layer12_out); // q_activation_2

    hls::stream<layer32_t> layer32_out("layer32_out");
    #pragma HLS STREAM variable=layer32_out depth=780
    nnet::zeropad2d_cl<layer12_t, layer32_t, config32>(layer12_out, layer32_out); // zp2d_q_conv2d_batchnorm_3

    hls::stream<layer13_t> layer13_out("layer13_out");
    #pragma HLS STREAM variable=layer13_out depth=512
    nnet::conv_2d_cl<layer32_t, layer13_t, config13>(layer32_out, layer13_out, w13, b13); // q_conv2d_batchnorm_3

    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=512
    nnet::relu<layer13_t, layer15_t, relu_config15>(layer13_out, layer15_out); // q_activation_3

    hls::stream<layer16_t> layer16_out("layer16_out");
    #pragma HLS STREAM variable=layer16_out depth=32
    nnet::pooling2d_cl<layer15_t, layer16_t, config16>(layer15_out, layer16_out); // max_pooling2d_2

    hls::stream<layer33_t> layer33_out("layer33_out");
    #pragma HLS STREAM variable=layer33_out depth=1
    nnet::repack_stream<layer16_t, layer33_t, 384>(layer16_out, layer33_out); // repack_flatten

    hls::stream<layer18_t> layer18_out("layer18_out");
    #pragma HLS STREAM variable=layer18_out depth=1
    nnet::dense<layer33_t, layer18_t, config18>(layer33_out, layer18_out, w18, b18); // q_dense

    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=1
    nnet::normalize<layer18_t, layer20_t, config20>(layer18_out, layer20_out, s20, b20); // batch_normalization_4

    hls::stream<layer21_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=1
    nnet::relu<layer20_t, layer21_t, relu_config21>(layer20_out, layer21_out); // q_activation_4

    hls::stream<layer22_t> layer22_out("layer22_out");
    #pragma HLS STREAM variable=layer22_out depth=1
    nnet::dense<layer21_t, layer22_t, config22>(layer21_out, layer22_out, w22, b22); // q_dense_1

    hls::stream<layer24_t> layer24_out("layer24_out");
    #pragma HLS STREAM variable=layer24_out depth=1
    nnet::normalize<layer22_t, layer24_t, config24>(layer22_out, layer24_out, s24, b24); // batch_normalization_5

    hls::stream<layer25_t> layer25_out("layer25_out");
    #pragma HLS STREAM variable=layer25_out depth=1
    nnet::relu<layer24_t, layer25_t, relu_config25>(layer24_out, layer25_out); // q_activation_5

    hls::stream<layer26_t> layer26_out("layer26_out");
    #pragma HLS STREAM variable=layer26_out depth=1
    nnet::dense<layer25_t, layer26_t, config26>(layer25_out, layer26_out, w26, b26); // dense

    nnet::softmax<layer26_t, result_t, softmax_config28>(layer26_out, layer28_out); // activation

}
