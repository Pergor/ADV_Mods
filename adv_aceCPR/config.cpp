class CfgPatches
{
    class adv_aceCPR
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.68;
        requiredAddons[] = {
			"ace_medical"
		};
		version = "1.21";
		versionStr = "1.21";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_aceCPR {
		tag = "adv_aceCPR";
		class init {
			file = "adv_aceCPR\functions";
			class action {};
			class addTime {};
			class init { postInit = 1; };
			class canCPR {};
			class CPR {};
			class CPR_Local {};
			class getBloodLoss {};
		};
	};
};

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			callbackSuccess = "adv_aceCPR_fnc_action";
		};
	};
};