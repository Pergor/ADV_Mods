#define standard_values author = "[SeL] Belbo";\
	scope = 2;\
	scopeCurator = 2;\
	side = 1;\
	modelsides[] = {3,2,1,0};\
	faction = "adv_faction_enemies_us80a";\
	vehicleClass = "Men";\
	nakedUniform="U_BasicBody";\
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";\
	hiddenSelections[] = {"Camo", "insignia"};\
	identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_casual"};\
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

#define standard_cfg_vehicle_a author = "[SeL] Belbo";\
	scope = 2;\
	curatorScope = 2;\
	scopeArsenal = 0;\
	side = 1;\
	faction = "adv_faction_enemies_us80a";\
	typicalCargo[] = { "adv_us80a_soldier_f" };

#define standard_cfg_vehicle_m author = "[SeL] Belbo";\
	scope = 2;\
	curatorScope = 2;\
	scopeArsenal = 0;\
	side = 1;\
	faction = "adv_faction_enemies_us80m";\
	typicalCargo[] = { "adv_us80m_soldier_f" };

class CfgVehicles {
	//general inheritances
	class CUP_B_AlicePack_Khaki;
	class adv_us80_medicPack: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportItems {
			item_xx(FirstAidKit,10);
			item_xx(MediKit,1);
		};
	};
	class adv_us80_ARPack_m60: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportMagazines {
			mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,3);
		};
	};
	class adv_us80_ARPack_m249: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportMagazines {
			mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,3);
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

	#include "\adv_enemies_us80\vehicles\veh_army.hpp"
	#include "\adv_enemies_us80\vehicles\veh_marines.hpp"
};
