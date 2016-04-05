class CfgPatches
{
    class adv_radioheadset
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {};
		version = "1.0";
		versionStr = "1.0";
		author[] = {"[SeL] Belbo // Adrian"};
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_radioheadset {
		tag = "adv_radioheadset";
		class init {
			file = "adv_radioheadset\functions";
			class init {
				postInit = 1;
			};
			class radioheadset {};
		};
	};
};