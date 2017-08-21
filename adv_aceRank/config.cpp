class CfgPatches
{
    class adv_aceRank
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.72;
        requiredAddons[] = {
			"ace_interaction"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_aceRank {
		tag = "adv_aceRank";
		class init {
			file = "adv_aceRank\functions";
			class init { postInit = 1; };
			class isHigher {};
			class setRank {};
		};
	};
};

class cfgVehicles {
	
	//ace_actions:
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class ACE_TeamManagement {
					class adv_aceRank_rank
					{
						displayName = "$STR_ADV_ACERANK_RANK";
						condition = "[_player,_target] call adv_aceRank_fnc_isHigher";
						statement = "";
						showDisabled = 0;
						priority = 2.1;
						distance = 5;
						icon = "\adv_aceRank\ui\adv_aceRank.paa";
						
						class adv_aceRank_private
						{
							displayName = "Private";
							condition = "[_player,_target,1] call adv_aceRank_fnc_isHigher";
							statement = "[_target,'PRIVATE'] call adv_aceRank_fnc_setRank";
							showDisabled = 0;
							priority = 2.6;
							distance = 5;
							icon = "\adv_aceRank\ui\private.paa";
						};
						class adv_aceRank_corporal
						{
							displayName = "Corporal";
							condition = "[_player,_target,2] call adv_aceRank_fnc_isHigher";
							statement = "[_target,'CORPORAL'] call adv_aceRank_fnc_setRank";
							showDisabled = 0;
							priority = 2.5;
							distance = 5;
							icon = "\adv_aceRank\ui\corporal.paa";
						};
						class adv_aceRank_sergeant
						{
							displayName = "Sergeant";
							condition = "[_player,_target,3] call adv_aceRank_fnc_isHigher";
							statement = "[_target,'SERGEANT'] call adv_aceRank_fnc_setRank";
							showDisabled = 0;
							priority = 2.4;
							distance = 5;
							icon = "\adv_aceRank\ui\sergeant.paa";
						};
						class adv_aceRank_lieutenant
						{
							displayName = "Lieutenant";
							condition = "[_player,_target,4] call adv_aceRank_fnc_isHigher";
							statement = "[_target,'LIEUTENANT'] call adv_aceRank_fnc_setRank";
							showDisabled = 0;
							priority = 2.3;
							distance = 5;
							icon = "\adv_aceRank\ui\lieutenant.paa";
						};
						class adv_aceRank_captain
						{
							displayName = "Captain";
							condition = "[_player,_target,5] call adv_aceRank_fnc_isHigher";
							statement = "[_target,'CAPTAIN'] call adv_aceRank_fnc_setRank";
							showDisabled = 0;
							priority = 2.2;
							distance = 5;
							icon = "\adv_aceRank\ui\captain.paa";
						};
						class adv_aceRank_major
						{
							displayName = "Major";
							condition = "[_player,_target,6] call adv_aceRank_fnc_isHigher";
							statement = "[_target,'MAJOR'] call adv_aceRank_fnc_setRank";
							showDisabled = 0;
							priority = 2.1;
							distance = 5;
							icon = "\adv_aceRank\ui\major.paa";
						};
					};
				};
			};
		};
	};
};