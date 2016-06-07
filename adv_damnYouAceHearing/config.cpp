class CfgPatches
{
    class adv_damnYouAceHearing
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = { "ace_hearing" };
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgWeapons {

    class H_HelmetB;
    class H_HelmetCrew_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_CrewHelmetHeli_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetHeli_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetFighter_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_HelmetB_light: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB: H_HelmetB_plain_mcamo {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };
	
};