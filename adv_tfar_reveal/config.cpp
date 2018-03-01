class CfgPatches
{
    class adv_tfar_reveal
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.68;
        requiredAddons[] = {};
		version = "1.0.1";
		versionStr = "1.0.1";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_tfar_reveal {
		tag = "adv_tfar_reveal";
		class init {
			file = "adv_tfar_reveal\functions";
			class init { postInit = 1; };
		};
	};
};