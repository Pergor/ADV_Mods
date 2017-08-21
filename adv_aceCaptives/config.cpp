class CfgPatches
{
    class adv_aceCaptives
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
	class adv_aceCaptives {
		tag = "adv_aceCaptives";
		class init {
			file = "adv_aceCaptives\functions";
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
					condition = "[_player, _target] call adv_aceCaptives_fnc_canEscortCaptive";
				};
				class adv_aceCaptive_down
				{
					displayName = "$STR_ADV_ACECAPTIVES_DOWN";
					condition = "[_target,'down'] call adv_aceCaptives_fnc_isCaptive";
					statement = "[_player,_target] call adv_aceCaptives_fnc_changeAnim";
					showDisabled = 0;
					priority = 0;
					distance = 5;
					//icon = "";
				};
				class adv_aceCaptive_up
				{
					displayName = "$STR_ADV_ACECAPTIVES_UP";
					condition = "[_target,'up'] call adv_aceCaptives_fnc_isCaptive";
					statement = "[_player,_target] call adv_aceCaptives_fnc_changeAnim";
					showDisabled = 0;
					priority = 0;
					distance = 5;
					//icon = "";
				};
			};
		};
	};
};