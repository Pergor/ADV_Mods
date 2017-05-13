/*
ADV_aceCPR_fnc_CPR - by Belbo
*/

params [
	["_caller", player, [objNull]]
	,["_target", objNull, [objNull]]
];

//diagnostics:
[_target,"custom CPR is being executed"] call adv_aceCPR_fnc_diag;

[_target, "activity", localize "STR_ADV_ACECPR_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_ADV_ACECPR_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

//execute custom CPR local to the unit:
call {
	if (local _target) exitWith {
		//cpr call:
		["adv_aceCPR_evh_CPR_Local", [_caller, _target]] call CBA_fnc_localEvent;
	};

	//cpr call:
	["adv_aceCPR_evh_CPR_Local", [_caller, _target], _target] call CBA_fnc_targetEvent;
};