class CfgPatches
{
    class adv_tfar_cfg
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_tfar_cfg {
		tag = "adv_tfar_cfg";
		class init {
			file = "adv_tfar_cfg\functions";
			class init { preInit = 1; };
		};
	};
};