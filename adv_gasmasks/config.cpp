class CfgPatches
{
    class adv_gasmasks
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
	class adv_gasmasks {
		tag = "ADV_gasmasks";
		class init {
			file = "adv_gasmasks\functions";
			class breathing {};
			class init {
				postInit = 1;
			};
		};
	};
};