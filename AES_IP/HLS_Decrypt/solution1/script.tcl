############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project HLS_Decrypt
set_top decrypt
add_files AES_decrypt.cpp
add_files -tb AES_decrypt_test.cpp
open_solution "solution1"
set_part {xc7z007sclg400-1} -tool vivado
create_clock -period 10 -name default
#source "./HLS_Decrypt/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -rtl vhdl -format ip_catalog
