class B_Soldier_F;
class adv_wdl_soldier_f: B_Soldier_F {
	macro_standard
	//macro_uniform(macro_CU_I_1,macro_CU_I_2,macro_CU_I_3)
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier1_rgr")
	weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_10("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_10("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_Soldier_lite_F;
class adv_wdl_soldier_lite_f: B_Soldier_lite_F {
	macro_standard
	macro_uniform_CU_vest
	macro_linked_2("V_BandollierB_rgr", "H_Booniehat_oli")
	weapons[] = {"arifle_SPAR_01_blk_ACO_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_F",macro_weapons_base};
	magazines[] = {macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_Soldier_GL_F;
class adv_wdl_soldier_GL_f: B_Soldier_GL_F {
	macro_standard
	macro_uniform_CU
	macro_linked_standard("V_PlateCarrierGL_rgr")
	weapons[] = {"arifle_SPAR_01_GL_blk_ACO_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ACO_F",macro_weapons_base};
	magazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_6("1Rnd_HE_Grenade_shell"),macro_mags_2("MiniGrenade"),macro_mags_2("1Rnd_Smoke_Grenade_shell"),"1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	respawnMagazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_6("1Rnd_HE_Grenade_shell"),macro_mags_2("MiniGrenade"),macro_mags_2("1Rnd_Smoke_Grenade_shell"),"1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
};

class B_Soldier_AR_F;
class adv_wdl_soldier_AR_f: B_Soldier_AR_F {
	macro_standard
	macro_uniform_CU_tshirt
	macro_linked_standard("V_PlateCarrier2_rgr")
	weapons[] = {"LMG_03_pointer_F",macro_weapons_base};
	respawnWeapons[] = {"LMG_03_pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_6("200Rnd_556x45_Box_F"),macro_mags_base};
	respawnMagazines[] = {macro_mags_6("200Rnd_556x45_Box_F"),macro_mags_base};
};

class B_Soldier_SL_F;
class adv_wdl_soldier_SL_f: B_Soldier_SL_F {
	macro_standard
	macro_uniform_CU_vest
	macro_linked_4("V_PlateCarrier2_rgr","H_HelmetIA_wdl","NVGoggles_OPFOR","ItemGPS")
	weapons[] = {"arifle_SPAR_01_blk_ARCO_Pointer_F","Binocular",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ARCO_Pointer_F","Binocular",macro_weapons_base};
	magazines[] = {macro_mags_base,macro_mags_4("30Rnd_556x45_Stanag"),macro_mags_2("30Rnd_556x45_Stanag_Tracer_Red"),"B_IR_Grenade","B_IR_Grenade","SmokeShellBlue","SmokeShellOrange"};
	respawnMagazines[] = {macro_mags_base,macro_mags_4("30Rnd_556x45_Stanag"),macro_mags_2("30Rnd_556x45_Stanag_Tracer_Red"),"B_IR_Grenade","B_IR_Grenade","SmokeShellBlue","SmokeShellOrange"};
};

class B_Soldier_TL_F;
class adv_wdl_soldier_TL_f: B_Soldier_TL_F {
	macro_standard
	macro_uniform_CU_vest
	macro_linked_4("V_PlateCarrierGL_rgr","H_HelmetIA_wdl","NVGoggles_OPFOR","ItemGPS")
	weapons[] = {"arifle_SPAR_01_GL_blk_ARCO_Pointer_F","Binocular",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ARCO_Pointer_F","Binocular",macro_weapons_base};
	magazines[] = {macro_mags_base,macro_mags_4("30Rnd_556x45_Stanag"),macro_mags_2("30Rnd_556x45_Stanag_Tracer_Red"),macro_mags_6("1Rnd_HE_Grenade_shell"),macro_mags_2("1Rnd_Smoke_Grenade_shell"),"SmokeShellBlue","SmokeShellOrange","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	respawnMagazines[] = {macro_mags_base,macro_mags_4("30Rnd_556x45_Stanag"),macro_mags_2("30Rnd_556x45_Stanag_Tracer_Red"),macro_mags_6("1Rnd_HE_Grenade_shell"),macro_mags_2("1Rnd_Smoke_Grenade_shell"),"SmokeShellBlue","SmokeShellOrange","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
};

class B_soldier_M_F;
class adv_wdl_soldier_M_f: B_soldier_M_F {
	macro_standard
	macro_uniform_CU
	macro_linked_standard("V_PlateCarrier1_rgr")
	weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",macro_weapons_base};
	magazines[] = {macro_mags_8("20Rnd_762x51_Mag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_8("20Rnd_762x51_Mag"),macro_mags_base};
};

class B_soldier_LAT_F;
class adv_wdl_soldier_LAT_f: B_soldier_LAT_F {
	macro_standard
	macro_uniform_CU
	macro_linked_standard("V_PlateCarrier2_rgr")
	weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_NLAW_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_NLAW_F",macro_weapons_base};
	magazines[] = {"NLAW_F",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {"NLAW_F",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_soldier_LAT2_F;
class adv_wdl_soldier_LAT2_f: B_soldier_LAT2_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier2_rgr")
	weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_MRAWS_green_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_MRAWS_green_F",macro_weapons_base};
	magazines[] = {"MRAWS_HEAT_F",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {"MRAWS_HEAT_F",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_medic_F;
class adv_wdl_medic_f: B_medic_F {
	macro_standard
	macro_uniform_CU_tshirt
	macro_linked_standard("V_PlateCarrier2_rgr")
	backpack = "B_Kitbag_rgr_medic";
	weapons[] = {"arifle_SPAR_01_blk_Pointer_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_Pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_6("30Rnd_556x45_Stanag"),"SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green"};
	respawnMagazines[] = {macro_mags_6("30Rnd_556x45_Stanag"),"SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green"};
};

class B_soldier_repair_F;
class adv_wdl_soldier_repair_f: B_soldier_repair_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier1_rgr")
	weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),"SmokeShellBlue","SmokeShellOrange"};
	respawnMagazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),"SmokeShellBlue","SmokeShellOrange"};
};

class B_soldier_exp_F;
class adv_wdl_soldier_exp_f: B_soldier_exp_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrierGL_rgr")
	weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_3("APERSMine_Range_Mag")};
	respawnMagazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_3("APERSMine_Range_Mag")};
};

class B_Soldier_A_F;
class adv_wdl_soldier_a_f: B_soldier_A_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier1_rgr")
	backpack = "adv_wdl_Carryall_oli_Ammo";
	weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_12("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_12("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_Soldier_AT_F;
class adv_wdl_soldier_at_f: B_soldier_AT_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier1_rgr")
	backpack = "adv_wdl_Kitbag_rgr_AT";
	weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_B_Titan_short_tna_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_B_Titan_short_tna_F",macro_weapons_base};
	magazines[] = {"Titan_AT",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {"Titan_AT",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_Soldier_AA_F;
class adv_wdl_soldier_aa_f: B_soldier_AA_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier1_rgr")
	backpack = "adv_wdl_Kitbag_rgr_AA";
	weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_B_Titan_tna_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F","launch_B_Titan_tna_F",macro_weapons_base};
	magazines[] = {"Titan_AA",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {"Titan_AA",macro_mags_6("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_engineer_F;
class adv_wdl_engineer_f: B_engineer_F {
	macro_standard
	macro_uniform_CU_vest
	macro_linked_standard("adv_wdl_TacVest_F")
	backpack = "adv_wdl_Kitbag_rgr_Eng";
	weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_F",macro_weapons_base};
	magazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),"SmokeShellBlue","SmokeShellOrange"};
	respawnMagazines[] = {macro_mags_base,macro_mags_6("30Rnd_556x45_Stanag"),"SmokeShellBlue","SmokeShellOrange"};
};

class B_officer_F;
class adv_wdl_officer_f: B_officer_F {
	macro_standard
	macro_uniform_CU
	macro_linked_3("adv_wdl_TacVest_F","H_Beret_02","ItemGPS")
	weapons[] = {"arifle_SPAR_01_blk_ACO_F",macro_weapons_base};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_F",macro_weapons_base};
	magazines[] = {macro_mags_4("30Rnd_556x45_Stanag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_4("30Rnd_556x45_Stanag"),macro_mags_base};
};

class B_crew_F;
class adv_wdl_crew_f: B_crew_F {
	macro_standard
	macro_uniform_CU_I_ss
	macro_linked_3("adv_wdl_TacVest_F", "H_HelmetCrew_I", "NVGoggles_OPFOR")
	weapons[] = {"SMG_05_holo_F",macro_weapons_base};
	respawnWeapons[] = {"SMG_05_holo_F",macro_weapons_base};
	magazines[] = {macro_mags_6("30Rnd_9x21_Mag_SMG_02"),macro_mags_base};
	respawnMagazines[] = {macro_mags_6("30Rnd_9x21_Mag_SMG_02"),macro_mags_base};
};

class B_Pilot_F;
class adv_wdl_pilot_f: B_Pilot_F {
	macro_standard
	weapons[] = {"SMG_05_F","Throw","Put"};
	respawnWeapons[] = {"SMG_05_F","Throw","Put"};
	magazines[] = {macro_mags_4("30Rnd_9x21_Mag_SMG_02"),"SmokeShell","SmokeShellBlue","Chemlight_green"};
	respawnMagazines[] = {macro_mags_4("30Rnd_9x21_Mag_SMG_02"),"SmokeShell","SmokeShellBlue","Chemlight_green"};
};

class B_Helipilot_F;
class adv_wdl_helipilot_f: B_Helipilot_F {
	macro_standard
	macro_linked_3("adv_wdl_TacVest_F","H_PilotHelmetHeli_B","NVGoggles_OPFOR")
	weapons[] = {"SMG_05_ACO_F","Throw","Put"};
	respawnWeapons[] = {"SMG_05_ACO_F","Throw","Put"};
	magazines[] = {macro_mags_4("30Rnd_9x21_Mag_SMG_02"),"SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	respawnMagazines[] = {macro_mags_4("30Rnd_9x21_Mag_SMG_02"),"SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};

class B_helicrew_F;
class adv_wdl_helicrew_f: B_helicrew_F {
	macro_standard
	macro_linked_3("adv_wdl_TacVest_F","H_CrewHelmetHeli_B","NVGoggles_OPFOR")
	weapons[] = {"arifle_SPAR_01_blk_Holo_F","Throw","Put"};
	respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_F","Throw","Put"};
	magazines[] = {macro_mags_4("30Rnd_556x45_Stanag"),"SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	respawnMagazines[] = {macro_mags_4("30Rnd_556x45_Stanag"),"SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};

class B_HeavyGunner_F;
class adv_wdl_HeavyGunner_f: B_HeavyGunner_F {
	macro_standard
	macro_uniform_CU_I
	macro_linked_standard("V_PlateCarrier1_rgr")
	weapons[] = {"MMG_02_black_ARCO_LP_F",macro_weapons_base};
	respawnWeapons[] = {"MMG_02_black_ARCO_LP_F",macro_weapons_base};
	magazines[] = {macro_mags_3("130Rnd_338_Mag"),macro_mags_3("16Rnd_9x21_Mag"),"SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	respawnMagazines[] = {macro_mags_3("130Rnd_338_Mag"),macro_mags_3("16Rnd_9x21_Mag"),"SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

class B_Sharpshooter_F;
class adv_wdl_Sharpshooter_F: B_Sharpshooter_F {
	macro_standard
	macro_uniform_CU
	macro_linked_3("V_PlateCarrier2_rgr","H_HelmetIA_wdl","NVGoggles_OPFOR")
	weapons[] = {"srifle_DMR_03_AMS_LP_BI_F","Binocular",macro_weapons_base};
	respawnWeapons[] = {"srifle_DMR_03_AMS_LP_BI_F","Binocular",macro_weapons_base};
	magazines[] = {macro_mags_8("20Rnd_762x51_Mag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_8("20Rnd_762x51_Mag"),macro_mags_base};
};

class adv_wdl_Sharpshooter2_F: B_Sharpshooter_F {
	macro_standard
	displayName = "Sharpshooter (Mk14)";
	macro_uniform_CU_I
	macro_linked_3("V_PlateCarrier1_rgr","H_HelmetIA_wdl","NVGoggles_OPFOR")
	weapons[] = {"srifle_DMR_06_olive_AMS_BI_F","Binocular",macro_weapons_base};
	respawnWeapons[] = {"srifle_DMR_06_olive_AMS_BI_F","Binocular",macro_weapons_base};
	magazines[] = {macro_mags_8("20Rnd_762x51_Mag"),macro_mags_base};
	respawnMagazines[] = {macro_mags_8("20Rnd_762x51_Mag"),macro_mags_base};
};

class B_ghillie_lsh_F;
class adv_wdl_ghillie_lsh_F: B_ghillie_lsh_F {
	macro_standard
	macro_linked_3("V_Chestrig_rgr","NVGoggles_OPFOR","ItemGPS")
	weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Put","Throw","Rangefinder"};
	respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Put","Throw","Rangefinder"};
};
class B_ghillie_sard_F;
class adv_wdl_ghillie_sard_F: B_ghillie_sard_F {
	macro_standard
	macro_linked_3("V_Chestrig_rgr","NVGoggles_OPFOR","ItemGPS")
	weapons[] = {"srifle_LRR_LRPS_F","hgun_P07_snds_F","Put","Throw","Rangefinder"};
	respawnWeapons[] = {"srifle_LRR_LRPS_F","hgun_P07_snds_F","Put","Throw","Rangefinder"};
};
class B_T_ghillie_tna_F;
class adv_wdl_ghillie_tna_F: B_T_ghillie_tna_F {
	macro_standard
	macro_linked_3("V_Chestrig_rgr","NVGoggles_OPFOR","ItemGPS")
	weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Put","Throw","Rangefinder"};
	respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Put","Throw","Rangefinder"};
};