#define standard_cfg author = "[SeL] Belbo";\
	scope = 2;\
	curatorScope = 2;\
	side = 0;\
	faction = "adv_faction_enemies_pirates";\
	vehicleClass = "Men";\
	model = "\a3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";\
	modelSides[]={3,2,1,0};\
	hiddenSelections[] = {"Camo", "insignia"};\
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};\
	identityTypes[] = {"Head_African", "Head_Euro", "Head_Greek", "G_IRAN_default", "G_GUERIL_default", "LanguagePER_F"};\
	faceType = "Man_A3";\
	genericNames="TanoanMen";\
	nakedUniform = "U_BasicBody";\
	headgearList[] = { "H_ShemagOpen_tan", 0.3, "H_Bandanna_khk", 0.3, "H_Bandanna_camo", 0.3, "H_Bandanna_sand", 0.3, "H_Bandanna_blk", 0.3, "", 0.1 };\
	class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; };

#define standard_items "ItemRadio", "ItemMap", "ItemCompass", "ItemWatch"

#define standard_weapons "Binocular", "Throw", "Put"

#define standard_grenades  "HandGrenade", "HandGrenade", "SmokeShellOrange", "SmokeShellYellow"

#define standard_cfg_vehicle author="[SeL] Belbo";\
	scope = 2;\
	curatorScope = 2;\
	side = 0;\
	faction = "adv_faction_enemies_pirates";\
	vehicleClass = "Car";

class CfgVehicles {
	//backpacks
	class B_FieldPack_khk;
	class B_Kitbag_cbr;
	
	class adv_pirates_ARPack: B_FieldPack_khk
	{
		scope = 1;
        class TransportMagazines
        {
			class _xx_AR_rounds 
			{
				magazine = "200Rnd_556x45_Box_Tracer_F"; count = 3;
			};
        };
	};
	
	class adv_pirates_ATPack: B_FieldPack_khk
	{
		scope = 1;
        class TransportMagazines
        {
			class _xx_AT_rounds 
			{
				magazine = "RPG7_F"; count = 3;
			};
        };
	};
	
	class adv_pirates_MedicPack: B_Kitbag_cbr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_firstAidKits
			{
				name = "FirstAidKit"; count = 10;
			};
			class _xx_MedKits
			{
				name = "MediKit"; count = 1;
			};
		};
	};

	//units
	class SoldierGB;
	class I_G_Soldier_base_F : SoldierGB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};
	class I_C_Soldier_base_F : I_G_Soldier_base_F {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};
	
	class adv_pirates_soldier_1_f : I_C_Soldier_base_F {
		standard_cfg
		
		displayName = "Pirat 1";
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
		weapons[] = {"arifle_AKM_F", standard_weapons};
		respawnWeapons[] = {"arifle_AKM_F", standard_weapons};
		
		magazines[] = {standard_grenades, "30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"};
		respawnMagazines[] = {standard_grenades, "30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"};
	
		linkedItems[] = {"V_TacChestrig_grn_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", standard_items};
	};
	
	class adv_pirates_soldier_2_f : adv_pirates_soldier_1_f {
		displayName = "Pirat 2";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
	};
	
	class adv_pirates_soldier_3_f : adv_pirates_soldier_1_f {
		displayName = "Pirat 3";
		uniformClass = "U_I_C_Soldier_Bandit_3_F";
		linkedItems[] = {"V_TacChestrig_cbr_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_cbr_F", standard_items};
	};
	
	class adv_pirates_soldier_AR_f : adv_pirates_soldier_1_f {
		displayName = "Pirat (LMG)";
		icon = "iconManMG";
		uniformClass = "U_I_C_Soldier_Para_1_F"
		linkedItems[] = {"V_TacChestrig_grn_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", standard_items};

		weapons[] = {"LMG_03_F", standard_weapons};
		respawnWeapons[] = {"LMG_03_F", standard_weapons};

		magazines[] = {standard_grenades, "200Rnd_556x45_Box_Tracer_F"};
		respawnMagazines[] = {standard_grenades, "200Rnd_556x45_Box_Tracer_F"};
		
		backpack = "adv_pirates_ARPack";
	};
	
	class adv_pirates_medic_f : adv_pirates_soldier_1_f {
		displayName = "Pirat (Medic)";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
		uniformClass = "U_I_C_Soldier_Bandit_2_F";
		linkedItems[] = {"V_TacChestrig_cbr_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_cbr_F", standard_items};
		backpack = "adv_pirates_MedicPack";
	};
	
	class adv_pirates_soldier_M_f : adv_pirates_soldier_1_f {
		displayName = "Marksman";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		linkedItems[] = {"V_TacChestrig_grn_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", standard_items};

		weapons[] = {"srifle_DMR_06_camo_khs_F", standard_weapons};
		respawnWeapons[] = {"srifle_DMR_06_camo_khs_F", standard_weapons};

		magazines[] = {standard_grenades, "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {standard_grenades, "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	
	class adv_pirates_soldier_AT_f : adv_pirates_soldier_1_f {
		displayName = "Pirat (AT)";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		linkedItems[] = {"V_TacChestrig_grn_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", standard_items};

		weapons[] = {"arifle_AKS_F", "launch_RPG7_F", standard_weapons};
		respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", standard_weapons};

		magazines[] = {standard_grenades, "RPG7_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
		respawnMagazines[] = {standard_grenades, "RPG7_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
		
		backpack = "adv_pirates_ATPack";
	};
	
	class adv_pirates_soldier_TL_f : adv_pirates_soldier_1_f {
		displayName = "Team Leader";
		icon = "iconManLeader";
		uniformClass = "U_OG_Guerilla3_1";
		linkedItems[] = {"V_TacChestrig_oli_F", standard_items};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F", standard_items};
		
		weapons[] = {"arifle_AK12_GL_F", standard_weapons};
		respawnWeapons[] = {"arifle_AK12_GL_F", standard_weapons};

		magazines[] = {
			standard_grenades,
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell"
		};
		respawnMagazines[] = {
			standard_grenades,
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell"
		};
	};
	
	//vehicles
	class O_G_Offroad_01_F;
	class O_G_Offroad_01_armed_F;
	class I_C_Offroad_02_unarmed_F;
	
	class adv_pirates_offroad_f : O_G_Offroad_01_F {
		standard_cfg_vehicle
		displayname = "Toyota Hillux";
		crew = "adv_pirates_soldier_1_f";
		typicalCargo[] = { "adv_pirates_soldier_3_f" };
		hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
	};

	class adv_pirates_offroad_armed_f : O_G_Offroad_01_armed_F {
		standard_cfg_vehicle
		displayname = "Toyota Hillux (M2)";
		crew = "adv_pirates_soldier_2_f";
		typicalCargo[] = { "adv_pirates_soldier_3_f" };
		hiddenSelectionsTextures[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa"};
	};

	class adv_pirates_mb4wd_f : I_C_Offroad_02_unarmed_F {
		standard_cfg_vehicle
		displayname = "MB 4WD";
		crew = "adv_pirates_soldier_3_f";
		typicalCargo[] = { "adv_pirates_soldier_TL_f" };
	};
};
