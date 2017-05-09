/*
ADV_aceCPR_fnc_CPR - by Belbo
*/

params [
	["_caller", player, [objNull]]
	,["_target", objNull, [objNull]]
];

//execute custom CPR local to the unit:
call {
	if (local _target) exitWith {
		//diagnostics:
		if (missionNamespace getVariable ["adv_aceCPR_diag",false]) then {
			["adv_aceCPR_evh_log", ["adv_aceCPR - Custom CPR is being executed"]] call CBA_fnc_localEvent;
		};
		//cpr call:
		["adv_aceCPR_evh_CPR_Local", [_caller, _target]] call CBA_fnc_localEvent;
	};
	
	//diagnostics:
	if (missionNamespace getVariable ["adv_aceCPR_diag",false]) then {
		["adv_aceCPR_evh_log", ["adv_aceCPR - Custom CPR is being executed"], _target] call CBA_fnc_targetEvent;
		["adv_aceCPR_evh_log", ["adv_aceCPR - Custom CPR is being executed"]] call CBA_fnc_localEvent;
	};
	//cpr call:
	["adv_aceCPR_evh_CPR_Local", [_caller, _target], _target] call CBA_fnc_targetEvent;
};