/*
ADV-aceSplint - by Belbo
*/

params ["_caller","_target","_selection"];

private _bps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];

private _hitPointArray = call {
	if ( (toLower _selection) in ["hand_l","hand_r"] ) exitWith {["HitHands",localize "STR_ADV_ACESPLINT_ARM"]};
	if ( (toLower _selection) in ["leg_l","leg_r"] ) exitWith {["HitLegs",localize "STR_ADV_ACESPLINT_LEG"]};
	[_selection,""]
};

_hitPointArray params ["_hitpoint","_str"];

[_target,_hitpoint,0,false] call ace_medical_fnc_setHitPointDamage;

if ( (toUpper _hitpoint) isEqualTo "HITHANDS" ) then {
	_bps set [2,0];
	_bps set [3,0];
};
if ( (toUpper _hitpoint) isEqualTo "HITLEGS" ) then {
	_bps set [4,0];
	_bps set [5,0];
};
_target setVariable ["ace_medical_bodypartstatus",_bps,true];

private _nameCaller = [_caller, false, true] call ace_common_fnc_getName;
private _nameTarget = [_caller, false, true] call ace_common_fnc_getName;

[_target, "activity", localize "STR_ADV_ACESPLINT_APPLIED", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_ADV_ACESPLINT_APPLIED", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;

[_target,"Patient has been splinted"] call adv_aceSplint_fnc_diag;