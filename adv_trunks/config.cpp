class CfgPatches
{
    class adv_trunks
    {
        units[] = {
			"adv_trunk_suitcase_f"
			,"adv_trunk_metalcase_01_f"
			,"adv_trunk_metalcase_02_f"
			,"adv_trunk_plasticcase_01_f"
			,"adv_trunk_plasticcase_01_grey_f"
			,"adv_trunk_plasticcase_02_f"
			,"adv_trunk_plasticcase_02_grey_f"
		};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Structures_F_Items_Luggage"
			,"A3_Weapons_F_Ammoboxes"
		};
		version = "1.0.0";
		versionStr = "1.0.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

#define MACRO_LOAD(MLOAD,MWEAP,MMAGS,MBPS)	maximumLoad = MLOAD;\
	transportMaxWeapons = MWEAP;\
	transportMaxMagazines = MMAGS;\
	transportMaxBackpacks = MBPS;

class CfgVehicles {
	class NATO_Box_Base;

	class adv_trunk_suitcase_f: NATO_Box_Base {
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
		author = "Spezialeinheit Luchs";
		displayName = "[ADV] Suitcase";
		model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Suitcase_F.jpg";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		destrType = "DestructNo";
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Storage";
		vehicleClass = "Container";
		scope = 2;
		curatorScope = 2;
		mapSize = 1.81;
		MACRO_LOAD(300,2,8,1)
		ace_cargo_size = 1;
	};
	
	class adv_trunk_metalcase_01_f: adv_trunk_suitcase_f {
		displayName = "[ADV] Metal Case (Small)";
		model = "\A3\Structures_F_Heli\Items\Luggage\MetalCase_01_small_F.p3d";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_MetalCase_01_small_F.jpg";
		MACRO_LOAD(400,2,12,2)
	};
	class adv_trunk_metalcase_02_f: adv_trunk_suitcase_f {
		displayName = "[ADV] Metal Case (Medium)";
		model = "\A3\Structures_F_Heli\Items\Luggage\MetalCase_01_medium_F.p3d";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_MetalCase_01_medium_F.jpg";
		MACRO_LOAD(1000,6,32,6)
	};
	
	class adv_trunk_plasticcase_01_f: adv_trunk_suitcase_f {
		displayName = "[ADV] Plastic Case (Small)";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PlasticCase_01_small_F.jpg";
		hiddenselections[] = {"camo"};
		hiddenselectionsTextures[] = {"a3\structures_f_heli\items\luggage\data\plasticcase_01_co.paa"};
		MACRO_LOAD(300,1,8,1)
	};
	class adv_trunk_plasticcase_01_grey_f: adv_trunk_plasticcase_01_f {
		displayName = "[ADV] Plastic Case (Small, Grey)";
		hiddenSelectionsTextures[] = {"a3\Props_F_Orange\Humanitarian\Supplies\Data\PlasticCase_01_gray_CO.paa"};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_PlasticCase_01_small_gray_F.jpg";
	};
	
	class adv_trunk_plasticcase_02_f: adv_trunk_plasticcase_01_f {
		displayName = "[ADV] Plastic Case (Medium)";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		hiddenselectionsTextures[] = {"a3\structures_f_heli\items\luggage\data\plasticcase_01_co.paa"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PlasticCase_01_medium_F.jpg";
		MACRO_LOAD(600,2,12,2)
	};
	class adv_trunk_plasticcase_02_grey_f: adv_trunk_plasticcase_02_f {
		displayName = "[ADV] Plastic Case (Medium, Grey)";
		hiddenSelectionsTextures[] = {"a3\Props_F_Orange\Humanitarian\Supplies\Data\PlasticCase_01_gray_CO.paa"};
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_PlasticCase_01_medium_gray_F.jpg";
	};
};
