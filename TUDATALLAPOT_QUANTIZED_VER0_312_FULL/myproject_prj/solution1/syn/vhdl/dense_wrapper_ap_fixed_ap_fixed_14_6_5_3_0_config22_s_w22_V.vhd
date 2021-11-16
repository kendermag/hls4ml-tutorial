-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_rom is 
    generic(
             DWIDTH     : integer := 24; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 20
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000000000000000000001", 1 => "000000001001000000011010", 
    2 => "110001110101110011101001", 3 => "001110000000001111010111", 
    4 => "000000011101000000000000", 5 => "000000000000110001000000", 
    6 => "000111000000100011000000", 7 => "000000000000110001000000", 
    8 => "010011111000010000111000", 9 => "000000000000000000011000", 
    10 => "101111111000111101001110", 11 => "000101010100100101000000", 
    12 => "000000101000000000110111", 13 => "000000000000000000000000", 
    14 => "100011110110111111000000", 15 => "001110000000000000010001", 
    16 => "100100000000101010000000", 17 => "000000101110000000000000", 
    18 => "000000110011001100000000", 19 => "000000000000000000000111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V is
    generic (
        DataWidth : INTEGER := 24;
        AddressRange : INTEGER := 20;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V is
    component dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_rom_U :  component dense_wrapper_ap_fixed_ap_fixed_14_6_5_3_0_config22_s_w22_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


