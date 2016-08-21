//base rifleman
class adv_us80a_soldier_f : B_Soldier_F {
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
	headgearList[] = { "CUP_H_USArmy_Helmet_M1_Olive", 0.5, "CUP_H_USArmy_Helmet_M1_m81", 0.5, "CUP_H_FR_BoonieWDL", 0.1 };
	class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; };
};
//soldier AT
class adv_us80a_soldier_lat_f : adv_us80a_soldier_f {
	displayName = "Soldier (AT)";
	threat[] = {1,0.7,0.3};
	icon = "iconManAT";
	role = "MissileSpecialist";
	weapons[] = {"CUP_arifle_M16A2", "rhs_weap_m72a7", standard_weapons};
	respawnWeapons[] = {"CUP_arifle_M16A2", "rhs_weap_m72a7", standard_weapons};
};
//Radio Operator
class adv_us80a_soldier_radio_f : adv_us80a_soldier_f {
	displayName = "Radio Operator";
	threat[] = {1,0.7,0.3};
	weapons[] = {"CUP_arifle_M16A2", standard_weapons};
	respawnWeapons[] = {"CUP_arifle_M16A2", standard_weapons};
	backpack = "tf_rt1523g_sage";
};
//marksman
class adv_us80a_soldier_m_f : adv_us80a_soldier_f {
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
class adv_us80a_soldier_sl_f : adv_us80a_soldier_f {
	displayName = "Squad Leader";
	icon = "iconManOfficer";
	weapons[] = {"CUP_arifle_M16A2_GL", standard_weapons};
	respawnWeapons[] = {"CUP_arifle_M16A2_GL", standard_weapons};
	magazines[] = {
		standard_mags,
		mag_4("30Rnd_556x45_Stanag_Tracer_Red"),
		mag_3("CUP_30Rnd_556x45_Stanag"),
		mag_6("1Rnd_HE_Grenade_shell"),
		mag_2("UGL_FlareWhite_F"),
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
	linkedItems[] = {"CUP_V_RUS_Smersh_2", standard_items, "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_RUS_Smersh_2", standard_items, "ItemRadio"};
};
//team leader	
class adv_us80a_soldier_tl_f : adv_us80a_soldier_f {
	displayName = "Team Leader";
	icon = "iconManLeader";
	weapons[] = {"CUP_arifle_M16A2", standard_weapons};
	respawnWeapons[] = {"CUP_arifle_M16A2", standard_weapons};
};
//medic
class adv_us80a_medic_f : adv_us80a_soldier_f {
	displayName = "Medic";
	attendant = 1;
	camouflage = 1.6;
	icon = "iconManMedic";
	role = "CombatLifeSaver";
	backpack = "adv_us80_medicPack";
};
//grenadier
class adv_us80a_soldier_gl_f: adv_us80a_soldier_f {
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
		mag_2("UGL_FlareWhite_F"),
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
//breacher
class adv_us80a_soldier_sg_f: adv_us80a_soldier_f {
	displayName = "Breacher";
	weapons[] = {"rhs_weap_M590_8RD", standard_weapons};
	respawnWeapons[] = {"rhs_weap_M590_8RD", standard_weapons};
	magazines[] = {
		standard_mags,
		mag_7("rhsusf_8Rnd_00Buck")
	};
	respawnMagazines[] = {
		standard_mags,
		mag_7("rhsusf_8Rnd_00Buck")
	};
};
//AR
class adv_us80a_soldier_ar_f: adv_us80a_soldier_f {
	displayName = "Autorifleman";
	threat[] = {1,0.1,0.3};
	icon = "iconManMG";
	role = "MachineGunner";
	weapons[] = {"CUP_lmg_M249_E2", standard_weapons};
	respawnWeapons[] = {"CUP_lmg_M249_E2", standard_weapons};
	magazines[] = {
		standard_mags,
		mag_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	respawnMagazines[] = {
		standard_mags,
		mag_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	backpack = "adv_us80_ARPack_m249";
};
//heavygunner
class adv_us80a_heavygunner_f: adv_us80a_soldier_f {
	displayName = "M60 Gunner";
	threat[] = {1,0.1,0.3};
	icon = "iconManMG";
	role = "MachineGunner";
	weapons[] = {"CUP_lmg_M60E4", standard_weapons};
	respawnWeapons[] = {"CUP_lmg_M60E4", standard_weapons};
	magazines[] = {
		standard_mags,
		mag_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	respawnMagazines[] = {
		standard_mags,
		mag_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	backpack = "adv_us80_ARPack_m60";
};
//crew
class adv_us80a_crew_f: adv_us80a_soldier_f {
	displayName = "Crewman";
	role = "Crewman";
	uniformClass = "CUP_U_B_USMC_PilotOverall";
	weapons[] = {"CUP_smg_MP5A5", standard_weapons};
	respawnWeapons[] = {"CUP_smg_MP5A5", standard_weapons};
	magazines[] = {
		standard_mags,
		mag_3("CUP_30Rnd_9x19_MP5")
	};
	respawnMagazines[] = {
		standard_mags,
		mag_3("CUP_30Rnd_9x19_MP5")
	};
	linkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02", standard_items};
	respawnLinkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02", standard_items};
	headgearList[] = { "rhsusf_cvc_green_helmet", 0.5, "rhsusf_cvc_green_ess", 0.5 };
};
//Helicrew
class adv_us80a_helipilot_f: adv_us80a_crew_f {
	displayName = "Helipilot";
	linkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02", "CUP_H_USMC_Helmet_Pilot", standard_items};
	respawnLinkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02", "CUP_H_USMC_Helmet_Pilot", standard_items};
	backpack = "CUP_T10_Parachute_backpack";
	headgearList[] = { };
};
//Pilot
class adv_us80a_pilot_f: adv_us80a_crew_f {
	displayName = "Pilot";
	linkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02", "rhs_zsh7a_alt", standard_items};
	respawnLinkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02", "rhs_zsh7a_alt", standard_items};
	backpack = "CUP_T10_Parachute_backpack";
	headgearList[] = { };
};

//vehicles
class rhsusf_m113_usarmy_M240;
class rhsusf_m113_usarmy_supply;
class rhsusf_m113_usarmy;
class rhsusf_m1025_w;
class rhsusf_m1025_w_m2;
class RHS_MELB_MH6M;
class RHS_UH60M;
class RHS_CH_47F;
class RHS_A10;
class CUP_B_M163_USA;
class CUP_B_MTVR_USMC;
class CUP_B_M1030;
class RHS_M119_WD;
class RHS_TOW_TriPod_WD;
class RHS_M2StaticMG_WD;
class RHS_M2StaticMG_MiniTripod_D;
class RHS_Stinger_AA_pod_WD;
class RHS_M252_WD;
class Offroad_02_unarmed_base_F;
class I_C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F {
	class Eventhandlers;
};
class rhsusf_m1a1tank_base;
class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base {
	class Eventhandlers;
};
//tracked
class adv_us80a_m113_f: rhsusf_m113_usarmy_M240 {
	standard_cfg_vehicle_a
	crew = "adv_us80a_crew_f";
};
class adv_us80a_m113_m2_f: rhsusf_m113_usarmy {
	standard_cfg_vehicle_a
	crew = "adv_us80a_crew_f";
};
class adv_us80a_m113_ammo_f: rhsusf_m113_usarmy_supply {
	standard_cfg_vehicle_a
	crew = "adv_us80a_crew_f";
};
class adv_us80a_m163_f: CUP_B_M163_USA {
	standard_cfg_vehicle_a
	crew = "adv_us80a_crew_f";
};
class adv_us80a_m1a1_f: rhsusf_m1a1aimwd_usarmy {
	standard_cfg_vehicle_a
	crew = "adv_us80a_crew_f";
	class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0),nil,['IFF_Panels_Hide',1,'Miles_Hide',1]] call BIS_fnc_initVehicle;};"; };
};
//wheeled
class adv_us80a_mb4wd_f: I_C_Offroad_02_unarmed_F {
	standard_cfg_vehicle_a
	displayName = "Ford M151";
	crew = "adv_us80a_soldier_f";
	class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0),['Olive',1],['hideLeftDoor',1,'hideRightDoor',1,'hideFenders',1,'hideHeadSupportRear',1,'hideHeadSupportFront',1,'hideRollcage',1]] call BIS_fnc_initVehicle;};"; };
};
class adv_us80a_m1025a2_f: rhsusf_m1025_w {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";
};
class adv_us80a_m1025a2_m2_f: rhsusf_m1025_w_m2 {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";
};
class adv_us80a_mtvr_f: CUP_B_MTVR_USMC {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";
};
class adv_us80a_m1030_f: CUP_B_M1030 {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";
};
//static
class adv_us80a_m119: RHS_M119_WD {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";		
};
class adv_us80a_tow: RHS_TOW_TriPod_WD {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";		
};
class adv_us80a_m2staticmg: RHS_M2StaticMG_WD {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";		
};
class adv_us80a_m2staticmg_minitripod: RHS_M2StaticMG_MiniTripod_D {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";		
};
class adv_us80a_stinger: RHS_Stinger_AA_pod_WD {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";		
};
class adv_us80a_m252: RHS_M252_WD {
	standard_cfg_vehicle_a
	crew = "adv_us80a_soldier_f";		
};
//air vehicles
class adv_us80a_uh60m_f: RHS_UH60M {
	standard_cfg_vehicle_a
	crew = "adv_us80a_helipilot_f";
};
class adv_us80a_ch47_f: RHS_CH_47F {
	standard_cfg_vehicle_a
	crew = "adv_us80a_helipilot_f";
};
class adv_us80a_mh6m_f: RHS_MELB_MH6M {
	standard_cfg_vehicle_a
	crew = "adv_us80a_helipilot_f";
};
class adv_us80a_a10_f: RHS_A10 {
	standard_cfg_vehicle_a
	crew = "adv_us80a_pilot_f";
};