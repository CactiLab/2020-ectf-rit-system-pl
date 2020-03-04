set moduleName decrypt
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {decrypt}
set C_modelType { void 0 }
set C_modelArgList {
	{ CipherText int 8 regular {axi_slave 0}  }
	{ PlainText int 8 regular {axi_slave 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "CipherText", "interface" : "axi_slave", "bundle":"AES_bus_s","type":"ap_memory","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "CipherText","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "offset" : {"in":16}, "offset_end" : {"in":31}} , 
 	{ "Name" : "PlainText", "interface" : "axi_slave", "bundle":"AES_bus_s","type":"ap_memory","bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "PlainText","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "offset" : {"out":32}, "offset_end" : {"out":47}} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ s_axi_AES_bus_s_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_AES_bus_s_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AES_bus_s_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AES_bus_s_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_AES_bus_s_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AES_bus_s_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AES_bus_s_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AES_bus_s_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AES_bus_s_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "AWADDR" },"address":[{"name":"decrypt","role":"start","value":"0","valid_bit":"0"},{"name":"decrypt","role":"continue","value":"0","valid_bit":"4"},{"name":"decrypt","role":"auto_start","value":"0","valid_bit":"7"},{"name":"CipherText","role":"data","value":"16"}] },
	{ "name": "s_axi_AES_bus_s_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "AWVALID" } },
	{ "name": "s_axi_AES_bus_s_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "AWREADY" } },
	{ "name": "s_axi_AES_bus_s_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "WVALID" } },
	{ "name": "s_axi_AES_bus_s_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "WREADY" } },
	{ "name": "s_axi_AES_bus_s_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "WDATA" } },
	{ "name": "s_axi_AES_bus_s_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "WSTRB" } },
	{ "name": "s_axi_AES_bus_s_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "ARADDR" },"address":[{"name":"decrypt","role":"start","value":"0","valid_bit":"0"},{"name":"decrypt","role":"done","value":"0","valid_bit":"1"},{"name":"decrypt","role":"idle","value":"0","valid_bit":"2"},{"name":"decrypt","role":"ready","value":"0","valid_bit":"3"},{"name":"decrypt","role":"auto_start","value":"0","valid_bit":"7"},{"name":"PlainText","role":"data","value":"32"}] },
	{ "name": "s_axi_AES_bus_s_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "ARVALID" } },
	{ "name": "s_axi_AES_bus_s_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "ARREADY" } },
	{ "name": "s_axi_AES_bus_s_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "RVALID" } },
	{ "name": "s_axi_AES_bus_s_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "RREADY" } },
	{ "name": "s_axi_AES_bus_s_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "RDATA" } },
	{ "name": "s_axi_AES_bus_s_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "RRESP" } },
	{ "name": "s_axi_AES_bus_s_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "BVALID" } },
	{ "name": "s_axi_AES_bus_s_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "BREADY" } },
	{ "name": "s_axi_AES_bus_s_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AES_bus_s", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "decrypt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1486", "EstimateLatencyMax" : "2096",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "CipherText", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PlainText", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Key1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SBox", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RCon", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "InvSBox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Key1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SBox_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.RCon_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.InvSBox_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.decrypt_AES_bus_s_s_axi_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.StateArray_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ExpandedKey_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.StateArrayTmp_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	decrypt {
		CipherText {Type I LastRead 4 FirstWrite -1}
		PlainText {Type O LastRead -1 FirstWrite 8}
		Key1 {Type I LastRead -1 FirstWrite -1}
		SBox {Type I LastRead -1 FirstWrite -1}
		RCon {Type I LastRead -1 FirstWrite -1}
		InvSBox {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1486", "Max" : "2096"}
	, {"Name" : "Interval", "Min" : "1487", "Max" : "2097"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
