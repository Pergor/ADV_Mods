class CfgPatches
{
    class adv_configsVanilla
    {
        units[] = {
			"adv_Box_NATO_MMG_F"
			,"adv_Box_NATO_AT_F"
			,"adv_Box_NATO_AA_F"
			,"adv_Box_EAST_MMG_F"
			,"adv_Box_EAST_AT_F"
			,"adv_Box_EAST_AA_F"
			,"adv_Box_IND_MMG_F"
			,"adv_Box_IND_AT_F"
			,"adv_Box_IND_AA_F"
			,"I_APC_Wheeled_03_cannon_nt_F"
			,"O_APC_Wheeled_02_rcws_nt_F"
			,"O_T_APC_Wheeled_02_rcws_ghex_nt_F"
		};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Weapons_F"
			,"A3_Weapons_F_Machineguns_M200"
			,"A3_Weapons_F_Mark_Machineguns_M200"
			,"A3_Weapons_F_Exp_Machineguns_LMG_03"
			,"A3_Static_F_Mortar_01"
			,"A3_Static_F_Beta_Mortar_01"
			,"A3_Characters_F"
			,"A3_Supplies_F_Heli_Slingload"
			,"A3_Air_F_Heli_Heli_Transport_04"
			,"A3_Armor_F_Gamma_APC_Wheeled_03"
			,"A3_Armor_F_Beta_APC_Wheeled_02"
			,"A3_Armor_F_EPB_APC_Tracked_03"
		};
		version = "1.1.2";
		versionStr = "1.1.2";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

class cfgFunctions {
	class adv_configsVanilla {
		tag = "adv_configsVanilla";
		class init
		{
			file = "adv_configsVanilla\functions";
			class mortarFlare {};
		};
	};
};

class cfgMagazines {
	class 200Rnd_65x39_cased_Box_Tracer;
	class 200Rnd_65x39_cased_Box_Tracer_red: 200Rnd_65x39_cased_Box_Tracer {
		displayName = "6.5 mm 200Rnd Tracer Box (Red)";
		descriptionShort = "6.5mm Tracer Red";
		ammo = "B_65x39_Caseless";
	};
	class 200Rnd_65x39_cased_Box_red: 200Rnd_65x39_cased_Box_Tracer_red {
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		displayName = "6.5 mm 200Rnd Box Reload Tracer (Red)";
		tracersEvery = 5;
		lastRoundsTracer = 3;
	};
};

//thanks to RAGC Halifax for the cfgCloudlets patch!
class CfgCloudlets
{
	class SmokeShellWhiteSmall;
	class ragc_mortar_smoke: SmokeShellWhiteSmall
	{
		animationSpeedCoef=0.75;
		colorCoef[] = {"colorR", "colorG", "colorB", 3};
		sizeCoef = 3;
		//interval = 0.08;
		interval = 0.04;
		lifeTime = 40;
		moveVelocity[] = {0,0.1,0};
		weight = 6.3;
		volume = 6;
	};
};

class ragc_mortar_effect_smoke
{
	class SmokeShellWhite
	{
		type = "ragc_mortar_smoke";
		simulation = "particles";
		position[] = {0,0,0};
		intensity = 25;
		//interval = 0.08;
		interval = 0.03;
	};
};

class CfgAmmo {
	class FlareCore;
	class Flare_82mm_AMOS_White: FlareCore {
        intensity = 120000;
        flareSize = 18;
		timeToLive = 60;
		aimAboveTarget[] = {20,40,80,120,160,200,240};
		aimAboveDefault = 4;
	};
	
	class SmokeShell;
	class SmokeShellArty: SmokeShell
	{
		effectsSmoke = "ragc_mortar_effect_smoke";
		timeToLive = 200;
	};
	class ShotDeployBase;
	class Smoke_82mm_AMOS_White: ShotDeployBase
	{
		submunitionAmmo = "SmokeShellArty";
		effectsSmoke = "ragc_mortar_effect_smoke";
		timeToLive = 200;
	};

	/*
	class SmokeShell;
	class SmokeShellArty : SmokeShell {
		//effectsSmoke = "SmokeShellWhiteEffect";
		effectsSmoke = "SmokeShellWhiteArty";
		timeToLive = 90;
	};
	*/
};


class CfgWeapons
{
	/*
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	*/
	class Rifle_Long_Base_F;
	
	class LMG_Mk200_F: Rifle_Long_Base_F {
		magazines[] += {"200Rnd_65x39_cased_Box_red","200Rnd_65x39_cased_Box_Tracer_red","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag"};
	};
	
	class LMG_03_base_F: Rifle_Long_Base_F {
		magazines[] += {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
	/*
	class LRR_base_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};
	class srifle_LRR_F: LRR_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 308.75;
		};
	};
	
	class GM6_base_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};
	class srifle_GM6_F: GM6_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 253.8;
		};
	};
	*/
	/*
	class H_HelmetB;
	
	class H_PilotHelmetHeli_B: H_HelmetB {
		subItems[] = {"Integrated_NVG_F"};
	};
	class H_CrewHelmetHeli_B: H_HelmetB {
		subItems[] = {"Integrated_NVG_F"};
	};
	*/
	class H_PilotHelmetHeli_B;
	class H_CrewHelmetHeli_B;
	class H_PilotHelmetHeli_O;
	class H_CrewHelmetHeli_O;
	class H_PilotHelmetHeli_I;
	class H_CrewHelmetHeli_I;
	
	class H_PilotHelmetHeli_B_NVG: H_PilotHelmetHeli_B {
		displayName = "Heli Pilot Helmet NVG [NATO]";
		subItems[] = {"Integrated_NVG_F"};
	};	
	class H_CrewHelmetHeli_B_NVG: H_CrewHelmetHeli_B {
		displayName = "Heli Crew Helmet NVG [NATO]";
		subItems[] = {"Integrated_NVG_F"};
	};
	
	class H_PilotHelmetHeli_O_NVG: H_PilotHelmetHeli_O {
		displayName = "Heli Pilot Helmet NVG [CSAT]";
		subItems[] = {"Integrated_NVG_F"};
	};	
	class H_CrewHelmetHeli_O_NVG: H_CrewHelmetHeli_O {
		displayName = "Heli Crew Helmet NVG [CSAT]";
		subItems[] = {"Integrated_NVG_F"};
	};
	
	class H_PilotHelmetHeli_I_NVG: H_PilotHelmetHeli_I {
		displayName = "Heli Pilot Helmet NVG [AAF]";
		subItems[] = {"Integrated_NVG_F"};
	};	
	class H_CrewHelmetHeli_I_NVG: H_CrewHelmetHeli_I {
		displayName = "Heli Crew Helmet NVG [AAF]";
		subItems[] = {"Integrated_NVG_F"};
	};
};

class CfgVehicles {
	#include "boxes.hpp"
	#include "vehicles.hpp"

	class StaticWeapon;
	class StaticMortar: StaticWeapon{
		class Eventhandlers;
	};
	class Mortar_01_base_F: StaticMortar {
		class EventHandlers: EventHandlers {
			init = "params ['_target']; [_target] call adv_configsVanilla_fnc_mortarFlare;";
		};		
	};
};
