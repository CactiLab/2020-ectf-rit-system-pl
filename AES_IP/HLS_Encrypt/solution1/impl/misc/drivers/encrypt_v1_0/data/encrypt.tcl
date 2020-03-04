# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
proc generate {drv_handle} {
    xdefine_include_file $drv_handle "xparameters.h" "XEncrypt" \
        "NUM_INSTANCES" \
        "DEVICE_ID" \
        "C_S_AXI_AES_BUS_S_BASEADDR" \
        "C_S_AXI_AES_BUS_S_HIGHADDR"

    xdefine_config_file $drv_handle "xencrypt_g.c" "XEncrypt" \
        "DEVICE_ID" \
        "C_S_AXI_AES_BUS_S_BASEADDR"

    xdefine_canonical_xpars $drv_handle "xparameters.h" "XEncrypt" \
        "DEVICE_ID" \
        "C_S_AXI_AES_BUS_S_BASEADDR" \
        "C_S_AXI_AES_BUS_S_HIGHADDR"
}

