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