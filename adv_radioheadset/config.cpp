class CfgPatches
{
    class adv_radioheadset
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {};
		version = "1.21";
		versionStr = "1.21";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_radioheadset {
		tag = "adv_radioheadset";
		class init {
			file = "adv_radioheadset\functions";
			class init {
				postInit = 1;
			};
			class radioheadset {};
			class radioswitch {};
		};
	};
};

/*
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions {
			class ACE_Equipment {
				class adv_radioheadset_swOff
				{
					displayName = "Switch Handheld Off";
					condition = "call TFAR_fnc_haveSWRadio && !([call TFAR_fnc_activeSWRadio] call TFAR_fnc_radioOn)";
					statement = "[call TFAR_fnc_activeSWRadio,false] call TFAR_fnc_radioOn";
					showDisabled = 0;
					priority = 1;
                    priority = 0.1;
                    icon = QPATHTOF(UI\RangeCard_Icon.paa);
					exceptions[] = {"notOnMap"};
				};				
			};
		};
	};
};
*/