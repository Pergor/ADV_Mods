class CfgPatches
{
    class adv_aceCaptive
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.72;
        requiredAddons[] = {
			"ace_captives"
		};
		version = "1.0.1";
		versionStr = "1.0.1";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_aceCaptive {
		tag = "adv_aceCaptive";
		class init {
			file = "adv_aceCaptive\functions";
			class canEscortCaptive {};
			class changeAnim {};
			class doAnim {};
			class handleAnimChangedHandcuffed {};
			class init { postInit = 1; };
			class isCaptive {};
		};
	};
};

class cfgVehicles {
	
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class ACE_EscortCaptive {
					condition = "[_player, _target] call adv_aceCaptive_fnc_canEscortCaptive";
				};
				class adv_aceCaptive_down
				{
					displayName = "$STR_ADV_ACECAPTIVE_DOWN";
					condition = "[_target,'down'] call adv_aceCaptive_fnc_isCaptive";
					statement = "[_player,_target] call adv_aceCaptive_fnc_changeAnim";
					showDisabled = 0;
					priority = 0;
					distance = 5;
					//icon = "";
				};
				class adv_aceCaptive_up
				{
					displayName = "$STR_ADV_ACECAPTIVE_UP";
					condition = "[_target,'up'] call adv_aceCaptive_fnc_isCaptive";
					statement = "[_player,_target] call adv_aceCaptive_fnc_changeAnim";
					showDisabled = 0;
					priority = 0;
					distance = 5;
					//icon = "";
				};
			};
		};
	};
};