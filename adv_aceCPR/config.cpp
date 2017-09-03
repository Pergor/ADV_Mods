class CfgPatches
{
    class adv_aceCPR
    {
        units[] = {
			"adv_aceCPR_AEDItem"
		};
        weapons[] = {
			"adv_aceCPR_AED"
		};
        requiredVersion = 1.72;
        requiredAddons[] = {
			"ace_medical"
		};
		version = "1.4.3";
		versionStr = "1.4.3";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

class CfgFunctions {
	class adv_aceCPR {
		tag = "adv_aceCPR";
		class init {
			file = "adv_aceCPR\functions";
			class action {};
			class addTime {};
			class aedaction {};
			class aedsound {};
			class AED_Local {};
			class canCPR {};
			class CPR {};
			class CPR_Local {};
			class diag {};
			class getBloodLoss {};
			class init { postInit = 1; };
			class probability {};
		};
	};
};

class cfgWeapons {
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	
    class adv_aceCPR_AED: ACE_ItemCore {
        scope = 2;
        displayName = "Automated External Defibrillator";
        picture = "\adv_aceCPR\ui\defib.paa";
        descriptionShort = "Use to resuscitate player";
        descriptionUse = "Use to resuscitate player";
        class ItemInfo: InventoryItem_Base_F {
            mass = 30;
        };
	};
};

class cfgVehicles {
	class Item_Base_F;
	
	class adv_aceCPR_AEDItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Automated External Defibrillator";
        author = "[SeL] Belbo";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(adv_aceCPR_AED,1);
        };
	};
	
	//ace_medical_actions:
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_Torso {
				class CPR;
				class adv_aceCPR_AED: CPR {
					displayName = "Use Defibrillator";
					condition = "[_player, _target, 'body', 'Defibrillator'] call ace_medical_fnc_canTreatCached";
					statement = "[_player, _target, 'body', 'Defibrillator'] call ace_medical_fnc_treatment";
					exceptions[] = {""};
					icon = "\adv_aceCPR\ui\defib_action.paa";
				};
			};
			class ACE_MainActions {
				class Medical {
					class ACE_Torso {
						class CPR;
						class adv_aceCPR_AED: CPR {
							displayName = "Use Defibrillator";
							condition = "[_player, _target, 'body', 'Defibrillator'] call ace_medical_fnc_canTreatCached";
							statement = "[_player, _target, 'body', 'Defibrillator'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\adv_aceCPR\ui\defib_action.paa";
						};
					};
				};
			};
		};
	};
};

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			callbackSuccess = "adv_aceCPR_fnc_action";
			animationCaller = "AinvPknlMstpSnonWnonDr_medic0";
			animationPatientUnconsciousExcludeOn[] = {""};
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
		};
		class Defibrillator: CPR {
            displayName = "Automated External Defibrillator";
			displayNameProgress = "Using the defibrillator...";
			items[] = {"adv_aceCPR_AED"};
			treatmentTime = 8;
			requiredMedic = 1;
			callbackSuccess = "adv_aceCPR_fnc_aedaction";
			callbackProgress = "adv_aceCPR_fnc_aedsound";
			animationPatientUnconsciousExcludeOn[] = {""};			
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic3";
		};
	};
};