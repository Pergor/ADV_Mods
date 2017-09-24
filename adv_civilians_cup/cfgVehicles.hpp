#define standard_values author = "[SeL] Belbo";\
	scope = 2;\
	scopeCurator = 2;\
	side = 3;\
	
#define standard_values_tk_men faction = "CUP_C_TK";\
	vehicleClass = "adv_civilians_cup_tk_men";\
	genericNames = "TakistaniMen";\
	faceType = "Man_A3";\
	identityTypes[] = {"Head_TK", "LanguagePER_F", "G_IRAN_default"};\
	modelsides[] = {3,2,1,0};\
	model = "\A3\Characters_F\Civil\c_poloshirt";\
	hiddenSelections[] = {"Camo", "insignia"};\
	hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};\
	headgearList[] = { "", 0.2, "CUP_H_TKI_Lungee_Open_01",0.2,"CUP_H_TKI_Lungee_Open_02",0.2,"CUP_H_TKI_Lungee_Open_03",0.2,"CUP_H_TKI_Lungee_Open_04",0.2,"CUP_H_TKI_Lungee_Open_05",0.2,"CUP_H_TKI_Lungee_Open_06",0.2,"CUP_H_TKI_Pakol_1_01",0.2,"CUP_H_TKI_Pakol_1_03",0.2,"CUP_H_TKI_Pakol_1_04",0.2,"CUP_H_TKI_Pakol_1_05",0.2,"CUP_H_TKI_Pakol_1_06",0.2,"CUP_H_TKI_Pakol_2_01",0.2,"CUP_H_TKI_Pakol_2_02",0.2,"CUP_H_TKI_Pakol_2_03",0.2,"CUP_H_TKI_Pakol_2_04",0.2,"CUP_H_TKI_Pakol_2_05",0.2,"CUP_H_TKI_Pakol_2_06",0.2,"CUP_H_TKI_SkullCap_01",0.2,"CUP_H_TKI_SkullCap_02",0.2,"CUP_H_TKI_SkullCap_03",0.2,"CUP_H_TKI_SkullCap_04",0.2,"CUP_H_TKI_SkullCap_05",0.2,"CUP_H_TKI_SkullCap_06",0.2 };\
	class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};" };\
	Items[] = {"FirstAidKit"};\
	RespawnItems[] = {"FirstAidKit"};\
	linkedItems[] = {"ItemWatch"};\
	respawnLinkedItems[] = {"ItemWatch"};

class CfgVehicles {

	class Civilian;
	class Civilian_F : Civilian {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};
	class C_man_1: Civilian_F {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};
	class adv_civ_tk_1: C_man_1 {
		standard_values
		standard_values_tk_men
		displayName = "Takistani 1";
		uniformClass = "CUP_O_TKI_Khet_Partug_01";
	};
	class adv_civ_tk_1_j: adv_civ_tk_1 {
		displayName = "Takistani 1 /w jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
	};
	class adv_civ_tk_2: adv_civ_tk_1 {
		displayName = "Takistani 2";
		uniformClass = "CUP_O_TKI_Khet_Partug_02";
	};
	class adv_civ_tk_2_j: adv_civ_tk_2 {
		displayName = "Takistani 2 /w jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
	};
	class adv_civ_tk_3: adv_civ_tk_1 {
		displayName = "Takistani 3";
		uniformClass = "CUP_O_TKI_Khet_Partug_03";
	};
	class adv_civ_tk_3_j: adv_civ_tk_3 {
		displayName = "Takistani 3 /w jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_06","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_06","ItemWatch"};
	};
	class adv_civ_tk_4: adv_civ_tk_1 {
		displayName = "Takistani 4";
		uniformClass = "CUP_O_TKI_Khet_Partug_05";
	};
	class adv_civ_tk_4_j: adv_civ_tk_4 {
		displayName = "Takistani 4 /w jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_04","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_04","ItemWatch"};
	};
	class adv_civ_tk_5: adv_civ_tk_1 {
		displayName = "Takistani 5";
		uniformClass = "CUP_O_TKI_Khet_Partug_06";
	};
	class adv_civ_tk_5_j: adv_civ_tk_5 {
		displayName = "Takistani 5 /w jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
	};
	class adv_civ_tk_6: adv_civ_tk_1 {
		displayName = "Takistani 6";
		uniformClass = "CUP_O_TKI_Khet_Partug_07";
	};
	class adv_civ_tk_6_j: adv_civ_tk_6 {
		displayName = "Takistani 6 w/jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_05","ItemWatch"};
	};
	class adv_civ_tk_7: adv_civ_tk_1 {
		displayName = "Takistani 7";
		uniformClass = "CUP_O_TKI_Khet_Partug_08";
	};
	class adv_civ_tk_7_j: adv_civ_tk_7 {
		displayName = "Takistani 7 /w jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_04","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_04","ItemWatch"};
	};
	class adv_civ_tk_8: adv_civ_tk_1 {
		displayName = "Takistani 8";
		uniformClass = "CUP_O_TKI_Khet_Jeans_01";
	};
	class adv_civ_tk_8_j: adv_civ_tk_8 {
		displayName = "Takistani 8 /w jacker";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_06","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_06","ItemWatch"};
	};
	class adv_civ_tk_9: adv_civ_tk_1 {
		displayName = "Takistani 9";
		uniformClass = "CUP_O_TKI_Khet_Jeans_03";
	};
	class adv_civ_tk_9_j: adv_civ_tk_9 {
		displayName = "Takistani 9 w/ jacket";
		linkedItems[] = {"CUP_V_OI_TKI_Jacket1_06","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_06","ItemWatch"};
	};
	class adv_civ_tk_10: adv_civ_tk_1 {
		displayName = "Takistani Village Elder";
		icon = "iconManOfficer";
		uniformClass = "CUP_O_TKI_Khet_Partug_04";
		headgearList[] = { "CUP_H_TKI_Lungee_Open_03", 1 };
		attendant = 1;
		linkedItems[] = {"ItemWatch"};
		respawnLinkedItems[] = {"ItemWatch"};
	};
};
