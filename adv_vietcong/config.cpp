class CfgPatches 
{
    class adv_vietcong 
	{
        units[] = 
		{
			"adv_opf_vietcong_infantry_TL",
			"adv_opf_vietcong_infantry_AR",
			"adv_opf_vietcong_infantry_AT",
			"adv_opf_vietcong_infantry_medic",
			"adv_opf_vietcong_infantry_soldier"
        };
        requiredVersion = 0.60;
        requiredAddons[] = 
		{
            A3_Soft_F,
            A3_Characters_F,
			rhs_main,
			lop_main
        };
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFactionClasses
{
	class adv_faction_vietcong 
	{
		displayName = "ADV - VietCong";
		priority = 1;
		side = 0;
		icon = "\adv_vietcong\flag_nlf.paa";
	};
};

class CfgVehicleClasses 
{
	class adv_opf_vietcong 
	{
		displayName = "Men";
		priority = 2;
	};	
};

class CfgVehicles 
{
	//backpacks
	class rhs_sidor;
	class rhs_rpg_empty;
	
	class adv_vietcong_medicPack_full: rhs_sidor 
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
	
	class adv_vietcong_ARPack_full: rhs_sidor 
	{
        scope = 1;
        class TransportMagazines
        {
			class _xx_AR_rounds 
			{
				magazine = "rhs_100Rnd_762x54mmR"; count = 2;
			};
        };
    };
	
	class adv_vietcong_rhs_rpg_full: rhs_rpg_empty 
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rpg_rockets 
			{
				magazine = "rhs_rpg7_PG7VL_mag"; count = 2;
			};
		};
	};
	
	
	//units
	class SoldierEB;
	
	class O_Soldier_base_F: SoldierEB
	{
		class EventHandlers;
	};
	
	class adv_opf_vietcong_infantry_base_F: O_Soldier_base_F 
	{
		author = "[SeL] Belbo // Adrian";
		
		scope = 0;
		side = 0;
	
		faction = "adv_faction_vietcong";
		vehicleClass = "adv_opf_vietcong";	
		
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d"
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};

		identityTypes[]=
		{
			"LanguagePER_F",
			"Head_Asian"
		};
		faceType = "Man_A3";
		genericNames="AsianMen";

		headgearList[] =
		{
			"LOP_H_SSh68Helmet_BLK", 0.7,
			"LOP_H_SSh68Helmet_OLV", 0.7,
			"H_Bandanna_cbr", 0.3,
			"H_Bandanna_gry", 0.3,
			"rds_worker_cap2", 0.2
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	
	class adv_opf_vietcong_infantry_TL : adv_opf_vietcong_infantry_base_F 
	{
		author = "[SeL] Belbo // Adrian";
		scope = 2;
		
		displayName = "Team Leader";
		icon = "iconManLeader";
		canDeactivateMines = true;
		
		uniformClass = "LOP_U_PMC_Fatigue_02";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm_gp25", "RH_mak", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "RH_mak", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
	
		linkedItems[] = {"V_BandollierB_cbr", "rds_worker_cap2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "rds_worker_cap2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};

	class adv_opf_vietcong_infantry_AR : adv_opf_vietcong_infantry_base_F 
	{
		author = "[SeL] Belbo // Adrian";
		scope = 2;

		displayName = "Autorifleman";
		icon = "iconManMG";
		canDeactivateMines = true;
		
		uniformClass = "LOP_U_ISTS_Fatigue_01";

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "RH_mak", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "RH_mak", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
	
		linkedItems[] = {"V_BandollierB_cbr", "LOP_H_SSh68Helmet_OLV", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "LOP_H_SSh68Helmet_OLV", "ItemMap", "ItemCompass", "ItemWatch"};
		
		backpack = "adv_vietcong_ARPack_full";
	};
	
	class adv_opf_vietcong_infantry_medic : adv_opf_vietcong_infantry_base_F 
	{
		author = "[SeL] Belbo // Adrian";
		scope = 2;
	
		displayName = "Medic";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
		canDeactivateMines = true;
		
		uniformClass = "LOP_U_ISTS_Fatigue_03";

		Items[] = {};
		RespawnItems[] = {};
		
		weapons[] = {"rhs_weap_akm", "RH_mak", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "RH_mak", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"};
	
		linkedItems[] = {"rhs_vest_commander", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vest_commander", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		
		backpack = "adv_vietcong_medicPack_full";
	};

	class adv_opf_vietcong_infantry_AT : adv_opf_vietcong_infantry_base_F 
	{
		author = "[SeL] Belbo // Adrian";
		scope = 2;
		
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		canDeactivateMines = true;
		
		uniformClass = "LOP_U_ISTS_Fatigue_03";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "RH_mak", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "RH_mak", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"};
	
		linkedItems[] = {"V_BandollierB_rgr", "H_Bandanna_gry", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "H_Bandanna_gry", "ItemMap", "ItemCompass", "ItemWatch"};
		
		backpack = "adv_vietcong_rhs_rpg_full";
	};

	class adv_opf_vietcong_infantry_soldier : adv_opf_vietcong_infantry_base_F 
	{
		author = "[SeL] Belbo // Adrian";
		scope = 2;
	
		displayName = "Rifleman";
		canDeactivateMines = true;
		
		uniformClass = "LOP_U_ISTS_Fatigue_03";

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "RH_mak", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "RH_mak", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"};
		respawnMagazines[] = {"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_tracer"};
	
		linkedItems[] = {"rhs_vest_commander", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vest_commander", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch"};
		
		backpack = "rhs_sidor";
	};
};

class CfgGroups
{
	class East
	{
		class adv_opf_vietcong_groups
		{
			name="ADV - VietCong";
			class adv_opf_vietcong_groups_infantry
			{
				name="Infantry";
				aliveCategory="Infantry";
				class adv_opf_vietcong_groups_squad
				{
					name="Squad (8 men)";
					faction="adv_faction_vietcong";
					side=0;
					rarityGroup=0.75;
					class Unit0
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_AR";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_medic";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_AT";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class adv_opf_vietcong_groups_team
				{
					name="Heavy Team (4 men)";
					faction="adv_faction_vietcong";
					side=0;
					rarityGroup=0.75;
					class Unit0
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_AR";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_AT";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class adv_opf_vietcong_groups_patrol
				{
					name="Patrol Team (4 men)";
					faction="adv_faction_vietcong";
					side=0;
					rarityGroup=0.75;
					class Unit0
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_AR";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class adv_opf_vietcong_groups_regular
				{
					name="Regular Team (4 men)";
					faction="adv_faction_vietcong";
					side=0;
					rarityGroup=0.75;
					class Unit0
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_TL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="adv_opf_vietcong_infantry_soldier";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};