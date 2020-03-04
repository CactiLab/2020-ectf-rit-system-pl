#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_AWADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_ARADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AES_bus_s_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("interrupt", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "encrypt";
