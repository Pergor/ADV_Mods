class CfgPatches
{
    class adv_aceGogglesNoTint_bwmod
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {"ace_goggles","bwa3_comp_ace","adv_aceGogglesNoTint"};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define NoTint	ACE_Color[] = {0,0,0};\
				ACE_TintAmount = 0;

class CfgGlasses {
    class None;
    class BWA3_G_Combat_Orange: None {
        NoTint
    };

    class BWA3_G_Combat_Black: None {
        NoTint
    };

    class BWA3_G_Combat_Clear: None {
        NoTint
    };
};