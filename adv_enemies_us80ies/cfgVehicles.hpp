#define standard_values author = "[SeL] Belbo";\
	scope = 2;\
	scopeCurator = 2;\
	side = 1;\
	modelsides[] = {3,2,1,0};\
	faction = "adv_faction_enemies_us80ies";\
	vehicleClass = "Men";\
	nakedUniform="U_BasicBody";\
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";\
	hiddenSelections[] = {"Camo", "insignia"};\
	identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};\
	faceType = "Man_A3";\
	genericNames = "NATOMen";
	//hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_us_woodland_co.paa"};

#define standard_weapons "CUP_hgun_Colt1911", "Throw", "Put"

#define standard_items "ItemCompass","ItemWatch","ItemMap"

#define standard_mags "CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green"
	
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#define standard_cfg_vehicle author = "[SeL] Belbo";\
	scope = 2;\
	curatorScope = 2;\
	scopeArsenal = 0;\
	side = 1;\
	faction = "adv_faction_enemies_us80ies";\
	typicalCargo[] = { "adv_us80ies_soldier_f" };

class CfgVehicles {
	//general inheritances
	class CUP_B_AlicePack_Khaki;
	class adv_us80ies_medicPack: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportItems {
			item_xx(FirstAidKit,10);
			item_xx(MediKit,1);
		};
	};
	class adv_us80ies_ARPack: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportMagazines {
			mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,3);
		};
	};
	
	class SoldierGB;
	class rhsgref_nat_base : SoldierGB {
		modelsides[] = {3,2,1,0};
	};
	class rhsgref_nat_woodland : rhsgref_nat_base {
		modelsides[] = {3,2,1,0};
	};
	
	class B_Soldier_base_F;
	class B_Soldier_F : B_Soldier_base_F {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};
	
	//base rifleman
	class adv_us80ies_soldier_f : B_Soldier_F {
		standard_values
		
		displayName = "Rifleman";
		uniformClass = "rhsgref_uniform_woodland";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"CUP_arifle_M16A2", standard_weapons};
		respawnWeapons[] = {"CUP_arifle_M16A2", standard_weapons};
		
		magazines[] = {
			standard_mags,
			mag_4("30Rnd_556x45_Stanag_Tracer_Red"),
			mag_3("CUP_30Rnd_556x45_Stanag")
		};
		respawnMagazines[] = {
			standard_mags,
			mag_4("30Rnd_556x45_Stanag_Tracer_Red"),
			mag_3("CUP_30Rnd_556x45_Stanag")
		};
	
		linkedItems[] = {"CUP_V_RUS_Smersh_1", standard_items};
		respawnLinkedItems[] = {"CUP_V_RUS_Smersh_1", standard_items};
		headgearList[] = { "CUP_H_USArmy_Helmet_M1_Olive", 0.5, "CUP_H_USArmy_Helmet_M1_m81", 0.5, "H_Booniehat_oli", 0.1, "CUP_H_FR_BoonieWDL", 0.1 };
		class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; };
	};
	//soldier AT
	class adv_us80ies_soldier_lat_f : adv_us80ies_soldier_f {
		displayName = "Soldier (AT)";
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		weapons[] = {"CUP_arifle_M16A2", "rhs_weap_m72a7", standard_weapons};
		respawnWeapons[] = {"CUP_arifle_M16A2", "rhs_weap_m72a7", standard_weapons};
	};
	//Radio Operator
	class adv_us80ies_soldier_radio_f : adv_us80ies_soldier_f {
		displayName = "Radio Operator";
		threat[] = {1,0.7,0.3};
		weapons[] = {"CUP_arifle_M16A2", standard_weapons};
		respawnWeapons[] = {"CUP_arifle_M16A2", standard_weapons};
		backpack = "tf_rt1523g_sage";
	};
	//marksman
	class adv_us80ies_soldier_m_f : adv_us80ies_soldier_f {
		displayName = "Designated Marksman";
		role = "Marksman";
		weapons[] = {"CUP_srifle_M14_DMR_LeupoldMk4", standard_weapons};
		respawnWeapons[] = {"CUP_srifle_M14_DMR_LeupoldMk4", standard_weapons};
		magazines[] = {
			standard_mags,
			mag_7("CUP_20Rnd_762x51_DMR")
		};
		respawnMagazines[] = {
			standard_mags,
			mag_7("CUP_20Rnd_762x51_DMR")
		};
	};
	//squad leader	
	class adv_us80ies_soldier_sl_f : adv_us80ies_soldier_f {
		displayName = "Squad Leader";
		icon = "iconManOfficer";
		weapons[] = {"CUP_arifle_M16A2", "Binocular", standard_weapons};
		respawnWeapons[] = {"CUP_arifle_M16A2", "Binocular", standard_weapons};
		linkedItems[] = {"CUP_V_RUS_Smersh_2", standard_items, "ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_RUS_Smersh_2", standard_items, "ItemRadio"};
	};
	//team leader	
	class adv_us80ies_soldier_tl_f : adv_us80ies_soldier_f {
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"CUP_arifle_M16A2", standard_weapons};
		respawnWeapons[] = {"CUP_arifle_M16A2", standard_weapons};
	};
	//medic
	class adv_us80ies_medic_f : adv_us80ies_soldier_f {
		displayName = "Medic";
		attendant = 1;
		camouflage = 1.6;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		backpack = "adv_us80ies_medicPack";
	};
	//grenadier
	class adv_us80ies_soldier_gl_f: adv_us80ies_soldier_f {
		displayName = "Grenadier";
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		weapons[] = {"CUP_arifle_M16A2_GL", standard_weapons};
		respawnWeapons[] = {"CUP_arifle_M16A2_GL", standard_weapons};
		magazines[] = {
			standard_mags,
			mag_4("30Rnd_556x45_Stanag_Tracer_Red"),
			mag_3("CUP_30Rnd_556x45_Stanag"),
			mag_6("1Rnd_HE_Grenade_shell"),
			mag_2("1Rnd_Smoke_Grenade_shell"),
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
		respawnMagazines[] = {
			standard_mags,
			mag_4("30Rnd_556x45_Stanag_Tracer_Red"),
			mag_3("CUP_30Rnd_556x45_Stanag"),
			mag_6("1Rnd_HE_Grenade_shell"),
			mag_2("1Rnd_Smoke_Grenade_shell"),
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	//AR
	class adv_us80ies_soldier_ar_f: adv_us80ies_soldier_f {
		displayName = "Autorifleman";
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"CUP_lmg_M60E4", "Throw", "Put"};
		respawnWeapons[] = {"CUP_lmg_M60E4", "Throw", "Put"};
		magazines[] = {
			standard_mags,
			mag_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
		};
		respawnMagazines[] = {
			standard_mags,
			mag_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
		};
		backpack = "adv_us80ies_ARPack";
	};
	//Pilot
	class adv_us80ies_pilot_f: adv_us80ies_soldier_f {
		displayName = "Pilot";
		role = "Crewman";
		uniformClass = "CUP_U_B_USMC_PilotOverall";
		weapons[] = {"SMG_05_F", standard_weapons};
		respawnWeapons[] = {"SMG_05_F", standard_weapons};
		magazines[] = {
			standard_mags,
			mag_3("30Rnd_9x21_Mag_SMG_02")
		};
		respawnMagazines[] = {
			standard_mags,
			mag_3("30Rnd_9x21_Mag_SMG_02")
		};
		linkedItems[] = {"CUP_V_B_PilotVest", "CUP_H_USMC_Helmet_Pilot", standard_items};
		respawnLinkedItems[] = {"CUP_V_B_PilotVest", "CUP_H_USMC_Helmet_Pilot", standard_items};
		backpack = "CUP_T10_Parachute_backpack";
		headgearList[] = {};
		class EventHandlers: EventHandlers {};
	};
	
	//vehicles
	class rhsusf_m113_usarmy_M240;
	class rhsusf_m113_usarmy_supply;
	class rhsusf_m1025_w;
	class rhsusf_m1025_w_m2;
	class RHS_UH1Y;
	class CUP_B_MTVR_USMC;
	class CUP_B_AAV_USMC;
	class CUP_B_AV8B_CAP_USMC;
	class CUP_B_M1030;
	//landvehicles
	class adv_us80ies_m113_f: rhsusf_m113_usarmy_M240 {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	class adv_us80ies_m113_ammo_f: rhsusf_m113_usarmy_supply {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	class adv_us80ies_m1025a2_f: rhsusf_m1025_w {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	class adv_us80ies_m1025a2_m2_f: rhsusf_m1025_w_m2 {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	class adv_us80ies_mtvr_f: CUP_B_MTVR_USMC {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	class adv_us80ies_aav_f: CUP_B_AAV_USMC {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	class adv_us80ies_m1030_f: CUP_B_M1030 {
		standard_cfg_vehicle
		crew = "adv_us80ies_soldier_f";
	};
	//air vehicles
	class adv_us80ies_uh1y_f: RHS_UH1Y {
		standard_cfg_vehicle
		crew = "adv_us80ies_pilot_f";
	};
	class adv_us80ies_av8b_f: CUP_B_AV8B_CAP_USMC {
		standard_cfg_vehicle
		crew = "adv_us80ies_pilot_f";
	};
};
