class CfgPatches
{
    class adv_rhsLaunchers
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {"rhsusf_main"};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgWeapons {
	class Launcher_Base_F;

	class rhs_weap_smaw: Launcher_Base_F {
		ace_reloadlaunchers_enabled = 1;
	};	
	class rhs_weap_smaw_green: rhs_weap_smaw {
		ace_reloadlaunchers_enabled = 1;
	};
};