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
	class WeaponSlotsInfo;
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	
	class hlc_G36_base;
	class hlc_rifle_G36A1 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"};
	};
	class hlc_rifle_G36A1AG36 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"};
	};	
	class hlc_rifle_G36C : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"};
	};	
	class hlc_rifle_G36V : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"};
	};	
	class hlc_rifle_G36VAG36 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"};
	};
};
