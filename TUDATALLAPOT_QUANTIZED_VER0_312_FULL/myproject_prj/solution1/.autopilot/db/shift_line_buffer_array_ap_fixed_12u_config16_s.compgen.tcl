# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 628
set hasByteEnable 0
set MemName shift_line_buffer_array_ap_fixed_12u_config16_s_line_buffbpm
set CoreName ShiftReg
set PortList { 2 }
set DataWd 6
set AddrRange 4
set AddrWd 2
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
    id 629 \
    name kernel_window_180_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_180_V_write \
    op interface \
    ports { kernel_window_180_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 630 \
    name kernel_window_181_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_181_V_write \
    op interface \
    ports { kernel_window_181_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 631 \
    name kernel_window_182_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_182_V_write \
    op interface \
    ports { kernel_window_182_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 632 \
    name kernel_window_183_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_183_V_write \
    op interface \
    ports { kernel_window_183_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 633 \
    name kernel_window_184_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_184_V_write \
    op interface \
    ports { kernel_window_184_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 634 \
    name kernel_window_185_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_185_V_write \
    op interface \
    ports { kernel_window_185_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 635 \
    name kernel_window_186_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_186_V_write \
    op interface \
    ports { kernel_window_186_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 636 \
    name kernel_window_187_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_187_V_write \
    op interface \
    ports { kernel_window_187_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 637 \
    name kernel_window_188_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_188_V_write \
    op interface \
    ports { kernel_window_188_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 638 \
    name kernel_window_189_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_189_V_write \
    op interface \
    ports { kernel_window_189_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 639 \
    name kernel_window_190_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_190_V_write \
    op interface \
    ports { kernel_window_190_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 640 \
    name kernel_window_191_V_write \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_191_V_write \
    op interface \
    ports { kernel_window_191_V_write { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 641 \
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
    id 642 \
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
    id 643 \
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
    id 644 \
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
    id 645 \
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
    id 646 \
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
    id 647 \
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
    id 648 \
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
    id 649 \
    name kernel_window_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_20_V_read \
    op interface \
    ports { kernel_window_20_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 650 \
    name kernel_window_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_21_V_read \
    op interface \
    ports { kernel_window_21_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 651 \
    name kernel_window_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_22_V_read \
    op interface \
    ports { kernel_window_22_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 652 \
    name kernel_window_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_23_V_read \
    op interface \
    ports { kernel_window_23_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 653 \
    name kernel_window_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_24_V_read \
    op interface \
    ports { kernel_window_24_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 654 \
    name kernel_window_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_25_V_read \
    op interface \
    ports { kernel_window_25_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 655 \
    name kernel_window_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_26_V_read \
    op interface \
    ports { kernel_window_26_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 656 \
    name kernel_window_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_27_V_read \
    op interface \
    ports { kernel_window_27_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 657 \
    name kernel_window_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_28_V_read \
    op interface \
    ports { kernel_window_28_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 658 \
    name kernel_window_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_29_V_read \
    op interface \
    ports { kernel_window_29_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 659 \
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
    id 660 \
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
    id 661 \
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
    id 662 \
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
    id 663 \
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
    id 664 \
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
    id 665 \
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
    id 666 \
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
    id 667 \
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
    id 668 \
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
    id 669 \
    name kernel_window_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_40_V_read \
    op interface \
    ports { kernel_window_40_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 670 \
    name kernel_window_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_41_V_read \
    op interface \
    ports { kernel_window_41_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 671 \
    name kernel_window_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_42_V_read \
    op interface \
    ports { kernel_window_42_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 672 \
    name kernel_window_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_43_V_read \
    op interface \
    ports { kernel_window_43_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 673 \
    name kernel_window_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_44_V_read \
    op interface \
    ports { kernel_window_44_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 674 \
    name kernel_window_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_45_V_read \
    op interface \
    ports { kernel_window_45_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 675 \
    name kernel_window_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_46_V_read \
    op interface \
    ports { kernel_window_46_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 676 \
    name kernel_window_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_47_V_read \
    op interface \
    ports { kernel_window_47_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 677 \
    name kernel_window_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_60_V_read \
    op interface \
    ports { kernel_window_60_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 678 \
    name kernel_window_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_61_V_read \
    op interface \
    ports { kernel_window_61_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 679 \
    name kernel_window_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_62_V_read \
    op interface \
    ports { kernel_window_62_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 680 \
    name kernel_window_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_63_V_read \
    op interface \
    ports { kernel_window_63_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name kernel_window_64_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_64_V_read \
    op interface \
    ports { kernel_window_64_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name kernel_window_65_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_65_V_read \
    op interface \
    ports { kernel_window_65_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name kernel_window_66_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_66_V_read \
    op interface \
    ports { kernel_window_66_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name kernel_window_67_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_67_V_read \
    op interface \
    ports { kernel_window_67_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name kernel_window_68_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_68_V_read \
    op interface \
    ports { kernel_window_68_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name kernel_window_69_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_69_V_read \
    op interface \
    ports { kernel_window_69_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name kernel_window_70_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_70_V_read \
    op interface \
    ports { kernel_window_70_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name kernel_window_71_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_71_V_read \
    op interface \
    ports { kernel_window_71_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name kernel_window_72_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_72_V_read \
    op interface \
    ports { kernel_window_72_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 690 \
    name kernel_window_73_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_73_V_read \
    op interface \
    ports { kernel_window_73_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 691 \
    name kernel_window_74_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_74_V_read \
    op interface \
    ports { kernel_window_74_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 692 \
    name kernel_window_75_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_75_V_read \
    op interface \
    ports { kernel_window_75_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 693 \
    name kernel_window_76_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_76_V_read \
    op interface \
    ports { kernel_window_76_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 694 \
    name kernel_window_77_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_77_V_read \
    op interface \
    ports { kernel_window_77_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 695 \
    name kernel_window_78_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_78_V_read \
    op interface \
    ports { kernel_window_78_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 696 \
    name kernel_window_79_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_79_V_read \
    op interface \
    ports { kernel_window_79_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 697 \
    name kernel_window_80_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_80_V_read \
    op interface \
    ports { kernel_window_80_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 698 \
    name kernel_window_81_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_81_V_read \
    op interface \
    ports { kernel_window_81_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 699 \
    name kernel_window_82_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_82_V_read \
    op interface \
    ports { kernel_window_82_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 700 \
    name kernel_window_83_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_83_V_read \
    op interface \
    ports { kernel_window_83_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 701 \
    name kernel_window_84_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_84_V_read \
    op interface \
    ports { kernel_window_84_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 702 \
    name kernel_window_85_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_85_V_read \
    op interface \
    ports { kernel_window_85_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 703 \
    name kernel_window_86_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_86_V_read \
    op interface \
    ports { kernel_window_86_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 704 \
    name kernel_window_87_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_87_V_read \
    op interface \
    ports { kernel_window_87_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 705 \
    name kernel_window_88_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_88_V_read \
    op interface \
    ports { kernel_window_88_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 706 \
    name kernel_window_89_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_89_V_read \
    op interface \
    ports { kernel_window_89_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 707 \
    name kernel_window_90_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_90_V_read \
    op interface \
    ports { kernel_window_90_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 708 \
    name kernel_window_91_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_91_V_read \
    op interface \
    ports { kernel_window_91_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 709 \
    name kernel_window_92_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_92_V_read \
    op interface \
    ports { kernel_window_92_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 710 \
    name kernel_window_93_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_93_V_read \
    op interface \
    ports { kernel_window_93_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 711 \
    name kernel_window_94_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_94_V_read \
    op interface \
    ports { kernel_window_94_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 712 \
    name kernel_window_95_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_95_V_read \
    op interface \
    ports { kernel_window_95_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 713 \
    name kernel_window_108_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_108_V_read \
    op interface \
    ports { kernel_window_108_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 714 \
    name kernel_window_109_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_109_V_read \
    op interface \
    ports { kernel_window_109_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 715 \
    name kernel_window_110_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_110_V_read \
    op interface \
    ports { kernel_window_110_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 716 \
    name kernel_window_111_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_111_V_read \
    op interface \
    ports { kernel_window_111_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 717 \
    name kernel_window_112_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_112_V_read \
    op interface \
    ports { kernel_window_112_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 718 \
    name kernel_window_113_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_113_V_read \
    op interface \
    ports { kernel_window_113_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 719 \
    name kernel_window_114_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_114_V_read \
    op interface \
    ports { kernel_window_114_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 720 \
    name kernel_window_115_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_115_V_read \
    op interface \
    ports { kernel_window_115_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 721 \
    name kernel_window_116_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_116_V_read \
    op interface \
    ports { kernel_window_116_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 722 \
    name kernel_window_117_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_117_V_read \
    op interface \
    ports { kernel_window_117_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 723 \
    name kernel_window_118_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_118_V_read \
    op interface \
    ports { kernel_window_118_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 724 \
    name kernel_window_119_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_119_V_read \
    op interface \
    ports { kernel_window_119_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 725 \
    name kernel_window_120_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_120_V_read \
    op interface \
    ports { kernel_window_120_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 726 \
    name kernel_window_121_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_121_V_read \
    op interface \
    ports { kernel_window_121_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 727 \
    name kernel_window_122_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_122_V_read \
    op interface \
    ports { kernel_window_122_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 728 \
    name kernel_window_123_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_123_V_read \
    op interface \
    ports { kernel_window_123_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 729 \
    name kernel_window_124_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_124_V_read \
    op interface \
    ports { kernel_window_124_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 730 \
    name kernel_window_125_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_125_V_read \
    op interface \
    ports { kernel_window_125_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 731 \
    name kernel_window_126_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_126_V_read \
    op interface \
    ports { kernel_window_126_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 732 \
    name kernel_window_127_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_127_V_read \
    op interface \
    ports { kernel_window_127_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 733 \
    name kernel_window_128_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_128_V_read \
    op interface \
    ports { kernel_window_128_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 734 \
    name kernel_window_129_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_129_V_read \
    op interface \
    ports { kernel_window_129_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 735 \
    name kernel_window_130_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_130_V_read \
    op interface \
    ports { kernel_window_130_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 736 \
    name kernel_window_131_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_131_V_read \
    op interface \
    ports { kernel_window_131_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 737 \
    name kernel_window_132_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_132_V_read \
    op interface \
    ports { kernel_window_132_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 738 \
    name kernel_window_133_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_133_V_read \
    op interface \
    ports { kernel_window_133_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 739 \
    name kernel_window_134_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_134_V_read \
    op interface \
    ports { kernel_window_134_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 740 \
    name kernel_window_135_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_135_V_read \
    op interface \
    ports { kernel_window_135_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 741 \
    name kernel_window_136_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_136_V_read \
    op interface \
    ports { kernel_window_136_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 742 \
    name kernel_window_137_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_137_V_read \
    op interface \
    ports { kernel_window_137_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 743 \
    name kernel_window_138_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_138_V_read \
    op interface \
    ports { kernel_window_138_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 744 \
    name kernel_window_139_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_139_V_read \
    op interface \
    ports { kernel_window_139_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 745 \
    name kernel_window_140_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_140_V_read \
    op interface \
    ports { kernel_window_140_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 746 \
    name kernel_window_141_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_141_V_read \
    op interface \
    ports { kernel_window_141_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 747 \
    name kernel_window_142_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_142_V_read \
    op interface \
    ports { kernel_window_142_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 748 \
    name kernel_window_143_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_143_V_read \
    op interface \
    ports { kernel_window_143_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 749 \
    name kernel_window_156_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_156_V_read \
    op interface \
    ports { kernel_window_156_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 750 \
    name kernel_window_157_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_157_V_read \
    op interface \
    ports { kernel_window_157_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 751 \
    name kernel_window_158_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_158_V_read \
    op interface \
    ports { kernel_window_158_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 752 \
    name kernel_window_159_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_159_V_read \
    op interface \
    ports { kernel_window_159_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 753 \
    name kernel_window_160_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_160_V_read \
    op interface \
    ports { kernel_window_160_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 754 \
    name kernel_window_161_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_161_V_read \
    op interface \
    ports { kernel_window_161_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 755 \
    name kernel_window_162_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_162_V_read \
    op interface \
    ports { kernel_window_162_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 756 \
    name kernel_window_163_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_163_V_read \
    op interface \
    ports { kernel_window_163_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 757 \
    name kernel_window_164_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_164_V_read \
    op interface \
    ports { kernel_window_164_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 758 \
    name kernel_window_165_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_165_V_read \
    op interface \
    ports { kernel_window_165_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 759 \
    name kernel_window_166_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_166_V_read \
    op interface \
    ports { kernel_window_166_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 760 \
    name kernel_window_167_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_167_V_read \
    op interface \
    ports { kernel_window_167_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 761 \
    name kernel_window_168_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_168_V_read \
    op interface \
    ports { kernel_window_168_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 762 \
    name kernel_window_169_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_169_V_read \
    op interface \
    ports { kernel_window_169_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 763 \
    name kernel_window_170_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_170_V_read \
    op interface \
    ports { kernel_window_170_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 764 \
    name kernel_window_171_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_171_V_read \
    op interface \
    ports { kernel_window_171_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 765 \
    name kernel_window_172_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_172_V_read \
    op interface \
    ports { kernel_window_172_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 766 \
    name kernel_window_173_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_173_V_read \
    op interface \
    ports { kernel_window_173_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 767 \
    name kernel_window_174_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_174_V_read \
    op interface \
    ports { kernel_window_174_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 768 \
    name kernel_window_175_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_175_V_read \
    op interface \
    ports { kernel_window_175_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 769 \
    name kernel_window_176_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_176_V_read \
    op interface \
    ports { kernel_window_176_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 770 \
    name kernel_window_177_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_177_V_read \
    op interface \
    ports { kernel_window_177_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 771 \
    name kernel_window_178_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_178_V_read \
    op interface \
    ports { kernel_window_178_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 772 \
    name kernel_window_179_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_179_V_read \
    op interface \
    ports { kernel_window_179_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 773 \
    name kernel_window_180_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_180_V_read \
    op interface \
    ports { kernel_window_180_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 774 \
    name kernel_window_181_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_181_V_read \
    op interface \
    ports { kernel_window_181_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 775 \
    name kernel_window_182_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_182_V_read \
    op interface \
    ports { kernel_window_182_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 776 \
    name kernel_window_183_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_183_V_read \
    op interface \
    ports { kernel_window_183_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 777 \
    name kernel_window_184_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_184_V_read \
    op interface \
    ports { kernel_window_184_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 778 \
    name kernel_window_185_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_185_V_read \
    op interface \
    ports { kernel_window_185_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 779 \
    name kernel_window_186_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_186_V_read \
    op interface \
    ports { kernel_window_186_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 780 \
    name kernel_window_187_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_187_V_read \
    op interface \
    ports { kernel_window_187_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 781 \
    name kernel_window_188_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_188_V_read \
    op interface \
    ports { kernel_window_188_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 782 \
    name kernel_window_189_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_189_V_read \
    op interface \
    ports { kernel_window_189_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 783 \
    name kernel_window_190_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_190_V_read \
    op interface \
    ports { kernel_window_190_V_read { I 6 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 784 \
    name kernel_window_191_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_window_191_V_read \
    op interface \
    ports { kernel_window_191_V_read { I 6 vector } } \
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


