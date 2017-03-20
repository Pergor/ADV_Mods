/*
ADV_fnc_radioHeadset - by Belbo
*/

if (!hasInterface) exitWith {};

waitUntil { player == player };

params [
	["_unit", player, [objNull]]
];

if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) exitWith {

	_SRoff = ["SRoffSelfAction",("<t color=""#FF0000"">" + (localize "STR_ADV_SR_OFF") + "</t>"),"",{
	
		[call TFAR_fnc_activeSWRadio,false] call TFAR_fnc_radioOn;
		
	},{ call TFAR_fnc_haveSWRadio && ([call TFAR_fnc_activeSWRadio] call TFAR_fnc_radioOn) }] call ace_interact_menu_fnc_createAction;
	
	_SRon = ["SRonSelfAction",("<t color=""#00FF00"">" + (localize "STR_ADV_SR_ON") + "</t>"),"",{

		[call TFAR_fnc_activeSWRadio,true] call TFAR_fnc_radioOn;
		
	},{ call TFAR_fnc_haveSWRadio && !([call TFAR_fnc_activeSWRadio] call TFAR_fnc_radioOn) }] call ace_interact_menu_fnc_createAction;
	
	[_unit , 1, ["ACE_SelfActions","ACE_Equipment"],_SRoff] call ace_interact_menu_fnc_addActionToObject;
	[_unit , 1, ["ACE_SelfActions","ACE_Equipment"],_SRon] call ace_interact_menu_fnc_addActionToObject;	

	_LRoff = ["LRoffSelfAction",("<t color=""#FF0000"">" + (localize "STR_ADV_LR_OFF") + "</t>"),"",{
	
		[call TFAR_fnc_activeLRRadio,false] call TFAR_fnc_radioOn;
		
	},{ call TFAR_fnc_haveLRRadio && ([call TFAR_fnc_activeLRRadio] call TFAR_fnc_radioOn) }] call ace_interact_menu_fnc_createAction;
	
	_LRon = ["LRonSelfAction",("<t color=""#00FF00"">" + (localize "STR_ADV_LR_ON") + "</t>"),"",{

		[call TFAR_fnc_activeLRRadio,true] call TFAR_fnc_radioOn;
		
	},{ call TFAR_fnc_haveLRRadio && !([call TFAR_fnc_activeLRRadio] call TFAR_fnc_radioOn) }] call ace_interact_menu_fnc_createAction;
	
	[_unit , 1, ["ACE_SelfActions","ACE_Equipment"],_LRoff] call ace_interact_menu_fnc_addActionToObject;
	[_unit , 1, ["ACE_SelfActions","ACE_Equipment"],_LRon] call ace_interact_menu_fnc_addActionToObject;
};

false;