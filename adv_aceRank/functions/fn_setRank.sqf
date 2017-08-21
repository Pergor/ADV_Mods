/*
ADV-aceRank - by Belbo
*/

_this spawn {
	params ["_target","_newRank"];
	
	private _targetName = name _target;
	private _message = format [localize "STR_ADV_ACERANK_MESSAGE",_targetName];
	private _result = [_message, localize "STR_ADV_ACERANK_CONFIRMATION", true, true] call BIS_fnc_guiMessage;

	waitUntil {sleep 0.2; !isNil "_result"};
		
	if (_result) exitWith {
	
		//set the new rank:
		[_target,_newRank] remoteExecCall ["setRank", 0, true];
		
		//show target new rank
		if !(local _target) then {
			["adv_aceRank_evh_show", [format [localize "STR_ADV_ACERANK_SHOW",_newRank]], _target] call CBA_fnc_targetEvent;
		};
		
		//short sleep:
		sleep 0.5;
		
		//apply new rank:
		private _insigniaFunction = missionnamespace getVariable ["adv_fnc_insignia",nil];
		[_target] call _insigniaFunction;
	
	};
	
};