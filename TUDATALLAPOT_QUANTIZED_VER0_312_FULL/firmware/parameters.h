#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_batchnorm_stream.h"
#include "nnet_utils/nnet_conv2d.h"
#include "nnet_utils/nnet_conv2d_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_padding.h"
#include "nnet_utils/nnet_padding_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
#include "nnet_utils/nnet_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w6.h"
#include "weights/b6.h"
#include "weights/w10.h"
#include "weights/b10.h"
#include "weights/w13.h"
#include "weights/b13.h"
#include "weights/w18.h"
#include "weights/b18.h"
#include "weights/s20.h"
#include "weights/b20.h"
#include "weights/w22.h"
#include "weights/b22.h"
#include "weights/s24.h"
#include "weights/b24.h"
#include "weights/w26.h"
#include "weights/b26.h"

//hls-fpga-machine-learning insert layer-config
// zp2d_q_conv2d_batchnorm
struct config29 : nnet::padding2d_config {
    static const unsigned in_height = N_INPUT_1_1;
    static const unsigned in_width = N_INPUT_2_1;
    static const unsigned n_chan = N_INPUT_3_1;
    static const unsigned out_height = OUT_HEIGHT_29;
    static const unsigned out_width = OUT_WIDTH_29;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// q_conv2d_batchnorm
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 9;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 18;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<14,6> accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config2 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_29;
    static const unsigned in_width = OUT_WIDTH_29;
    static const unsigned n_chan = N_CHAN_29;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_2;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_2;
    static const unsigned out_width = OUT_WIDTH_2;
    static const unsigned reuse_factor = 18;
    static const unsigned n_zeros = 36;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<14,6> accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    typedef config2_mult mult_config;
};
const ap_uint<config2::filt_height * config2::filt_width> config2::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// q_activation
struct relu_config4 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

// max_pooling2d
struct config5 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_2;
    static const unsigned in_width = OUT_WIDTH_2;
    static const unsigned n_filt = N_FILT_5;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_5;

    static const unsigned out_height = OUT_HEIGHT_5;
    static const unsigned out_width = OUT_WIDTH_5;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 2;
    typedef ap_fixed<16,6> accum_t;
};

// zp2d_q_conv2d_batchnorm_1
struct config30 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_5;
    static const unsigned in_width = OUT_WIDTH_5;
    static const unsigned n_chan = N_FILT_5;
    static const unsigned out_height = OUT_HEIGHT_30;
    static const unsigned out_width = OUT_WIDTH_30;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// q_conv2d_batchnorm_1
struct config6_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 10;
    static const unsigned reuse_factor = 18;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<14,6> accum_t;
    typedef bias6_t bias_t;
    typedef weight6_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config6 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_30;
    static const unsigned in_width = OUT_WIDTH_30;
    static const unsigned n_chan = N_CHAN_30;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_6;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_6;
    static const unsigned out_width = OUT_WIDTH_6;
    static const unsigned reuse_factor = 18;
    static const unsigned n_zeros = 373;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<14,6> accum_t;
    typedef bias6_t bias_t;
    typedef weight6_t weight_t;
    typedef config6_mult mult_config;
};
const ap_uint<config6::filt_height * config6::filt_width> config6::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// q_activation_1
struct relu_config8 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_6*OUT_WIDTH_6*N_FILT_6;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

// max_pooling2d_1
struct config9 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_6;
    static const unsigned in_width = OUT_WIDTH_6;
    static const unsigned n_filt = N_FILT_9;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_9;

    static const unsigned out_height = OUT_HEIGHT_9;
    static const unsigned out_width = OUT_WIDTH_9;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 2;
    typedef ap_fixed<16,6> accum_t;
};

// zp2d_q_conv2d_batchnorm_2
struct config31 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_9;
    static const unsigned in_width = OUT_WIDTH_9;
    static const unsigned n_chan = N_FILT_9;
    static const unsigned out_height = OUT_HEIGHT_31;
    static const unsigned out_width = OUT_WIDTH_31;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// q_conv2d_batchnorm_2
