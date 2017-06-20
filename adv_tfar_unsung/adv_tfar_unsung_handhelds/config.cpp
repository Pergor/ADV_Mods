#include "macros.hpp"
#include "radio_ids.hpp"

class CfgPatches
{
    class adv_tfar_unsung_handhelds
    {
        units[] = {};
        weapons[] = {
			"uns_tfar_anprc90"
			,"uns_tfar_anprc25"
		};
        requiredVersion = 1.70;
        requiredAddons[] = {
			"uns_weap_w"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFactionClasses
{
    class UNSUNG_W
    {
		personal_tf_faction_radio_api = "uns_tfar_anprc25";
		rifleman_tf_faction_radio_api = "uns_tfar_anprc90";
    };
};

class cfgWeapons
{
	class ItemRadio;

	class uns_tfar_anprc90: ItemRadio {
		author = "Belbo";
		displayName = "AN/PRC-90";
		descriptionShort = "AN/PRC-90 Emergency Radio 1km";
		scope = 1;
		scopeCurator = 1;
		model = "\uns_weap_w\prc_90\prc_90_ant.p3d";
		picture = "\uns_weap_w\prc_90\ico\w_anprc90_ca.paa";
		tf_prototype = 1;
		tf_range = 1000;
		tf_dialog = "rf7800str_radio_dialog";			//to be replaced
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital";
		tf_parent = "uns_tfar_anprc90";
		tf_additional_channel = 0;
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
	};
	TF_RADIO_IDS(uns_tfar_anprc90,AN/PRC-90)
	
	class uns_tfar_anprc25: ItemRadio {
		author = "Belbo";
		displayName = "AN/PRC-25";
		descriptionShort = "AN/PRC-25 General field radio 5km";
		scope = 1;
		scopeCurator = 1;
		model = "\uns_weap_w\prc_25\uns_prc_25.p3d";
		picture = "\uns_weap_w\prc_25\ico\w_anprc25_ca.paa";
		tf_prototype = 1;
		tf_range = 5000;
		tf_dialog = "anprc154_radio_dialog";			//to be replaced
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital";
		tf_parent = "uns_tfar_anprc25";
		tf_additional_channel = 0;
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
	};
	TF_RADIO_IDS(uns_tfar_anprc25,AN/PRC-25)	
};

class CfgVehicles
{
	class Item_Base_F;
	
	class item_uns_tfar_anprc90: Item_Base_F {
		scope = 1;
		scopeCurator = 1;
		displayName = "AN/PRC-90";
		author = "Belbo";
		vehicleClass = "Items";
		class TransportItems {
			macro_additem(uns_tfar_anprc90,1);
		};
	};
	
	class item_uns_tfar_anprc25: Item_Base_F {
		scope = 1;
		scopeCurator = 1;
		displayName = "AN/PRC-25";
		author = "Belbo";
		vehicleClass = "Items";
		class TransportItems {
			macro_additem(uns_tfar_anprc25,1);
		};
	};
};