-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity softmax_latency_array_array_softmax_config28_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_V_data_0_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    data_V_data_0_V_empty_n : IN STD_LOGIC;
    data_V_data_0_V_read : OUT STD_LOGIC;
    data_V_data_1_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    data_V_data_1_V_empty_n : IN STD_LOGIC;
    data_V_data_1_V_read : OUT STD_LOGIC;
    data_V_data_2_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    data_V_data_2_V_empty_n : IN STD_LOGIC;
    data_V_data_2_V_read : OUT STD_LOGIC;
    res_V_data_0_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_V_data_0_V_full_n : IN STD_LOGIC;
    res_V_data_0_V_write : OUT STD_LOGIC;
    res_V_data_1_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_V_data_1_V_full_n : IN STD_LOGIC;
    res_V_data_1_V_write : OUT STD_LOGIC;
    res_V_data_2_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_V_data_2_V_full_n : IN STD_LOGIC;
    res_V_data_2_V_write : OUT STD_LOGIC;
    data_V_data_0_V_blk_n : OUT STD_LOGIC;
    data_V_data_1_V_blk_n : OUT STD_LOGIC;
    data_V_data_2_V_blk_n : OUT STD_LOGIC;
    res_V_data_0_V_blk_n : OUT STD_LOGIC;
    res_V_data_1_V_blk_n : OUT STD_LOGIC;
    res_V_data_2_V_blk_n : OUT STD_LOGIC );
end;


architecture behav of softmax_latency_array_array_softmax_config28_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv10_1FF : STD_LOGIC_VECTOR (9 downto 0) := "0111111111";
    constant ap_const_lv10_200 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter4 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter5 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter6 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter7 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter8 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter9 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal io_acc_block_signal_op11 : STD_LOGIC;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter4 : BOOLEAN;
    signal ap_block_state6_pp0_stage0_iter5 : BOOLEAN;
    signal ap_block_state7_pp0_stage0_iter6 : BOOLEAN;
    signal ap_block_state8_pp0_stage0_iter7 : BOOLEAN;
    signal ap_block_state9_pp0_stage0_iter8 : BOOLEAN;
    signal io_acc_block_signal_op85 : STD_LOGIC;
    signal ap_block_state10_pp0_stage0_iter9 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal exp_table4_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_table4_ce0 : STD_LOGIC;
    signal exp_table4_q0 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_table4_address1 : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_table4_ce1 : STD_LOGIC;
    signal exp_table4_q1 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_table4_address2 : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_table4_ce2 : STD_LOGIC;
    signal exp_table4_q2 : STD_LOGIC_VECTOR (16 downto 0);
    signal invert_table5_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal invert_table5_ce0 : STD_LOGIC;
    signal invert_table5_q0 : STD_LOGIC_VECTOR (17 downto 0);
    signal y_V_reg_428 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_1_reg_433 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_2_reg_438 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_2_reg_438_pp0_iter1_reg : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_res_0_V_reg_453 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_0_V_reg_453_pp0_iter3_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_0_V_reg_453_pp0_iter4_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_0_V_reg_453_pp0_iter5_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_0_V_reg_453_pp0_iter6_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_1_V_reg_459 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_1_V_reg_459_pp0_iter3_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_1_V_reg_459_pp0_iter4_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_1_V_reg_459_pp0_iter5_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_1_V_reg_459_pp0_iter6_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_2_V_reg_470 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_2_V_reg_470_pp0_iter4_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_2_V_reg_470_pp0_iter5_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_2_V_reg_470_pp0_iter6_reg : STD_LOGIC_VECTOR (16 downto 0);
    signal ret_V_fu_270_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal ret_V_reg_477 : STD_LOGIC_VECTOR (17 downto 0);
    signal y_V_3_fu_368_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_3_reg_483 : STD_LOGIC_VECTOR (9 downto 0);
    signal inv_exp_sum_V_reg_493 : STD_LOGIC_VECTOR (17 downto 0);
    signal sext_ln167_fu_380_p1 : STD_LOGIC_VECTOR (25 downto 0);
    signal tmp_data_0_V_reg_520 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_data_1_V_reg_525 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_data_2_V_reg_530 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal zext_ln157_fu_252_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln157_1_fu_256_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln157_2_fu_260_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln166_fu_376_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage0_01001 : BOOLEAN;
    signal grp_fu_161_p0 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_fu_161_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal grp_fu_162_p0 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_fu_162_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal grp_fu_163_p0 : STD_LOGIC_VECTOR (17 downto 0);
    signal grp_fu_163_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal zext_ln45_1_fu_264_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln45_2_fu_267_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal lhs_V_fu_279_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal rhs_V_fu_282_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal ret_V_1_fu_285_p2 : STD_LOGIC_VECTOR (18 downto 0);
    signal zext_ln45_fu_276_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_11_fu_299_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Result_7_fu_304_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Result_s_fu_291_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_fu_312_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_1_fu_330_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_fu_324_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_342_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal underflow_fu_318_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_fu_336_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_fu_352_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal select_ln388_fu_360_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_fu_162_p2 : STD_LOGIC_VECTOR (25 downto 0);
    signal grp_fu_161_p2 : STD_LOGIC_VECTOR (25 downto 0);
    signal grp_fu_163_p2 : STD_LOGIC_VECTOR (25 downto 0);
    signal grp_fu_161_ce : STD_LOGIC;
    signal grp_fu_162_ce : STD_LOGIC;
    signal grp_fu_163_ce : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_idle_pp0_0to8 : STD_LOGIC;
    signal ap_reset_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;
    signal grp_fu_161_p10 : STD_LOGIC_VECTOR (25 downto 0);
    signal grp_fu_162_p10 : STD_LOGIC_VECTOR (25 downto 0);
    signal grp_fu_163_p10 : STD_LOGIC_VECTOR (25 downto 0);

    component myproject_axi_mul_18s_17ns_26_2_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (17 downto 0);
        din1 : IN STD_LOGIC_VECTOR (16 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (25 downto 0) );
    end component;


    component softmax_latency_array_array_softmax_config28_s_exp_table4 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (16 downto 0);
        address1 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR (16 downto 0);
        address2 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR (16 downto 0) );
    end component;


    component softmax_latency_array_array_softmax_config28_s_invert_tabb1s IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (17 downto 0) );
    end component;



