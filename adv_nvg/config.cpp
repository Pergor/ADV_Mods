class CfgPatches
{
    class adv_nvg
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.68;
        requiredAddons[] = {
			"cba_xeh"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_nvg {
		tag = "adv_nvg";
		class init {
			file = "adv_nvg\functions";
			class init {
				postInit = 1;
			};
		};
	};
};