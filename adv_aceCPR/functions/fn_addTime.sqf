/*
ADV_aceCPR_fnc_addTime - by Belbo
*/

params ["_target"];

private _inState = _target getVariable ["ace_medical_inReviveState",false];

//if target is in reviveState it will gain 15 additional seconds of revive time:
if (_inState) then {
	private _reviveStartTime = _target getVariable ["ace_medical_reviveStartTime",0];
	if (_reviveStartTime > 0) then {
		_target setVariable ["ace_medical_reviveStartTime", (_reviveStartTime + 15) min CBA_missionTime];
	};
};

_return = _target getVariable "ace_medical_reviveStartTime";
//diagnostics:
if (adv_aceCPR_diag) then {
	diag_log (format ["adv_aceCPR - New reviveStartTime was %1, with a difference to cba_missiontime of %2 seconds.",_return, (CBA_missionTime - _return)]);
};
//return:
_return;