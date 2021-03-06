set(MICRO_OPS_SRCS
  shape.cc
  reduce.cc
  matmul.cc
  bias_add.cc
  softmax.cc
  eltwise.cc
  expand_dims.cc
  squeeze.cc
  activation.cc
  nhwc/depthwise_conv_2d_ref.cc
  nhwc/conv_2d_c4_s4.cc
  nhwc/depthwise_conv_2d_kb3_s4.cc
  nhwc/pooling_ref.cc
  nhwc/conv_2d_c3_s4.cc
  nhwc/conv_2d_ref.cc
  nhwc/depthwise_conv_2d_kb4_s4.cc
  nhwc/depthwise_conv_2d_kb1_s4.cc
  nhwc/base/depthwise_conv_2d_base.cc
  nhwc/base/conv_2d_base.cc
  nhwc/base/filter_op_base.cc
  nhwc/base/pooling_base.cc
  nhwc/depthwise_conv_2d_kb2_s4.cc
  nhwc/conv_2d_c2_s4.cc
  nhwc/batch_norm.cc
  nhwc/pooling_s4.cc
  utils/gemm.cc
  utils/crumb_utils.cc
  utils/gemv.cc
  utils/activation.cc
)

add_subdirectory(nhwc)

add_library(micro_ops
  ${MICRO_OPS_SRCS}
)
target_link_libraries(micro_ops
  PUBLIC micro_base
)

add_library(micro_all_ops INTERFACE)

target_link_libraries(micro_all_ops INTERFACE micro_ops)

if(MACE_MICRO_ENABLE_CMSIS)
  add_subdirectory(cmsis_nn)
endif()

if(MACE_MICRO_ENABLE_XTENSA)
  add_subdirectory(xtensa)
endif()