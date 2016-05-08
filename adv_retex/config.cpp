class CfgPatches
{
    class adv_retex
    {
        units[] = {
			"adv_retex_b_gorgon_f",
			"adv_retex_b_strider_f",
			"adv_retex_b_strider_hmg_f",
			"adv_retex_b_strider_gmg_f",
			"adv_retex_b_mohawk_01_f",
			"adv_retex_b_mohawk_02_f",			
			"adv_retex_i_mh9_f",
			"adv_retex_i_ah9_f",
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
			"A3_Soft_F_MRAP_03",
			"A3_Air_F_Beta_Heli_Transport_02",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_Civil"
		};
		version = "1.0";
		versionStr = "1.0";
		author[] = {"[SeL] Belbo // Adrian"};
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
	//inheritances
	class I_APC_Wheeled_03_cannon_F;
	class I_Heli_Transport_02_F;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class O_Heli_Light_02_F;
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	
	//blufor vehicles
	//gorgon
	class adv_retex_b_gorgon_f: I_APC_Wheeled_03_cannon_F {
		side = 1;
		scope = 2;
		displayName = "AFV-4 Gorgon";
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
			
		};
	};
	//strider
	class adv_retex_b_strider_f: I_MRAP_03_F {
		side = 1;
		scope = 2;
		displayName = "Strider";
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa",
			"a3\data_f\vehicles\turret_co.paa"
		};
	};
	class adv_retex_b_strider_hmg_f: I_MRAP_03_hmg_F {
		side = 1;
		scope = 2;
		displayName = "Strider HMG";
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa",
			"a3\data_f\vehicles\turret_co.paa"
		};
	};
	class adv_retex_b_strider_gmg_f: I_MRAP_03_gmg_F {
		side = 1;
		scope = 2;
		displayName = "Strider GMG";
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_soldier_F"};
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa",
			"a3\data_f\vehicles\turret_co.paa"
		};
	};
	//mohawk (dahoman)
	class adv_retex_b_mohawk_01_f: I_Heli_Transport_02_F {
		side = 1;
		scope = 2;
		displayName = "CH-49 Mohawk (Dahoman)";
		faction = "BLU_F";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
		};
	};
	//mohawk (ion)
	class adv_retex_b_mohawk_02_f: I_Heli_Transport_02_F {
		side = 1;
		scope = 2;
		displayName = "CH-49 Mohawk (ION)";
		faction = "BLU_F";
		crew = "B_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
		};
	};
	
	//indfor vehicles
	//mh9
	class adv_retex_i_mh9_f: B_Heli_Light_01_F {
		side = 2;
		scope = 2;
		displayName = "MH-9 Hummingbird";
		faction = "IND_F";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
	};	
	//ah9
	class adv_retex_i_ah9_f: B_Heli_Light_01_armed_F {
		side = 2;
		scope = 2;
		displayName = "AH-9 Pawnee";
		faction = "IND_F";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
	};
	//mohawk (dahoman)
	class adv_retex_i_mohawk_01_f: I_Heli_Transport_02_F {
		side = 2;
		scope = 2;
		displayName = "CH-49 Mohawk (Dahoman)";
		faction = "IND_F";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
		};
	};
	//mohawk (ion)
	class adv_retex_i_mohawk_02_f: I_Heli_Transport_02_F {
		side = 2;
		scope = 2;
		displayName = "CH-49 Mohawk (ION)";
		faction = "IND_F";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
		};
	};
	//orca
	class adv_retex_i_orca_f: O_Heli_Light_02_F {
		side = 2;
		scope = 2;
		displayName = "PO-30 Orca";
		faction = "IND_F";
		crew = "I_helipilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"};
	};
	
	//civilian vehicles
	//mohawk (dahoman)
	class adv_retex_c_mohawk_01_f: I_Heli_Transport_02_F {
		side = 3;
		scope = 2;
		displayName = "CH-49 Mohawk (Dahoman)";
		faction = "CIV_F";
		crew = "C_man_pilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
		};
	};
	//mohawk (ion)
	class adv_retex_c_mohawk_02_f: I_Heli_Transport_02_F {
		side = 3;
		scope = 2;
		displayName = "CH-49 Mohawk (ION)";
		faction = "CIV_F";
		crew = "C_man_pilot_F";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
			"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
		};
	};
	//orca
	class adv_retex_c_orca_f: O_Heli_Light_02_F {
		side = 3;
		scope = 2;
		displayName = "PO-30 Orca";
		faction = "CIV_F";
		crew = "C_man_pilot_F";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
	};
	
};