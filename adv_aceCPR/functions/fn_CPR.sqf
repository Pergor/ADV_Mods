/*
ADV_aceCPR_fnc_CPR - by Belbo
*/

params [
	["_caller", player, [objNull]]
	,["_target", objNull, [objNull]]
];

private _isMedic = _caller getVariable ["ACE_medical_medicClass",0];
private _inVeh = [_target] call ace_medical_fnc_isInMedicalVehicle;
private _inLoc = [_target] call ace_medical_fnc_isInMedicalFacility;

private _maxTime = missionNamespace getVariable ["ace_medical_maxReviveTime",900];
private _startTime = _target getVariable ["ace_medical_reviveStartTime",0];

//probability for custom cpr success:
private _probability = if ( _isMedic > 0) then {
	if ( _isMedic > 1 ) then { 50 } else { 70 };
} else { 85 };
private _diceRoll = 1+floor(random 100);

//diagnostics:
if (adv_aceCPR_diag) then {
	diag_log (format ["adv_aceCPR-Probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]);
};

if ( _diceRoll >= _probability ) exitWith {
	//log the custom cpr success (execution of cpr action is logged by regular ace-cpr):
	[_target, "activity", localize "STR_ADV_ACECPR_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_ADV_ACECPR_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	//diagnostics:
	if (adv_aceCPR_diag) then {
		diag_log "aceCPR-CPR_Local was called.";
	};
	
	//execute custom CPR local to the unit:
	if (local _target) then {
        [_target] call adv_aceCPR_fnc_CPR_Local;
    } else {
        [_target] remoteExecCall ["adv_aceCPR_fnc_CPR_Local", _target];
	};
};

/*
private _callerAnim = [getText (_config >> "animationCaller"), getText (_config >> "animationCallerProne")] select (stance _caller == "PRONE");
[_caller, _callerAnim] call ace_common_fnc_doAnimation;
[15, [], {[_target] call _stabilize}, {systemChat (localize "STR_ADV_ACECPR_CPR_ABORTED")}, (localize "STR_ADV_ACECPR_CPR_PROGRESS")] call ace_common_fnc_progressBar;
*/