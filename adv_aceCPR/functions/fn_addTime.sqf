/*
ADV_aceCPR_fnc_addTime - by Belbo
*/

params ["_caller", "_target"];

private _inState = _target getVariable ["ace_medical_inReviveState",false];
private _reviveStartTime = _target getVariable ["ace_medical_reviveStartTime",nil];
private _timeAdded = 0;

//if target is in reviveState it will gain 15 additional seconds of revive time:
if (_inState) then {
	if (!isNil "_reviveStartTime") then {
		_timeAdded = _reviveStartTime + 15 + (random 5);
		_target setVariable ["ace_medical_reviveStartTime", _timeAdded min CBA_missionTime];
	};
};
_return = _target getVariable "ace_medical_reviveStartTime";

//diagnostics:
[_target,format ["added time was %1. New reviveStartTime was %2, with a difference to cba_missiontime of %3 seconds.",_timeAdded-_reviveStartTime, _return, (CBA_missionTime - _return)]] call adv_aceCPR_fnc_diag;

//return:
_return;