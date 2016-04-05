class CfgPatches
{
    class adv_dropLauncher
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
	class adv_dropLauncher {
		tag = "ADV_dropLauncher";
		class init {
			file = "adv_dropLauncher\functions";
			class init { postInit = 1; };
			class dropLauncher {};
			class loop {};
			class aceAction {};
		};
	};
};