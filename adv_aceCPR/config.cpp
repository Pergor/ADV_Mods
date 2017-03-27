class CfgPatches
{
    class adv_aceCPR
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {
			"ace_medical"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_aceCPR {
		tag = "adv_aceCPR";
		class init {
			file = "adv_aceCPR\functions";
			class addTime {};
			class init {};
			class canCPR {};
			class CPR {};
			class CPR_Local {};
		};
	};
};

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			callbackSuccess = "adv_aceCPR_fnc_init";
		};
	};
};

/*
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Torso
			{
				class adv_aceCPR_CPR
				{
					displayName = localize STR_ADV_ACECPR_CPR;
					condition = "[_target] call adv_aceCPR_fnc_canCPR";
					statement = "[_target,_player] call adv_aceCPR_fnc_CPR";
					showDisabled = 0;
					priority = 3;
					enableInside = 1;
					distance = 2.0;
					//icon = "\bridge_punch\ui\knock.paa";
				};
			};
		};
	};
};
*/