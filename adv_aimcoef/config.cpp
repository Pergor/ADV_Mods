class CfgPatches
{
    class adv_aimcoef
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
	class adv_aimcoef {
		tag = "ADV_aimcoef";
		class init {
			file = "adv_aimcoef\functions";
			class init {
				postInit = 1;
			};
		};
	};
};