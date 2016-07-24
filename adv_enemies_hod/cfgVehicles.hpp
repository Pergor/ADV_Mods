#define standard_values author = "[SeL] Belbo";\
						scope = 2;\
						side = 0;\
						faction = "adv_faction_enemies_hod";\
						vehicleClass = "adv_vehicleclass_enemies_hod";\
						model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";\
						modelSides[]={0,1,2,3};\
						hiddenSelections[] = {"Camo", "insignia"};\
						hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};\
								identityTypes[]={"LanguagePER_F", "Head_African", "G_IRAN_default"};\
						faceType = "Man_A3";\
						genericNames="AfroMen";\
						nakedUniform="U_BasicBody";\
						headgearList[] = { "H_Bandanna_khk", 0.1, "H_Bandanna_sgg", 0.1, "H_Bandanna_blk", 0.1, "", 0.4 };\
						class EventHandlers: EventHandlers { init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; };

class CfgVehicles {
	class rhs_sidor;
	class adv_enemies_hod_medicPack_sidor: rhs_sidor
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

	class SoldierEB;
	class O_Soldier_base_F: SoldierEB
	{
		class EventHandlers;
	};
	
	class adv_hod_soldier_k98_1_f : O_Soldier_base_F {
		standard_values
		
		displayName = "Soldier 1 (K98)";
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_kar98k", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_kar98k", "Throw", "Put"};
		
		magazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k"};
		respawnMagazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k"};
	
		linkedItems[] = {"V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_k98_2_f : adv_hod_soldier_k98_1_f {
		displayName = "Soldier 2 (K98)";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
		linkedItems[] = {"V_TacChestrig_grn_F", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_k98_3_f : adv_hod_soldier_k98_1_f {
		displayName = "Soldier 3 (K98)";
		uniformClass = "U_I_C_Soldier_Para_5_F";		
		linkedItems[] = {"V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_k98_medic_f : adv_hod_soldier_k98_1_f {
		displayName = "Medic (K98)";
		backpack = "adv_enemies_hod_medicPack_sidor";
	};
	
	class adv_hod_soldier_m38_1_f : adv_hod_soldier_k98_1_f {
		displayName = "Soldier 1 (Mosin Nagant)";
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		
		weapons[] = {"rhs_weap_m38", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m38", "Throw", "Put"};
		
		magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
		respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
	
		linkedItems[] = {"V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_m38_2_f : adv_hod_soldier_m38_1_f {
		displayName = "Soldier 2 (Mosin Nagant)";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
		linkedItems[] = {"V_TacChestrig_grn_F", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_m38_3_f : adv_hod_soldier_m38_1_f {
		displayName = "Soldier 3 (Mosin Nagant)";
		uniformClass = "U_I_C_Soldier_Para_5_F";
		linkedItems[] = {"V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemWatch"};		
	};
	class adv_hod_soldier_m38_medic_f : adv_hod_soldier_m38_1_f {
		displayName = "Medic (M38)";
		backpack = "adv_enemies_hod_medicPack_sidor";
	};
	
	class adv_hod_soldier_mk14_1_f : adv_hod_soldier_k98_1_f {
		displayName = "Soldier 1 (MK14)";
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		
		weapons[] = {"srifle_DMR_06_olive_F", "Throw", "Put"};
		respawnWeapons[] = {"srifle_DMR_06_olive_F", "Throw", "Put"};
		
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	
		linkedItems[] = {"V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_mk14_2_f : adv_hod_soldier_mk14_1_f {
		displayName = "Soldier 2 (MK14)";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
		linkedItems[] = {"V_TacChestrig_grn_F", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	class adv_hod_soldier_mk14_3_f : adv_hod_soldier_mk14_1_f {
		displayName = "Soldier 3 (MK14)";
		uniformClass = "U_I_C_Soldier_Para_5_F";
		linkedItems[] = {"V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
	};
};
