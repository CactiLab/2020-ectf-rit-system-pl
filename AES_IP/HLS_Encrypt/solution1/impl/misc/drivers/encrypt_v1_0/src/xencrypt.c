// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xencrypt.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEncrypt_CfgInitialize(XEncrypt *InstancePtr, XEncrypt_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Aes_bus_s_BaseAddress = ConfigPtr->Aes_bus_s_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XEncrypt_Start(XEncrypt *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL) & 0x80;
    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL, Data | 0x01);
}

u32 XEncrypt_IsDone(XEncrypt *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XEncrypt_IsIdle(XEncrypt *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XEncrypt_IsReady(XEncrypt *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XEncrypt_EnableAutoRestart(XEncrypt *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL, 0x80);
}

void XEncrypt_DisableAutoRestart(XEncrypt *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_AP_CTRL, 0);
}

u32 XEncrypt_Get_PlainText_BaseAddress(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE);
}

u32 XEncrypt_Get_PlainText_HighAddress(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_HIGH);
}

u32 XEncrypt_Get_PlainText_TotalBytes(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + 1);
}

u32 XEncrypt_Get_PlainText_BitWidth(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XENCRYPT_AES_BUS_S_WIDTH_PLAINTEXT;
}

u32 XEncrypt_Get_PlainText_Depth(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XENCRYPT_AES_BUS_S_DEPTH_PLAINTEXT;
}

u32 XEncrypt_Write_PlainText_Words(XEncrypt *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEncrypt_Read_PlainText_Words(XEncrypt *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEncrypt_Write_PlainText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEncrypt_Read_PlainText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_PLAINTEXT_BASE + offset + i);
    }
    return length;
}

u32 XEncrypt_Get_CipherText_BaseAddress(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE);
}

u32 XEncrypt_Get_CipherText_HighAddress(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_HIGH);
}

u32 XEncrypt_Get_CipherText_TotalBytes(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + 1);
}

u32 XEncrypt_Get_CipherText_BitWidth(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XENCRYPT_AES_BUS_S_WIDTH_CIPHERTEXT;
}

u32 XEncrypt_Get_CipherText_Depth(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XENCRYPT_AES_BUS_S_DEPTH_CIPHERTEXT;
}

u32 XEncrypt_Write_CipherText_Words(XEncrypt *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEncrypt_Read_CipherText_Words(XEncrypt *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEncrypt_Write_CipherText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEncrypt_Read_CipherText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_HIGH - XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Aes_bus_s_BaseAddress + XENCRYPT_AES_BUS_S_ADDR_CIPHERTEXT_BASE + offset + i);
    }
    return length;
}

void XEncrypt_InterruptGlobalEnable(XEncrypt *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_GIE, 1);
}

void XEncrypt_InterruptGlobalDisable(XEncrypt *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_GIE, 0);
}

void XEncrypt_InterruptEnable(XEncrypt *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_IER);
    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_IER, Register | Mask);
}

void XEncrypt_InterruptDisable(XEncrypt *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_IER);
    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_IER, Register & (~Mask));
}

void XEncrypt_InterruptClear(XEncrypt *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEncrypt_WriteReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_ISR, Mask);
}

u32 XEncrypt_InterruptGetEnabled(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_IER);
}

u32 XEncrypt_InterruptGetStatus(XEncrypt *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEncrypt_ReadReg(InstancePtr->Aes_bus_s_BaseAddress, XENCRYPT_AES_BUS_S_ADDR_ISR);
}

