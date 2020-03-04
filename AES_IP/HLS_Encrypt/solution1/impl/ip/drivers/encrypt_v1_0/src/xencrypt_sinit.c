// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xencrypt.h"

extern XEncrypt_Config XEncrypt_ConfigTable[];

XEncrypt_Config *XEncrypt_LookupConfig(u16 DeviceId) {
	XEncrypt_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XENCRYPT_NUM_INSTANCES; Index++) {
		if (XEncrypt_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XEncrypt_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XEncrypt_Initialize(XEncrypt *InstancePtr, u16 DeviceId) {
	XEncrypt_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XEncrypt_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XEncrypt_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

