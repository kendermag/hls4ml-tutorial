-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity shift_line_buffer_array_ap_fixed_1u_config2_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    kernel_window_8_V_write : IN STD_LOGIC_VECTOR (15 downto 0);
    kernel_window_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    kernel_window_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    kernel_window_4_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    kernel_window_5_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    kernel_window_7_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    kernel_window_8_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_5 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_6 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_7 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_8 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of shift_line_buffer_array_ap_fixed_1u_config2_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv5_11 : STD_LOGIC_VECTOR (4 downto 0) := "10001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal line_buffer_Array_V_1_0_0_ce0 : STD_LOGIC;
    signal line_buffer_Array_V_1_0_0_we0 : STD_LOGIC;
    signal line_buffer_Array_V_1_0_0_q0 : STD_LOGIC_VECTOR (15 downto 0);
    signal line_buffer_Array_V_1_1_0_ce0 : STD_LOGIC;
    signal line_buffer_Array_V_1_1_0_we0 : STD_LOGIC;
    signal line_buffer_Array_V_1_1_0_q0 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);

    component shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (15 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    line_buffer_Array_V_1_0_0_U : component shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb
    generic map (
        DataWidth => 16,
        AddressRange => 18,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv5_11,
        ce0 => line_buffer_Array_V_1_0_0_ce0,
        we0 => line_buffer_Array_V_1_0_0_we0,
        d0 => kernel_window_8_V_write,
        q0 => line_buffer_Array_V_1_0_0_q0);

    line_buffer_Array_V_1_1_0_U : component shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb
    generic map (
        DataWidth => 16,
        AddressRange => 18,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv5_11,
        ce0 => line_buffer_Array_V_1_1_0_ce0,
        we0 => line_buffer_Array_V_1_1_0_we0,
        d0 => line_buffer_Array_V_1_0_0_q0,
        q0 => line_buffer_Array_V_1_1_0_q0);





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


    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
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


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return_0 <= kernel_window_1_V_read;
    ap_return_1 <= kernel_window_4_V_read;
    ap_return_2 <= kernel_window_7_V_read;
    ap_return_3 <= kernel_window_2_V_read;
    ap_return_4 <= line_buffer_Array_V_1_1_0_q0;
    ap_return_5 <= kernel_window_5_V_read;
    ap_return_6 <= line_buffer_Array_V_1_0_0_q0;
    ap_return_7 <= kernel_window_8_V_read;
    ap_return_8 <= kernel_window_8_V_write;

    line_buffer_Array_V_1_0_0_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            line_buffer_Array_V_1_0_0_ce0 <= ap_const_logic_1;
        else 
            line_buffer_Array_V_1_0_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    line_buffer_Array_V_1_0_0_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            line_buffer_Array_V_1_0_0_we0 <= ap_const_logic_1;
        else 
            line_buffer_Array_V_1_0_0_we0 <= ap_const_logic_0;
        end if; 
    end process;


    line_buffer_Array_V_1_1_0_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            line_buffer_Array_V_1_1_0_ce0 <= ap_const_logic_1;
        else 
            line_buffer_Array_V_1_1_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    line_buffer_Array_V_1_1_0_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            line_buffer_Array_V_1_1_0_we0 <= ap_const_logic_1;
        else 
            line_buffer_Array_V_1_1_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;
