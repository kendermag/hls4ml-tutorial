#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 512
#define N_INPUT_2_1 16
#define N_INPUT_3_1 1
#define OUT_HEIGHT_29 514
#define OUT_WIDTH_29 18
#define N_CHAN_29 1
#define OUT_HEIGHT_2 512
#define OUT_WIDTH_2 16
#define N_FILT_2 8
#define OUT_HEIGHT_5 256
#define OUT_WIDTH_5 8
#define N_FILT_5 8
#define OUT_HEIGHT_30 258
#define OUT_WIDTH_30 10
#define N_CHAN_30 8
#define OUT_HEIGHT_6 256
#define OUT_WIDTH_6 8
#define N_FILT_6 10
#define OUT_HEIGHT_9 128
#define OUT_WIDTH_9 4
#define N_FILT_9 10
#define OUT_HEIGHT_31 130
#define OUT_WIDTH_31 6
#define N_CHAN_31 10
#define OUT_HEIGHT_10 128
#define OUT_WIDTH_10 4
#define N_FILT_10 10
#define OUT_HEIGHT_32 130
#define OUT_WIDTH_32 6
#define N_CHAN_32 10
#define OUT_HEIGHT_13 128
#define OUT_WIDTH_13 4
#define N_FILT_13 12
#define OUT_HEIGHT_16 32
#define OUT_WIDTH_16 1
#define N_FILT_16 12
#define N_SIZE_1_33 384
#define N_LAYER_18 5
#define N_LAYER_22 16
#define N_LAYER_26 3

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<14,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 1*1> input_t;
typedef nnet::array<ap_fixed<16,6>, 1*1> layer29_t;
typedef nnet::array<ap_fixed<14,6>, 8*1> layer2_t;
typedef ap_fixed<6,1> weight2_t;
typedef ap_fixed<6,1> bias2_t;
typedef nnet::array<ap_fixed<6,1,AP_RND,AP_SAT>, 8*1> layer4_t;
typedef ap_fixed<16,6> max_pooling2d_default_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer5_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer30_t;
typedef nnet::array<ap_fixed<14,6>, 10*1> layer6_t;
typedef ap_fixed<6,1> weight6_t;
typedef ap_fixed<6,1> bias6_t;
typedef nnet::array<ap_fixed<6,1,AP_RND,AP_SAT>, 10*1> layer8_t;
typedef ap_fixed<16,6> max_pooling2d_1_default_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer9_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer31_t;
typedef nnet::array<ap_fixed<14,6>, 10*1> layer10_t;
typedef ap_fixed<6,1> weight10_t;
typedef ap_fixed<6,1> bias10_t;
typedef nnet::array<ap_fixed<6,1,AP_RND,AP_SAT>, 10*1> layer12_t;
typedef nnet::array<ap_fixed<6,1>, 10*1> layer32_t;
typedef nnet::array<ap_fixed<14,6>, 12*1> layer13_t;
typedef ap_fixed<6,1> weight13_t;
typedef ap_fixed<6,1> bias13_t;
typedef nnet::array<ap_fixed<6,1,AP_RND,AP_SAT>, 12*1> layer15_t;
typedef ap_fixed<16,6> max_pooling2d_2_default_t;
typedef nnet::array<ap_fixed<16,6>, 12*1> layer16_t;
typedef nnet::array<ap_fixed<14,6>, 384*1> layer33_t;
typedef nnet::array<ap_fixed<14,6>, 5*1> layer18_t;
typedef ap_fixed<6,1> weight18_t;
typedef ap_uint<1> bias18_t;
typedef nnet::array<ap_fixed<14,6>, 5*1> layer20_t;
typedef ap_fixed<16,6> batch_normalization_4_scale_t;
typedef ap_fixed<16,6> batch_normalization_4_bias_t;
typedef nnet::array<ap_fixed<6,1,AP_RND,AP_SAT>, 5*1> layer21_t;
typedef nnet::array<ap_fixed<14,6>, 16*1> layer22_t;
typedef ap_fixed<6,1> weight22_t;
typedef ap_uint<1> bias22_t;
typedef nnet::array<ap_fixed<14,6>, 16*1> layer24_t;
typedef ap_fixed<16,6> batch_normalization_5_scale_t;
typedef ap_fixed<16,6> batch_normalization_5_bias_t;
typedef nnet::array<ap_fixed<6,1,AP_RND,AP_SAT>, 16*1> layer25_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer26_t;
typedef ap_fixed<16,6> dense_weight_t;
typedef ap_fixed<16,6> dense_bias_t;
typedef ap_fixed<16,6> activation_default_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> result_t;

#endif
