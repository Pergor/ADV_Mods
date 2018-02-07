class CfgPatches
{
    class adv_aceGogglesNoTint
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {"ace_goggles"};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define NoTint	ACE_Color[] = {0,0,0};\
				ACE_TintAmount = 0;

class CfgGlasses {
    class None {
        NoTint
    };

    class G_Lowprofile:None {
        NoTint
    };

    class G_Shades_Black:None {
        NoTint
    };

    class G_Shades_Blue:None{
        NoTint
    };

    class G_Shades_Green:None{
        NoTint
    };

    class G_Shades_Red:None{
        NoTint
    };

    class G_Spectacles:None{
        NoTint
    };

    class G_Spectacles_Tinted:None{
        NoTint
    };

    class G_Sport_Blackred:None{
        NoTint
    };

    class G_Sport_BlackWhite:None{
        NoTint
    };

    class G_Sport_Blackyellow:None{
        NoTint
    };

    class G_Sport_Checkered:None{
        NoTint
    };

    class G_Sport_Greenblack:None{
        NoTint
    };

    class G_Sport_Red:None{
        NoTint
    };

    class G_Squares:None{
        NoTint
    };

    class G_Squares_Tinted:None{
        NoTint
    };

    class G_Tactical_Black:None{
        NoTint
    };

    class G_Tactical_Clear:None{
        NoTint
    };

    class G_Aviator:None{
        NoTint
    };

    class G_Lady_Blue:None{
        NoTint
    };

    class G_Lady_Red:None{
        NoTint
    };

    class G_Lady_Dark:None{
        NoTint
    };

    class G_Lady_Mirror:None{
        NoTint
    };

    class G_Balaclava_blk;

    class G_Balaclava_lowprofile:G_Balaclava_blk {
        NoTint
    };

    class G_Bandanna_blk;
    class G_Bandanna_shades:G_Bandanna_blk {
        NoTint
    };
    class G_Bandanna_sport: G_Bandanna_shades {
        NoTint
    };
    class G_Bandanna_aviator: G_Bandanna_shades {
        NoTint
    };
};