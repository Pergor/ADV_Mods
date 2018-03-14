/*
ADV-aceSplint - by Belbo
*/

params ["_caller","_target","_selection"];

private _hitPointArray = call adv_aceSplint_fnc_getHitPoint;
_hitPointArray params ["_hitpoint","_bodyPart","_selection","_str"];

private _oldBps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
private _oldGetHitPoint = _target getHitPointDamage _hitPoint;

[_target,_hitpoint,0,false] call ace_medical_fnc_setHitPointDamage;

private _bps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
//_bps params ["_hitHead","_hitBody","_hitLeftArm","_hitRightArm","_hitLeftLeg","_hitRightLeg"];

call {
	if ( _bodyPart isEqualTo "hitleftarm" ) exitWith {
		_bps set [2,0];
	};
	if ( _bodyPart isEqualTo "hitrightarm" ) exitWith {
		_bps set [3,0];
	};
	if ( _bodyPart isEqualTo "hitleftleg" ) exitWith {
		_bps set [4,0];
	};
	if ( _bodyPart isEqualTo "hitrightleg" ) exitWith {
		_bps set [5,0];
	};
};

_target setVariable ["ace_medical_bodypartstatus",_bps,true];

private _nameCaller = [_caller, false, true] call ace_common_fnc_getName;
private _nameTarget = [_caller, false, true] call ace_common_fnc_getName;

[_target, "activity", localize "STR_ADV_ACESPLINT_APPLIED", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_ADV_ACESPLINT_APPLIED", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;

[_target,"Patient has been splinted"] call adv_aceSplint_fnc_diag;

[_target,_oldBps,_oldGetHitPoint,_hitPointArray] call adv_aceSplint_fnc_reopen;

nil;