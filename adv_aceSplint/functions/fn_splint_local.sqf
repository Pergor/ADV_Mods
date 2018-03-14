/*
ADV-aceSplint - by Belbo
*/

params ["_caller","_target","_selection"];

private _selectionNumber = [_selection] call ace_medical_fnc_selectionNameToNumber;

private _hitPointArray = [_selectionNumber] call adv_aceSplint_fnc_getHitPoint;
_hitPointArray params ["_hitpoint","_bodyPart","_selection","_str"];

private _oldBps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
private _oldGetHitPoint = _target getHitPointDamage _hitPoint;
private _splints = _target getVariable ["adv_aceSplint_splints",[0,0,0,0,0,0]];

[_target,_hitpoint,0,false] call ace_medical_fnc_setHitPointDamage;

private _bps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
//_bps params ["_hitHead","_hitBody","_hitLeftArm","_hitRightArm","_hitLeftLeg","_hitRightLeg"];

_bps set [_selectionNumber,0];
_splints set [_selectionNumber,1];

_target setVariable ["ace_medical_bodypartstatus",_bps,true];
_target setVariable ["adv_aceSplint_splints",_splints,true];

private _nameCaller = [_caller, false, true] call ace_common_fnc_getName;
private _nameTarget = [_caller, false, true] call ace_common_fnc_getName;

[_target, "activity", localize "STR_ADV_ACESPLINT_APPLIED", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_ADV_ACESPLINT_APPLIED", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;

[_target,"Patient has been splinted"] call adv_aceSplint_fnc_diag;

[_target,_oldBps,_oldGetHitPoint,_hitPointArray,_selectionNumber] call adv_aceSplint_fnc_reopen;

nil;