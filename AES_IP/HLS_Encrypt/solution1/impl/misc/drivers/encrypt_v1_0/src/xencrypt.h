// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XENCRYPT_H
#define XENCRYPT_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xencrypt_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Aes_bus_s_BaseAddress;
} XEncrypt_Config;
#endif

typedef struct {
    u32 Aes_bus_s_BaseAddress;
    u32 IsReady;
} XEncrypt;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEncrypt_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEncrypt_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEncrypt_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEncrypt_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XEncrypt_Initialize(XEncrypt *InstancePtr, u16 DeviceId);
XEncrypt_Config* XEncrypt_LookupConfig(u16 DeviceId);
int XEncrypt_CfgInitialize(XEncrypt *InstancePtr, XEncrypt_Config *ConfigPtr);
#else
int XEncrypt_Initialize(XEncrypt *InstancePtr, const char* InstanceName);
int XEncrypt_Release(XEncrypt *InstancePtr);
#endif

void XEncrypt_Start(XEncrypt *InstancePtr);
u32 XEncrypt_IsDone(XEncrypt *InstancePtr);
u32 XEncrypt_IsIdle(XEncrypt *InstancePtr);
u32 XEncrypt_IsReady(XEncrypt *InstancePtr);
void XEncrypt_EnableAutoRestart(XEncrypt *InstancePtr);
void XEncrypt_DisableAutoRestart(XEncrypt *InstancePtr);

u32 XEncrypt_Get_PlainText_BaseAddress(XEncrypt *InstancePtr);
u32 XEncrypt_Get_PlainText_HighAddress(XEncrypt *InstancePtr);
u32 XEncrypt_Get_PlainText_TotalBytes(XEncrypt *InstancePtr);
u32 XEncrypt_Get_PlainText_BitWidth(XEncrypt *InstancePtr);
u32 XEncrypt_Get_PlainText_Depth(XEncrypt *InstancePtr);
u32 XEncrypt_Write_PlainText_Words(XEncrypt *InstancePtr, int offset, int *data, int length);
u32 XEncrypt_Read_PlainText_Words(XEncrypt *InstancePtr, int offset, int *data, int length);
u32 XEncrypt_Write_PlainText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length);
u32 XEncrypt_Read_PlainText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length);
u32 XEncrypt_Get_CipherText_BaseAddress(XEncrypt *InstancePtr);
u32 XEncrypt_Get_CipherText_HighAddress(XEncrypt *InstancePtr);
u32 XEncrypt_Get_CipherText_TotalBytes(XEncrypt *InstancePtr);
u32 XEncrypt_Get_CipherText_BitWidth(XEncrypt *InstancePtr);
u32 XEncrypt_Get_CipherText_Depth(XEncrypt *InstancePtr);
u32 XEncrypt_Write_CipherText_Words(XEncrypt *InstancePtr, int offset, int *data, int length);
u32 XEncrypt_Read_CipherText_Words(XEncrypt *InstancePtr, int offset, int *data, int length);
u32 XEncrypt_Write_CipherText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length);
u32 XEncrypt_Read_CipherText_Bytes(XEncrypt *InstancePtr, int offset, char *data, int length);

void XEncrypt_InterruptGlobalEnable(XEncrypt *InstancePtr);
void XEncrypt_InterruptGlobalDisable(XEncrypt *InstancePtr);
void XEncrypt_InterruptEnable(XEncrypt *InstancePtr, u32 Mask);
void XEncrypt_InterruptDisable(XEncrypt *InstancePtr, u32 Mask);
void XEncrypt_InterruptClear(XEncrypt *InstancePtr, u32 Mask);
u32 XEncrypt_InterruptGetEnabled(XEncrypt *InstancePtr);
u32 XEncrypt_InterruptGetStatus(XEncrypt *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
