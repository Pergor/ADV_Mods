#define hlc_magazines "hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_MDIM_G36","hlc_30rnd_556x45_TDIM_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SPR_G36","hlc_30rnd_556x45_Tracers_G36","hlc_100rnd_556x45_EPR_G36"
#define bwmod_magazines "BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"

class CfgPatches
{
    class adv_hlcG36_bwmod
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_G36","bwa3_assaultrifles"};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	class UGL_F;
	
	class hlc_G36_base;
	class hlc_rifle_G36A1 : hlc_G36_base
	{
		magazines[] += {
			bwmod_magazines,hlc_magazines
		};
	};
	class hlc_rifle_G36A1AG36 : hlc_G36_base
	{
		magazines[] += {
			bwmod_magazines,hlc_magazines
		};
	};	
	class hlc_rifle_G36C : hlc_G36_base
	{
		magazines[] += {
			bwmod_magazines,hlc_magazines
		};
	};	
	class hlc_rifle_G36V : hlc_G36_base
	{
		magazines[] += {
			bwmod_magazines,hlc_magazines
		};
	};	
	class hlc_rifle_G36VAG36 : hlc_G36_base
	{
		magazines[] += {
			bwmod_magazines,hlc_magazines
		};
	};
};
