class CfgPatches
{
    class adv_bobcat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Armor_F_Beta_APC_Tracked_01"
		};
		version = "1.0.0";
		versionStr = "1.0.0";
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

class CfgVehicles {
	#include "vehicles.hpp"
};
