// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.4 (lin64) Build 2086221 Fri Dec 15 20:54:30 MST 2017
// Date        : Wed Jan 29 11:48:59 2020
// Host        : vagrant running 64-bit Ubuntu 18.10
// Command     : write_verilog -force -mode synth_stub
//               /ectf/pl/src/bd/system/ip/system_i2s_output_1_0/system_i2s_output_1_0_stub.v
// Design      : system_i2s_output_1_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z007sclg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "i2s_output,Vivado 2017.4" *)
module system_i2s_output_1_0(clk, data_l, data_r, data_accepted, i2s_sd, 
  i2s_lrclk, i2s_sclk, i2s_mclk)
/* synthesis syn_black_box black_box_pad_pin="clk,data_l[15:0],data_r[15:0],data_accepted,i2s_sd,i2s_lrclk,i2s_sclk,i2s_mclk" */;
  input clk;
  input [15:0]data_l;
  input [15:0]data_r;
  output data_accepted;
  output i2s_sd;
  output i2s_lrclk;
  output i2s_sclk;
  output i2s_mclk;
endmodule
