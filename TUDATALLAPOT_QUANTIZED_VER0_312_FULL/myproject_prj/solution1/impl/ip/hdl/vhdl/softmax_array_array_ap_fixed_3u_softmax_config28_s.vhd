-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity softmax_array_array_ap_fixed_3u_softmax_config28_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
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
    res_V_data_2_V_write : OUT STD_LOGIC );
end;


architecture behav of softmax_array_array_ap_fixed_3u_softmax_config28_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (9 downto 0) := "0000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (9 downto 0) := "0000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (9 downto 0) := "0000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (9 downto 0) := "0001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (9 downto 0) := "0010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (9 downto 0) := "0100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n : STD_LOGIC;
    signal data_V_data_0_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n : STD_LOGIC;
    signal data_V_data_1_V_blk_n : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n : STD_LOGIC;
    signal data_V_data_2_V_blk_n : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n : STD_LOGIC;
    signal res_V_data_0_V_blk_n : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n : STD_LOGIC;
    signal res_V_data_1_V_blk_n : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n : STD_LOGIC;
    signal res_V_data_2_V_blk_n : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_start : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_done : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_idle : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_ready : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_read : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_read : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_read : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_write : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_write : STD_LOGIC;
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_write : STD_LOGIC;
    signal ap_block_state1_ignore_call6 : BOOLEAN;
    signal ap_block_state10 : BOOLEAN;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_block_state1 : BOOLEAN;

    component softmax_latency_array_array_softmax_config28_s IS
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
    end component;



begin
    grp_softmax_latency_array_array_softmax_config28_s_fu_30 : component softmax_latency_array_array_softmax_config28_s
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_start,
        ap_done => grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_done,
        ap_idle => grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_idle,
        ap_ready => grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_ready,
        data_V_data_0_V_dout => data_V_data_0_V_dout,
        data_V_data_0_V_empty_n => data_V_data_0_V_empty_n,
        data_V_data_0_V_read => grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_read,
        data_V_data_1_V_dout => data_V_data_1_V_dout,
        data_V_data_1_V_empty_n => data_V_data_1_V_empty_n,
        data_V_data_1_V_read => grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_read,
        data_V_data_2_V_dout => data_V_data_2_V_dout,
        data_V_data_2_V_empty_n => data_V_data_2_V_empty_n,
        data_V_data_2_V_read => grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_read,
        res_V_data_0_V_din => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_din,
        res_V_data_0_V_full_n => res_V_data_0_V_full_n,
        res_V_data_0_V_write => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_write,
        res_V_data_1_V_din => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_din,
        res_V_data_1_V_full_n => res_V_data_1_V_full_n,
        res_V_data_1_V_write => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_write,
        res_V_data_2_V_din => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_din,
        res_V_data_2_V_full_n => res_V_data_2_V_full_n,
        res_V_data_2_V_write => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_write,
        data_V_data_0_V_blk_n => grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n,
        data_V_data_1_V_blk_n => grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n,
        data_V_data_2_V_blk_n => grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n,
        res_V_data_0_V_blk_n => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n,
        res_V_data_1_V_blk_n => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n,
        res_V_data_2_V_blk_n => grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((not(((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state10))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0) or (ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                if ((not(((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state10))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state10;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);

    ap_block_state1_assign_proc : process(ap_start, ap_done_reg, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n)
    begin
                ap_block_state1 <= ((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0) or (ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_block_state10_assign_proc : process(grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n)
    begin
                ap_block_state10 <= ((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0));
    end process;


    ap_block_state1_ignore_call6_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1_ignore_call6 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_done_assign_proc : process(ap_done_reg, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n)
    begin
        if ((not(((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state10))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n)
    begin
        if ((not(((grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n = ap_const_logic_0) or (grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state10))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    data_V_data_0_V_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            data_V_data_0_V_blk_n <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_blk_n;
        else 
            data_V_data_0_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    data_V_data_0_V_read_assign_proc : process(ap_CS_fsm_state1, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_read)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            data_V_data_0_V_read <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_0_V_read;
        else 
            data_V_data_0_V_read <= ap_const_logic_0;
        end if; 
    end process;


    data_V_data_1_V_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            data_V_data_1_V_blk_n <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_blk_n;
        else 
            data_V_data_1_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    data_V_data_1_V_read_assign_proc : process(ap_CS_fsm_state1, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_read)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            data_V_data_1_V_read <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_1_V_read;
        else 
            data_V_data_1_V_read <= ap_const_logic_0;
        end if; 
    end process;


    data_V_data_2_V_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            data_V_data_2_V_blk_n <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_blk_n;
        else 
            data_V_data_2_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    data_V_data_2_V_read_assign_proc : process(ap_CS_fsm_state1, grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_read)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            data_V_data_2_V_read <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_data_V_data_2_V_read;
        else 
            data_V_data_2_V_read <= ap_const_logic_0;
        end if; 
    end process;


    grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_start_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_start <= ap_const_logic_1;
        else 
            grp_softmax_latency_array_array_softmax_config28_s_fu_30_ap_start <= ap_const_logic_0;
        end if; 
    end process;


    res_V_data_0_V_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            res_V_data_0_V_blk_n <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_blk_n;
        else 
            res_V_data_0_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_V_data_0_V_din <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_din;

    res_V_data_0_V_write_assign_proc : process(ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_write)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            res_V_data_0_V_write <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_0_V_write;
        else 
            res_V_data_0_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_V_data_1_V_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            res_V_data_1_V_blk_n <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_blk_n;
        else 
            res_V_data_1_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_V_data_1_V_din <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_din;

    res_V_data_1_V_write_assign_proc : process(ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_write)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            res_V_data_1_V_write <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_1_V_write;
        else 
            res_V_data_1_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_V_data_2_V_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            res_V_data_2_V_blk_n <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_blk_n;
        else 
            res_V_data_2_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_V_data_2_V_din <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_din;

    res_V_data_2_V_write_assign_proc : process(ap_CS_fsm_state10, grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_write)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            res_V_data_2_V_write <= grp_softmax_latency_array_array_softmax_config28_s_fu_30_res_V_data_2_V_write;
        else 
            res_V_data_2_V_write <= ap_const_logic_0;
        end if; 
    end process;

end behav;
