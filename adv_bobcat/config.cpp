class CfgPatches
{
    class adv_bobcat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Armor_F_Beta_APC_Tracked_01"
			,"cba_xeh"
		};
		version = "1.0.1";
		versionStr = "1.0.1";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFunctions {
	class adv_bobcat {
		tag = "adv_bobcat";
		class init
		{
			file = "adv_bobcat\functions";
			class bobcat {};
		};
	};
};

class Extended_Init_EventHandlers {
	class B_APC_Tracked_01_CRV_F {
		class adv_bobcat_EVH_init {
			init = "_this call adv_bobcat_fnc_bobcat";
		};
	};
};

class CfgVehicles {
	#include "vehicles.hpp"
};
