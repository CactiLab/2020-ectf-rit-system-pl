# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AES_bus_s {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
CipherText { 
	dir I
	width 8
	depth 16
	mode ap_memory
	offset 16
	offset_end 31
}
PlainText { 
	dir O
	width 8
	depth 16
	mode ap_memory
	offset 32
	offset_end 47
}
}
dict set axilite_register_dict AES_bus_s $port_AES_bus_s


