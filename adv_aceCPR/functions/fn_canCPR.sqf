/*
ADV_aceCPR_fnc_canCPR - by Belbo
*/

params [
	["_target", objNull, [objNull]]
];
private _maxTime = missionNamespace getVariable ["ace_medical_maxReviveTime",900];
private _startTime = _target getVariable ["ace_medical_reviveStartTime",0];
private _inRevState = _target getVariable ["ace_medical_inReviveState",false];
private _quotient = missionNamespace getVariable ["adv_aceCPR_quotient",1];

//return:
if ( alive _target && (_inRevState && (_startTime+(_maxTime/_quotient)) > CBA_missionTime) ) exitWith {
	true;
};

false;