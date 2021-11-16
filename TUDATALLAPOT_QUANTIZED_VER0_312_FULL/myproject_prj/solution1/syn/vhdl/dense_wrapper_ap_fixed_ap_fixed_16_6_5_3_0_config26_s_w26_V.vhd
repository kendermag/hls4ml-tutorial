-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_rom is 
    generic(
             DWIDTH     : integer := 45; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 16
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "001101011100100000000000000000000000000000000", 
    1 => "000000000000000000000000000001111101100110110", 
    2 => "001001000000011111111111101101111101011101000", 
    3 => "000011111000111111111000000111111100110000000", 
    4 => "000000000000000000000000000000000000000000000", 
    5 => "111011001110100000000000000000000010000111110", 
    6 => "101101000000100000000000000000000000000000000", 
    7 => "000010110011000000100000111000000000000000000", 
    8 => "000000000000000000000000000001111110010100100", 
    9 => "000000000000000000100001001100000000000000000", 
    10 => "000000000000011110111101111010000000000100000", 
    11 => "000000000000000000000000000000000011100001111", 
    12 => "000000000000000000000000000000000000000000000", 
    13 => "001001101110100000000000000001111101111111011", 
    14 => "110101011010111111011110011000000011010000011", 
    15 => "000000000000000000110100101010000000000000000" );

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

entity dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V is
    generic (
        DataWidth : INTEGER := 45;
        AddressRange : INTEGER := 16;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V is
    component dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_rom_U :  component dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config26_s_w26_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