struct config10_mult : nnet::dense_config {
    static const unsigned n_in = 90;
    static const unsigned n_out = 10;
    static const unsigned reuse_factor = 15;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<14,6> accum_t;
    typedef bias10_t bias_t;
    typedef weight10_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config10 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_31;
    static const unsigned in_width = OUT_WIDTH_31;
    static const unsigned n_chan = N_CHAN_31;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_10;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_10;
    static const unsigned out_width = OUT_WIDTH_10;
    static const unsigned reuse_factor = 15;
    static const unsigned n_zeros = 475;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<14,6> accum_t;
    typedef bias10_t bias_t;
    typedef weight10_t weight_t;
    typedef config10_mult mult_config;
};
const ap_uint<config10::filt_height * config10::filt_width> config10::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// q_activation_2
struct relu_config12 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_10*OUT_WIDTH_10*N_FILT_10;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

// zp2d_q_conv2d_batchnorm_3
struct config32 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_10;
    static const unsigned in_width = OUT_WIDTH_10;
    static const unsigned n_chan = N_FILT_10;
    static const unsigned out_height = OUT_HEIGHT_32;
    static const unsigned out_width = OUT_WIDTH_32;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// q_conv2d_batchnorm_3
struct config13_mult : nnet::dense_config {
    static const unsigned n_in = 90;
    static const unsigned n_out = 12;
    static const unsigned reuse_factor = 15;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<14,6> accum_t;
    typedef bias13_t bias_t;
    typedef weight13_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config13 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_32;
    static const unsigned in_width = OUT_WIDTH_32;
    static const unsigned n_chan = N_CHAN_32;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_13;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_13;
    static const unsigned out_width = OUT_WIDTH_13;
    static const unsigned reuse_factor = 15;
    static const unsigned n_zeros = 596;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<14,6> accum_t;
    typedef bias13_t bias_t;
    typedef weight13_t weight_t;
    typedef config13_mult mult_config;
};
const ap_uint<config13::filt_height * config13::filt_width> config13::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// q_activation_3
struct relu_config15 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_13*OUT_WIDTH_13*N_FILT_13;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

// max_pooling2d_2
struct config16 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_13;
    static const unsigned in_width = OUT_WIDTH_13;
    static const unsigned n_filt = N_FILT_16;
    static const unsigned stride_height = 4;
    static const unsigned stride_width = 4;
    static const unsigned pool_height = 4;
    static const unsigned pool_width = 4;

    static const unsigned filt_height = 4;
    static const unsigned filt_width = 4;
    static const unsigned n_chan = N_FILT_16;

    static const unsigned out_height = OUT_HEIGHT_16;
    static const unsigned out_width = OUT_WIDTH_16;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 2;
    typedef ap_fixed<16,6> accum_t;
};

// q_dense
struct config18 : nnet::dense_config {
    static const unsigned n_in = N_SIZE_1_33;
    static const unsigned n_out = N_LAYER_18;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 16;
    static const unsigned n_zeros = 1175;
    static const unsigned n_nonzeros = 745;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<14,6> accum_t;
    typedef bias18_t bias_t;
    typedef weight18_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// batch_normalization_4
struct config20 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_18;
    static const unsigned n_filt = -1;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    typedef batch_normalization_4_bias_t bias_t;
    typedef batch_normalization_4_scale_t scale_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// q_activation_4
struct relu_config21 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_18;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

// q_dense_1
struct config22 : nnet::dense_config {
    static const unsigned n_in = N_LAYER_18;
    static const unsigned n_out = N_LAYER_22;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 20;
    static const unsigned n_zeros = 40;
    static const unsigned n_nonzeros = 40;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<14,6> accum_t;
    typedef bias22_t bias_t;
    typedef weight22_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// batch_normalization_5
struct config24 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_22;
    static const unsigned n_filt = -1;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    typedef batch_normalization_5_bias_t bias_t;
    typedef batch_normalization_5_scale_t scale_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// q_activation_5
struct relu_config25 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_22;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

// dense
struct config26 : nnet::dense_config {
    static const unsigned n_in = N_LAYER_22;
    static const unsigned n_out = N_LAYER_26;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 16;
    static const unsigned n_zeros = 24;
    static const unsigned n_nonzeros = 24;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<14,6> accum_t;
    typedef dense_bias_t bias_t;
    typedef dense_weight_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// activation
struct softmax_config28 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_26;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
    typedef ap_fixed<18,8,AP_RND,AP_SAT> exp_table_t;
    typedef ap_fixed<18,8,AP_RND,AP_SAT> inv_table_t;
};


#endif
