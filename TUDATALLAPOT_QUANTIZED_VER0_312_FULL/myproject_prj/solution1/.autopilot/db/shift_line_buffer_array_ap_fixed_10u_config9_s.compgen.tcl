# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 247
set hasByteEnable 0
set MemName shift_line_buffer_array_ap_fixed_10u_config9_s_line_buffeBew
set CoreName ShiftReg
set PortList { 2 }
set DataWd 6
set AddrRange 8
set AddrWd 3
set Style srl
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 1
set MaxLatency -1
set DelayBudget 1.617
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_shiftreg] == "ap_gen_simcore_shiftreg"} {
    eval "ap_gen_simcore_shiftreg { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${Style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_shiftreg, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ShiftReg
if {${::AESL::PGuard_autocg_gen} && !${::AESL::PGuard_simmodel_gen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ShiftReg] == "::AESL_LIB_VIRTEX::xil_gen_ShiftReg"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ShiftReg { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${Style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ShiftReg, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 248 \
    name kernel_window_30_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_30_V_write \
    op interface \
    ports { kernel_window_30_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 249 \
    name kernel_window_31_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_31_V_write \
    op interface \
    ports { kernel_window_31_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 250 \
    name kernel_window_32_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_32_V_write \
    op interface \
    ports { kernel_window_32_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 251 \
    name kernel_window_33_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_33_V_write \
    op interface \
    ports { kernel_window_33_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 252 \
    name kernel_window_34_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_34_V_write \
    op interface \
    ports { kernel_window_34_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 253 \
    name kernel_window_35_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_35_V_write \
    op interface \
    ports { kernel_window_35_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 254 \
    name kernel_window_36_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_36_V_write \
    op interface \
    ports { kernel_window_36_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 255 \
    name kernel_window_37_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_37_V_write \
    op interface \
    ports { kernel_window_37_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 256 \
    name kernel_window_38_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_38_V_write \
    op interface \
    ports { kernel_window_38_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 257 \
    name kernel_window_39_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_39_V_write \
    op interface \
    ports { kernel_window_39_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 258 \
    name kernel_window_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_10_V_read \
    op interface \
    ports { kernel_window_10_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 259 \
    name kernel_window_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_11_V_read \
    op interface \
    ports { kernel_window_11_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 260 \
    name kernel_window_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_12_V_read \
    op interface \
    ports { kernel_window_12_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 261 \
    name kernel_window_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_13_V_read \
    op interface \
    ports { kernel_window_13_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 262 \
    name kernel_window_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_14_V_read \
    op interface \
    ports { kernel_window_14_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 263 \
    name kernel_window_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_15_V_read \
    op interface \
    ports { kernel_window_15_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 264 \
    name kernel_window_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_16_V_read \
    op interface \
    ports { kernel_window_16_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 265 \
    name kernel_window_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_17_V_read \
    op interface \
    ports { kernel_window_17_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 266 \
    name kernel_window_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_18_V_read \
    op interface \
    ports { kernel_window_18_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 267 \
    name kernel_window_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_19_V_read \
    op interface \
    ports { kernel_window_19_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 268 \
    name kernel_window_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_30_V_read \
    op interface \
    ports { kernel_window_30_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 269 \
    name kernel_window_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_31_V_read \
    op interface \
    ports { kernel_window_31_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 270 \
    name kernel_window_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_32_V_read \
    op interface \
    ports { kernel_window_32_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 271 \
    name kernel_window_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_33_V_read \
    op interface \
    ports { kernel_window_33_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 272 \
    name kernel_window_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_34_V_read \
    op interface \
    ports { kernel_window_34_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 273 \
    name kernel_window_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_35_V_read \
    op interface \
    ports { kernel_window_35_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 274 \
    name kernel_window_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_36_V_read \
    op interface \
    ports { kernel_window_36_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
    name kernel_window_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_37_V_read \
    op interface \
    ports { kernel_window_37_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 276 \
    name kernel_window_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_38_V_read \
    op interface \
    ports { kernel_window_38_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 277 \
    name kernel_window_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_39_V_read \
    op interface \
    ports { kernel_window_39_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_ce
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_ce] == "cg_default_interface_gen_ce"} {
eval "cg_default_interface_gen_ce { \
    id -5 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_ce \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


