class CfgPatches
{
    class adv_aceGogglesNoTint_rhsusaf
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {"ace_goggles","ace_compat_rhs_usf3","adv_aceGogglesNoTint"};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define NoTint	ACE_Color[] = {0,0,0};\
				ACE_TintAmount = 0;

class CfgGlasses {
    class G_Combat;
    class rhs_ess_black: G_Combat {
        NoTint
    };
    class rhs_googles_black: G_Combat {
        NoTint
    };
    class rhs_googles_clear: G_Combat {
        NoTint
    };
    class rhs_googles_orange: G_Combat {
        NoTint
    };
    class rhs_googles_yellow: G_Combat {
        NoTint
    };
    class rhsusf_oakley_goggles_base: G_Combat {
        NoTint
    };
    class rhsusf_oakley_goggles_blk: rhsusf_oakley_goggles_base {
        NoTint
    };
    class rhsusf_oakley_goggles_clr: rhsusf_oakley_goggles_base {
        NoTint
    };
    class rhsusf_oakley_goggles_ylw: rhsusf_oakley_goggles_base {
        NoTint
    };
    class rhsusf_shemagh_gogg_base: G_Combat {
        NoTint
    };
    class rhsusf_shemagh2_gogg_base: G_Combat {
        NoTint
    };
	class rhsusf_shemagh_base: G_Combat {
        NoTint
    };
    class rhsusf_shemagh2_base: G_Combat {
        NoTint
    };
};