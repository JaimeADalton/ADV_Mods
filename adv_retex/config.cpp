﻿#define standard_macro scope=2;\
			author="Spezialeinheit Luchs";\
			scopeCurator = 2;

#define nato_macro side=1;\
			faction="BLU_F";
			
#define aaf_macro side=2;\
			faction="IND_F";

#define civ_macro side=3;\
			faction="CIV_F";
			
#define nato_t_macro side=1;\
			faction="BLU_T_F";
			
#define natoweapons class xx_arifle_MX_F { weapon = "arifle_MX_F"; count = 2; };

#define natomags class _xx_30Rnd_65x39_caseless_mag { magazine = "30Rnd_65x39_caseless_mag"; count = 16; };\
	class _xx_100Rnd_65x39_caseless_mag { magazine = "100Rnd_65x39_caseless_mag"; count = 6; };\
	class _xx_HandGrenade { magazine = "HandGrenade"; count = 10; };\
	class _xx_1Rnd_HE_Grenade_shell { magazine = "1Rnd_HE_Grenade_shell"; count = 10; };\
	class _xx_1Rnd_Smoke_Grenade_shell { magazine = "1Rnd_Smoke_Grenade_shell"; count = 4; };\
	class _xx_1Rnd_SmokeGreen_Grenade_shell { magazine = "1Rnd_SmokeGreen_Grenade_shell"; count = 4; };\
	class _xx_1Rnd_SmokeOrange_Grenade_shell { magazine = "1Rnd_SmokeOrange_Grenade_shell"; count = 4; };\
	class _xx_1Rnd_SmokeBlue_Grenade_shell { magazine = "1Rnd_SmokeBlue_Grenade_shell"; count = 4; };\
	class _xx_16Rnd_9x21_Mag { magazine = "16Rnd_9x21_Mag"; count = 12; };\
	class _xx_SmokeShell { magazine = "SmokeShell"; count = 4; };\
	class _xx_SmokeShellGreen { magazine = "SmokeShellGreen"; count = 4; };\
	class _xx_SmokeShellOrange { magazine = "SmokeShellOrange"; count = 4; };\
	class _xx_SmokeShellBlue { magazine = "SmokeShellBlue"; count = 4; };\
	class _xx_NLAW_F { magazine = "NLAW_F"; count = 2; };
	
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};
	
class CfgPatches
{
    class adv_retex
    {
        units[] = {
			"adv_retex_b_mrap_f"
			,"adv_retex_b_mrap_hmg_f"
			,"adv_retex_b_mrap_gmg_f"
			,"adv_retex_b_kuma_f"
			,"adv_retex_b_mora_f"
			,"adv_retex_b_marid_f"
			,"adv_retex_b_marid_san_f"
			,"adv_retex_b_gorgon_f"
			,"adv_retex_b_gorgon_san_f"
			,"adv_retex_b_strider_f"
			,"adv_retex_b_strider_hmg_f"
			,"adv_retex_b_strider_gmg_f"
			,"adv_retex_b_mohawk_01_f"
			,"adv_retex_b_mohawk_02_f"			
			,"adv_retex_b_mh9_black_f"
			,"adv_retex_b_ah9_black_f"
			,"adv_retex_i_mh9_f"
			,"adv_retex_i_mh9_black_f"
			,"adv_retex_i_ah9_f"
			,"adv_retex_i_ah9_black_f"
			,"adv_retex_i_orca_f"
			,"adv_retex_i_mohawk_01_f"
			,"adv_retex_i_mohawk_02_f"
			,"adv_retex_c_orca_f"
			,"adv_retex_c_mohawk_01_f"
			,"adv_retex_c_mohawk_02_f"
			,"adv_retex_b_lt_aa_f"
			,"adv_retex_b_lt_at_f"
			,"adv_retex_b_lt_cannon_f"
			,"adv_retex_b_lt_scout_f"
			,"adv_retex_b_t_lt_aa_f"
			,"adv_retex_b_t_lt_at_f"
			,"adv_retex_b_t_lt_cannon_f"
			,"adv_retex_b_t_lt_scout_f"
			,"adv_retex_hellcat_dynamicLoadout_f"
			,"adv_retex_hellcat_unarmed_f"
		};
        weapons[] = {
			"H_PASGT_neckprot_black_F"
			,"H_PASGT_neckprot_olive_F"
			,"H_PASGT_neckprot_blue_F"
			,"adv_retex_u_CombatUniform_wdl"
			,"adv_retex_u_CombatUniform_wdl_vest"
			,"adv_retex_u_CombatUniform_wdl_tshirt"
			,"adv_retex_u_CombatUniform_sgg"
			,"adv_retex_u_CombatUniform_sgg_vest"
			,"adv_retex_u_CombatUniform_sgg_tshirt"
			,"adv_retex_u_CombatUniform_i_wdl"
			,"adv_retex_u_CombatUniform_i_wdl_shortsleeve"
		};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Armor_F_APC_Wheeled_03"
			,"A3_Air_F_Heli_Light_01"
			,"A3_Air_F_Heli_Light_02"
			,"A3_Soft_F_MRAP_01"
			,"A3_Soft_F_MRAP_03"
			,"A3_Soft_F_Beta_MRAP_03"
			,"A3_Air_F_Beta_Heli_Transport_02"
			,"A3_Characters_F_BLUFOR"
			,"A3_Characters_F_INDEP"
			,"A3_Characters_F_Civil"
			,"A3_Characters_F"
			,"A3_Weapons_F_Uniforms"
			,"A3_Armor_F_Gamma_APC_Wheeled_03"
			,"A3_Armor_F_Beta_APC_Wheeled_02"
			,"A3_Armor_F_EPB_MBT_03"
			,"A3_Armor_F_EPB_APC_Tracked_03"
			,"A3_Armor_F_Tank_LT_01"
			,"A3_Weapons_F_Ammoboxes"
			,"A3_Supplies_F_Exp"
			,"A3_Air_F_EPB_Heli_Light_03"
		};
		version = "1.4.5";
		versionStr = "1.4.5";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFunctions {
	class adv_retex {
		tag = "adv_retex";
		class setTextureNATO {
			file = "adv_retex\functions";
			class setTextureNATOGorgon {};
			class setTextureNATOStrider {};
			class setTextureBLACKPawnee {};
			class setTextureMarid {};
			class setTextureMaridSan {};
			class setTextureMora {};
			class setTextureRHSHunter {};
			class setTextureWDL {};
			class setTextureNATOKuma {};
		};
		class setTextureAAF {
			file = "adv_retex\functions";
			class setTextureAAFPawnee {};
			class setTextureAAFOrca {};
		};
		class setTextureCIV {
			file = "adv_retex\functions";
			class setTextureCIVOrca {};
			class setTextureCIVMohawk_1 {};
			class setTextureCIVMohawk_2 {};
		};
	};
};

class cfgWeapons {
	#include "equipment\headgear.hpp"
	#include "equipment\uniforms.hpp"
};

class CfgVehicles {
	//vehicle inheritances

