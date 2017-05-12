#define standard_macro scope=2;\
			author="Spezialeinheit Luchs";\
			scopeCurator = 2;

#define nato_macro side=1;\
			faction="BLU_F";
			
#define aaf_macro side=2;\
			faction="IND_F";

#define civ_macro side=3;\
			faction="CIV_F";
			
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
	
class CfgPatches
{
    class adv_retex
    {
        units[] = {
			"adv_retex_b_mrap_f",
			"adv_retex_b_mrap_hmg_f",
			"adv_retex_b_mrap_gmg_f",
			"adv_retex_b_kuma_f",
			"adv_retex_b_mora_f",
			"adv_retex_b_marid_f",
			"adv_retex_b_gorgon_f",
			"adv_retex_b_strider_f",
			"adv_retex_b_strider_hmg_f",
			"adv_retex_b_strider_gmg_f",
			"adv_retex_b_mohawk_01_f",
			"adv_retex_b_mohawk_02_f",			
			"adv_retex_b_mh9_black_f",
			"adv_retex_b_ah9_black_f",
			"adv_retex_i_mh9_f",
			"adv_retex_i_mh9_black_f",
			"adv_retex_i_ah9_f",
			"adv_retex_i_ah9_black_f",
			"adv_retex_i_orca_f",
			"adv_retex_i_mohawk_01_f",
			"adv_retex_i_mohawk_02_f",
			"adv_retex_c_orca_f",
			"adv_retex_c_mohawk_01_f",
			"adv_retex_c_mohawk_02_f"
		};
        weapons[] = {};
        requiredVersion = 1.58;
        requiredAddons[] = {
			"A3_Armor_F_APC_Wheeled_03",
			"A3_Air_F_Heli_Light_01",
			"A3_Air_F_Heli_Light_02",
			"A3_Soft_F_MRAP_01",
			"A3_Soft_F_MRAP_03",
			"A3_Air_F_Beta_Heli_Transport_02",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_Civil",
			"A3_Weapons_F_Uniforms"
		};
		version = "1.15";
		versionStr = "1.15";
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

class CfgVehicles {
	//vehicle inheritances
	class I_APC_Wheeled_03_cannon_F;
	class I_APC_tracked_03_cannon_F;
	class I_MBT_03_cannon_F;
	class O_APC_Wheeled_02_base_F;
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F {
		class Eventhandlers;
	};
	class I_Heli_Transport_02_F;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_unarmed_F;
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_gmg_F;
	
	//blufor vehicles
	//hunter
	class adv_retex_b_mrap_f: B_MRAP_01_F {
		displayName = "Hunter (Desert)";
		hiddenSelectionsTextures[] = {
			"adv_retex\textures\hunter\rhs_body.paa"
			,"adv_retex\textures\hunter\rhs_back.paa"
		};
	};
	class adv_retex_b_mrap_hmg_f: B_MRAP_01_hmg_F {
		displayName = "Hunter HMG (Desert)";
		hiddenSelectionsTextures[] = {
			"adv_retex\textures\hunter\rhs_body.paa"
			,"adv_retex\textures\hunter\rhs_back.paa"
			,"adv_retex\textures\hunter\rhs_turret.paa"
		};
	};
	class adv_retex_b_mrap_gmg_f: B_MRAP_01_gmg_F {
		displayName = "Hunter GMG (Desert)";
		hiddenSelectionsTextures[] = {
			"adv_retex\textures\hunter\rhs_body.paa"
			,"adv_retex\textures\hunter\rhs_back.paa"
			,"adv_retex\textures\hunter\rhs_turret.paa"
		};
	};
	//kuma
	class adv_retex_b_kuma_f: I_MBT_03_cannon_F {
		standard_macro
		nato_macro
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		displayName = "MBT-52 Kuma";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"adv_retex\textures\kuma\TankBodyTexture.paa"
			,"adv_retex\textures\kuma\TankTurretTexture.paa"
			,"adv_retex\textures\kuma\TankTurretMGTexture.paa"
			,"adv_retex\textures\kuma\TankTurretTexture.paa"
			,"adv_retex\textures\kuma\TankTurretTexture.paa"
			,"adv_retex\textures\kuma\TankTrackTexture.paa"
			,"adv_retex\textures\kuma\TankTrackTexture.paa"
		};
	};
	//mora
	class adv_retex_b_mora_f: I_APC_tracked_03_cannon_F {
		standard_macro
		nato_macro
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		displayName = "FV-720 Mora";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"adv_retex\textures\mora\TurretTexture.paa"
			,"adv_retex\textures\mora\BodyTexture.paa"
		};
	};
	//marid
	class adv_retex_b_marid_f: O_APC_Wheeled_02_rcws_F {
		standard_macro
		nato_macro
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		displayName = "MSE-3 Marid";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"adv_retex\textures\marid\apc_wheeled_02_ext_01_blufor_co.paa"
			,"adv_retex\textures\marid\apc_wheeled_02_ext_02_blufor_co.paa"
			,"a3\data_f\vehicles\turret_co.paa"
			/*
			"adv_retex\textures\marid\MaridBodyTexture1.paa"
			,"adv_retex\textures\marid\MaridBodyTexture2.paa"
			,"adv_retex\textures\marid\MaridRcwcsTexture.paa"
			*/
		};
		class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0)] call adv_retex_fnc_setTextureMarid;};"; };
	};
	//gorgon
	class adv_retex_b_gorgon_f: I_APC_Wheeled_03_cannon_F {
		standard_macro
		nato_macro
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		displayName = "AFV-4 Gorgon";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa"
			,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa"
			,"a3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa"
			,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
		};
	};
	//strider
	class adv_retex_b_strider_f: I_MRAP_03_F {
		standard_macro
		nato_macro
		displayName = "Strider";
		crew = "B_soldier_F";
		typicalCargo[] = {"B_soldier_F"};
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa"
			,"a3\data_f\vehicles\turret_co.paa"
		};
	};
	class adv_retex_b_strider_hmg_f: I_MRAP_03_hmg_F {
		standard_macro
		nato_macro
		displayName = "Strider HMG";
		crew = "B_soldier_F";
		typicalCargo[] = {"B_soldier_F"};
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa"
			,"a3\data_f\vehicles\turret_co.paa"
		};
	};
	class adv_retex_b_strider_gmg_f: I_MRAP_03_gmg_F {
		standard_macro
		nato_macro
		displayName = "Strider GMG";
		crew = "B_soldier_F";
		typicalCargo[] = {"B_soldier_F"};
		class TransportMagazines {
			natomags
		};
		class TransportWeapons {
			natoweapons
		};
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa"
			,"a3\data_f\vehicles\turret_co.paa"
		};
	};
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
	class adv_retex_b_ah9_black_f: B_Heli_Light_01_armed_F {
		standard_macro
		nato_macro
		displayName = "AH-9 Pawnee (Black)";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
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
		scopeArsenal = 0;
		displayName = "MH-9 Hummingbird (Black)";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
	};	
	//ah9
	class adv_retex_i_ah9_f: B_Heli_Light_01_armed_F {
		standard_macro
		aaf_macro
		displayName = "AH-9 Pawnee";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
	};
	class adv_retex_i_ah9_black_f: B_Heli_Light_01_armed_F {
		standard_macro
		aaf_macro
		displayName = "AH-9 Pawnee (Black)";
		scopeArsenal = 0;
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
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
		};
	};
	//orca
	class adv_retex_i_orca_f: O_Heli_Light_02_F {
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