begin
    exp_table4_U : component softmax_latency_array_array_softmax_config28_s_exp_table4
    generic map (
        DataWidth => 17,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => exp_table4_address0,
        ce0 => exp_table4_ce0,
        q0 => exp_table4_q0,
        address1 => exp_table4_address1,
        ce1 => exp_table4_ce1,
        q1 => exp_table4_q1,
        address2 => exp_table4_address2,
        ce2 => exp_table4_ce2,
        q2 => exp_table4_q2);

    invert_table5_U : component softmax_latency_array_array_softmax_config28_s_invert_tabb1s
    generic map (
        DataWidth => 18,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => invert_table5_address0,
        ce0 => invert_table5_ce0,
        q0 => invert_table5_q0);

    myproject_axi_mul_18s_17ns_26_2_1_U2307 : component myproject_axi_mul_18s_17ns_26_2_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 18,
        din1_WIDTH => 17,
        dout_WIDTH => 26)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_161_p0,
        din1 => grp_fu_161_p1,
        ce => grp_fu_161_ce,
        dout => grp_fu_161_p2);

    myproject_axi_mul_18s_17ns_26_2_1_U2308 : component myproject_axi_mul_18s_17ns_26_2_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 18,
        din1_WIDTH => 17,
        dout_WIDTH => 26)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_162_p0,
        din1 => grp_fu_162_p1,
        ce => grp_fu_162_ce,
        dout => grp_fu_162_p2);

    myproject_axi_mul_18s_17ns_26_2_1_U2309 : component myproject_axi_mul_18s_17ns_26_2_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 18,
        din1_WIDTH => 17,
        dout_WIDTH => 26)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_163_p0,
        din1 => grp_fu_163_p1,
        ce => grp_fu_163_ce,
        dout => grp_fu_163_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter5_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter5 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter6_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter6 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter7_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter7 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter8_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter8 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter9_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter9 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                exp_res_0_V_reg_453 <= exp_table4_q0;
                exp_res_1_V_reg_459 <= exp_table4_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                exp_res_0_V_reg_453_pp0_iter3_reg <= exp_res_0_V_reg_453;
                exp_res_0_V_reg_453_pp0_iter4_reg <= exp_res_0_V_reg_453_pp0_iter3_reg;
                exp_res_0_V_reg_453_pp0_iter5_reg <= exp_res_0_V_reg_453_pp0_iter4_reg;
                exp_res_0_V_reg_453_pp0_iter6_reg <= exp_res_0_V_reg_453_pp0_iter5_reg;
                exp_res_1_V_reg_459_pp0_iter3_reg <= exp_res_1_V_reg_459;
                exp_res_1_V_reg_459_pp0_iter4_reg <= exp_res_1_V_reg_459_pp0_iter3_reg;
                exp_res_1_V_reg_459_pp0_iter5_reg <= exp_res_1_V_reg_459_pp0_iter4_reg;
                exp_res_1_V_reg_459_pp0_iter6_reg <= exp_res_1_V_reg_459_pp0_iter5_reg;
                exp_res_2_V_reg_470_pp0_iter4_reg <= exp_res_2_V_reg_470;
                exp_res_2_V_reg_470_pp0_iter5_reg <= exp_res_2_V_reg_470_pp0_iter4_reg;
                exp_res_2_V_reg_470_pp0_iter6_reg <= exp_res_2_V_reg_470_pp0_iter5_reg;
                inv_exp_sum_V_reg_493 <= invert_table5_q0;
                ret_V_reg_477 <= ret_V_fu_270_p2;
                tmp_data_0_V_reg_520 <= grp_fu_162_p2(25 downto 10);
                tmp_data_1_V_reg_525 <= grp_fu_161_p2(25 downto 10);
                tmp_data_2_V_reg_530 <= grp_fu_163_p2(25 downto 10);
                y_V_3_reg_483 <= y_V_3_fu_368_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                exp_res_2_V_reg_470 <= exp_table4_q2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                y_V_1_reg_433 <= data_V_data_1_V_dout(15 downto 6);
                y_V_2_reg_438 <= data_V_data_2_V_dout(15 downto 6);
                y_V_2_reg_438_pp0_iter1_reg <= y_V_2_reg_438;
                y_V_reg_428 <= data_V_data_0_V_dout(15 downto 6);
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm, ap_block_pp0_stage0_subdone, ap_reset_idle_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_01001_assign_proc : process(ap_start, ap_enable_reg_pp0_iter9, io_acc_block_signal_op11, io_acc_block_signal_op85)
    begin
                ap_block_pp0_stage0_01001 <= (((ap_start = ap_const_logic_1) and ((io_acc_block_signal_op11 = ap_const_logic_0) or (ap_start = ap_const_logic_0))) or ((io_acc_block_signal_op85 = ap_const_logic_0) and (ap_enable_reg_pp0_iter9 = ap_const_logic_1)));
    end process;


    ap_block_pp0_stage0_11001_assign_proc : process(ap_start, ap_enable_reg_pp0_iter9, io_acc_block_signal_op11, io_acc_block_signal_op85)
    begin
                ap_block_pp0_stage0_11001 <= (((ap_start = ap_const_logic_1) and ((io_acc_block_signal_op11 = ap_const_logic_0) or (ap_start = ap_const_logic_0))) or ((io_acc_block_signal_op85 = ap_const_logic_0) and (ap_enable_reg_pp0_iter9 = ap_const_logic_1)));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_start, ap_enable_reg_pp0_iter9, io_acc_block_signal_op11, io_acc_block_signal_op85)
    begin
                ap_block_pp0_stage0_subdone <= (((ap_start = ap_const_logic_1) and ((io_acc_block_signal_op11 = ap_const_logic_0) or (ap_start = ap_const_logic_0))) or ((io_acc_block_signal_op85 = ap_const_logic_0) and (ap_enable_reg_pp0_iter9 = ap_const_logic_1)));
    end process;


    ap_block_state10_pp0_stage0_iter9_assign_proc : process(io_acc_block_signal_op85)
    begin
                ap_block_state10_pp0_stage0_iter9 <= (io_acc_block_signal_op85 = ap_const_logic_0);
    end process;


    ap_block_state1_pp0_stage0_iter0_assign_proc : process(ap_start, io_acc_block_signal_op11)
    begin
                ap_block_state1_pp0_stage0_iter0 <= ((io_acc_block_signal_op11 = ap_const_logic_0) or (ap_start = ap_const_logic_0));
    end process;

        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage0_iter5 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state7_pp0_stage0_iter6 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state8_pp0_stage0_iter7 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state9_pp0_stage0_iter8 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, ap_enable_reg_pp0_iter9, ap_block_pp0_stage0_11001)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_enable_reg_pp0_iter9 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);
    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_idle_pp0)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter5, ap_enable_reg_pp0_iter6, ap_enable_reg_pp0_iter7, ap_enable_reg_pp0_iter8, ap_enable_reg_pp0_iter9)
    begin
        if (((ap_enable_reg_pp0_iter9 = ap_const_logic_0) and (ap_enable_reg_pp0_iter8 = ap_const_logic_0) and (ap_enable_reg_pp0_iter7 = ap_const_logic_0) and (ap_enable_reg_pp0_iter6 = ap_const_logic_0) and (ap_enable_reg_pp0_iter5 = ap_const_logic_0) and (ap_enable_reg_pp0_iter4 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_0to8_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter5, ap_enable_reg_pp0_iter6, ap_enable_reg_pp0_iter7, ap_enable_reg_pp0_iter8)
    begin
        if (((ap_enable_reg_pp0_iter8 = ap_const_logic_0) and (ap_enable_reg_pp0_iter7 = ap_const_logic_0) and (ap_enable_reg_pp0_iter6 = ap_const_logic_0) and (ap_enable_reg_pp0_iter5 = ap_const_logic_0) and (ap_enable_reg_pp0_iter4 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0_0to8 <= ap_const_logic_1;
        else 
            ap_idle_pp0_0to8 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_idle_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to8)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0_0to8 = ap_const_logic_1))) then 
            ap_reset_idle_pp0 <= ap_const_logic_1;
        else 
            ap_reset_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    data_V_data_0_V_blk_n_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, data_V_data_0_V_empty_n)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            data_V_data_0_V_blk_n <= data_V_data_0_V_empty_n;
        else 
            data_V_data_0_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    data_V_data_0_V_read_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            data_V_data_0_V_read <= ap_const_logic_1;
        else 
            data_V_data_0_V_read <= ap_const_logic_0;
        end if; 
    end process;


    data_V_data_1_V_blk_n_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, data_V_data_1_V_empty_n)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            data_V_data_1_V_blk_n <= data_V_data_1_V_empty_n;
        else 
            data_V_data_1_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    data_V_data_1_V_read_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            data_V_data_1_V_read <= ap_const_logic_1;
        else 
            data_V_data_1_V_read <= ap_const_logic_0;
        end if; 
    end process;


    data_V_data_2_V_blk_n_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, data_V_data_2_V_empty_n)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            data_V_data_2_V_blk_n <= data_V_data_2_V_empty_n;
        else 
            data_V_data_2_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    data_V_data_2_V_read_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            data_V_data_2_V_read <= ap_const_logic_1;
        else 
            data_V_data_2_V_read <= ap_const_logic_0;
        end if; 
    end process;

    exp_table4_address0 <= zext_ln157_fu_252_p1(10 - 1 downto 0);
    exp_table4_address1 <= zext_ln157_1_fu_256_p1(10 - 1 downto 0);
    exp_table4_address2 <= zext_ln157_2_fu_260_p1(10 - 1 downto 0);

    exp_table4_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            exp_table4_ce0 <= ap_const_logic_1;
        else 
            exp_table4_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    exp_table4_ce1_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            exp_table4_ce1 <= ap_const_logic_1;
        else 
            exp_table4_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    exp_table4_ce2_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            exp_table4_ce2 <= ap_const_logic_1;
        else 
            exp_table4_ce2 <= ap_const_logic_0;
        end if; 
    end process;


    grp_fu_161_ce_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            grp_fu_161_ce <= ap_const_logic_1;
        else 
            grp_fu_161_ce <= ap_const_logic_0;
        end if; 
    end process;

    grp_fu_161_p0 <= sext_ln167_fu_380_p1(18 - 1 downto 0);
    grp_fu_161_p1 <= grp_fu_161_p10(17 - 1 downto 0);
    grp_fu_161_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_1_V_reg_459_pp0_iter6_reg),26));

    grp_fu_162_ce_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            grp_fu_162_ce <= ap_const_logic_1;
        else 
            grp_fu_162_ce <= ap_const_logic_0;
        end if; 
    end process;

    grp_fu_162_p0 <= sext_ln167_fu_380_p1(18 - 1 downto 0);
    grp_fu_162_p1 <= grp_fu_162_p10(17 - 1 downto 0);
    grp_fu_162_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_0_V_reg_453_pp0_iter6_reg),26));

    grp_fu_163_ce_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            grp_fu_163_ce <= ap_const_logic_1;
        else 
            grp_fu_163_ce <= ap_const_logic_0;
        end if; 
    end process;

    grp_fu_163_p0 <= sext_ln167_fu_380_p1(18 - 1 downto 0);
    grp_fu_163_p1 <= grp_fu_163_p10(17 - 1 downto 0);
    grp_fu_163_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_2_V_reg_470_pp0_iter6_reg),26));
    invert_table5_address0 <= zext_ln166_fu_376_p1(10 - 1 downto 0);

    invert_table5_ce0_assign_proc : process(ap_enable_reg_pp0_iter5, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter5 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            invert_table5_ce0 <= ap_const_logic_1;
        else 
            invert_table5_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    io_acc_block_signal_op11 <= (data_V_data_2_V_empty_n and data_V_data_1_V_empty_n and data_V_data_0_V_empty_n);
    io_acc_block_signal_op85 <= (res_V_data_2_V_full_n and res_V_data_1_V_full_n and res_V_data_0_V_full_n);
        lhs_V_fu_279_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(ret_V_reg_477),19));

    or_ln340_fu_336_p2 <= (xor_ln340_1_fu_330_p2 or p_Result_7_fu_304_p3);
    p_Result_7_fu_304_p3 <= p_Val2_11_fu_299_p2(17 downto 17);
    p_Result_s_fu_291_p3 <= ret_V_1_fu_285_p2(18 downto 18);
    p_Val2_11_fu_299_p2 <= std_logic_vector(signed(ret_V_reg_477) + signed(zext_ln45_fu_276_p1));

    res_V_data_0_V_blk_n_assign_proc : process(ap_block_pp0_stage0, ap_enable_reg_pp0_iter9, res_V_data_0_V_full_n)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter9 = ap_const_logic_1))) then 
            res_V_data_0_V_blk_n <= res_V_data_0_V_full_n;
        else 
            res_V_data_0_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_V_data_0_V_din <= tmp_data_0_V_reg_520;

    res_V_data_0_V_write_assign_proc : process(ap_enable_reg_pp0_iter9, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter9 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            res_V_data_0_V_write <= ap_const_logic_1;
        else 
            res_V_data_0_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_V_data_1_V_blk_n_assign_proc : process(ap_block_pp0_stage0, ap_enable_reg_pp0_iter9, res_V_data_1_V_full_n)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter9 = ap_const_logic_1))) then 
            res_V_data_1_V_blk_n <= res_V_data_1_V_full_n;
        else 
            res_V_data_1_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_V_data_1_V_din <= tmp_data_1_V_reg_525;

    res_V_data_1_V_write_assign_proc : process(ap_enable_reg_pp0_iter9, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter9 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            res_V_data_1_V_write <= ap_const_logic_1;
        else 
            res_V_data_1_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_V_data_2_V_blk_n_assign_proc : process(ap_block_pp0_stage0, ap_enable_reg_pp0_iter9, res_V_data_2_V_full_n)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter9 = ap_const_logic_1))) then 
            res_V_data_2_V_blk_n <= res_V_data_2_V_full_n;
        else 
            res_V_data_2_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_V_data_2_V_din <= tmp_data_2_V_reg_530;

    res_V_data_2_V_write_assign_proc : process(ap_enable_reg_pp0_iter9, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter9 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            res_V_data_2_V_write <= ap_const_logic_1;
        else 
            res_V_data_2_V_write <= ap_const_logic_0;
        end if; 
    end process;

    ret_V_1_fu_285_p2 <= std_logic_vector(signed(lhs_V_fu_279_p1) + signed(rhs_V_fu_282_p1));
    ret_V_fu_270_p2 <= std_logic_vector(unsigned(zext_ln45_1_fu_264_p1) + unsigned(zext_ln45_2_fu_267_p1));
    rhs_V_fu_282_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_2_V_reg_470),19));
    select_ln340_fu_352_p3 <= 
        ap_const_lv10_1FF when (xor_ln340_fu_324_p2(0) = '1') else 
        tmp_fu_342_p4;
    select_ln388_fu_360_p3 <= 
        ap_const_lv10_200 when (underflow_fu_318_p2(0) = '1') else 
        tmp_fu_342_p4;
        sext_ln167_fu_380_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(inv_exp_sum_V_reg_493),26));

    tmp_fu_342_p4 <= p_Val2_11_fu_299_p2(17 downto 8);
    underflow_fu_318_p2 <= (xor_ln786_fu_312_p2 and p_Result_s_fu_291_p3);
    xor_ln340_1_fu_330_p2 <= (p_Result_s_fu_291_p3 xor ap_const_lv1_1);
    xor_ln340_fu_324_p2 <= (p_Result_s_fu_291_p3 xor p_Result_7_fu_304_p3);
    xor_ln786_fu_312_p2 <= (p_Result_7_fu_304_p3 xor ap_const_lv1_1);
    y_V_3_fu_368_p3 <= 
        select_ln340_fu_352_p3 when (or_ln340_fu_336_p2(0) = '1') else 
        select_ln388_fu_360_p3;
    zext_ln157_1_fu_256_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_1_reg_433),64));
    zext_ln157_2_fu_260_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_2_reg_438_pp0_iter1_reg),64));
    zext_ln157_fu_252_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_reg_428),64));
    zext_ln166_fu_376_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_3_reg_483),64));
    zext_ln45_1_fu_264_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_1_V_reg_459),18));
    zext_ln45_2_fu_267_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_0_V_reg_453),18));
    zext_ln45_fu_276_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_2_V_reg_470),18));
end behav;