	class I_Heli_Transport_02_F;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_dynamicLoadout_F;
	class O_Heli_Light_02_dynamicLoadout_F;
	class O_Heli_Light_02_unarmed_F;
	
	class Car_F;
	class Tank;
	
	#include "equipment\backpacks.hpp"
	#include "equipment\soldiers.hpp"
	
	#include "vehicles\gorgon.hpp"
	#include "vehicles\hellcat.hpp"
	#include "vehicles\hunter.hpp"
	#include "vehicles\kuma.hpp"
	#include "vehicles\marid.hpp"
	#include "vehicles\mora.hpp"
	#include "vehicles\nyx.hpp"
	#include "vehicles\strider.hpp"

	//mohawk (dahoman)
	class adv_retex_b_mohawk_01_f: I_Heli_Transport_02_F {
		standard_macro
		nato_macro
		displayName = "CH-49 Mohawk (Dahoman)";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
			,"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	//mohawk (ion)
	class adv_retex_b_mohawk_02_f: I_Heli_Transport_02_F {
		standard_macro
		nato_macro
		displayName = "CH-49 Mohawk (ION)";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
			,"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};

	//mh9
	class adv_retex_b_mh9_black_f: B_Heli_Light_01_F {
		standard_macro
		nato_macro
		displayName = "MH-9 Hummingbird (Black)";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
	};	
	//ah9
	class adv_retex_b_ah9_black_f: B_Heli_Light_01_dynamicLoadout_F {
		standard_macro
		nato_macro
		displayName = "AH-9 Pawnee (Black)";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa","a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
	};
	
	//indfor vehicles
	//mh9
	class adv_retex_i_mh9_f: B_Heli_Light_01_F {
		standard_macro
		aaf_macro
		displayName = "MH-9 Hummingbird";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
	};
	class adv_retex_i_mh9_black_f: B_Heli_Light_01_F {
		standard_macro
		aaf_macro
		forceInGarage = 0;
		displayName = "MH-9 Hummingbird (Black)";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
	};	
	//ah9
	class adv_retex_i_ah9_f: B_Heli_Light_01_dynamicLoadout_F {
		standard_macro
		aaf_macro
		displayName = "AH-9 Pawnee";
		magazines[] = {"5000Rnd_762x51_Yellow_Belt"};
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa","a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
	};
	class adv_retex_i_ah9_black_f: B_Heli_Light_01_dynamicLoadout_F {
		standard_macro
		aaf_macro
		displayName = "AH-9 Pawnee (Black)";
		magazines[] = {"5000Rnd_762x51_Yellow_Belt"};
		forceInGarage = 0;
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa","a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
	};
	//mohawk (dahoman)
	class adv_retex_i_mohawk_01_f: I_Heli_Transport_02_F {
		standard_macro
		aaf_macro
		displayName = "CH-49 Mohawk (Dahoman)";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
			,"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	//mohawk (ion)
	class adv_retex_i_mohawk_02_f: I_Heli_Transport_02_F {
		standard_macro
		aaf_macro
		displayName = "CH-49 Mohawk (ION)";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
			,"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	//orca
	class adv_retex_i_orca_f: O_Heli_Light_02_dynamicLoadout_F {
		standard_macro
		aaf_macro
		displayName = "PO-30 Orca";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"};
	};
	
	//civilian vehicles
	//mohawk (dahoman)
	class adv_retex_c_mohawk_01_f: I_Heli_Transport_02_F {
		standard_macro
		civ_macro
		displayName = "CH-49 Mohawk (Dahoman)";
		crew = "C_man_pilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
			,"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	//mohawk (ion)
	class adv_retex_c_mohawk_02_f: I_Heli_Transport_02_F {
		standard_macro
		civ_macro
		displayName = "CH-49 Mohawk (ION)";
		crew = "C_man_pilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa"
			,"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
			,"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	//orca
	class adv_retex_c_orca_f: O_Heli_Light_02_unarmed_F {
		standard_macro
		civ_macro
		displayName = "PO-30 Orca";
		crew = "C_man_pilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
	};
	
};
