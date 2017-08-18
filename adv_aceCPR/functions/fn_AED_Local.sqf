/*
ADV_aceCPR_fnc_AED_Local - by Belbo
*/

params ["_caller", "_target"];

//what's our probability?
private _probability = 80;

//let's roll the dice:
private _diceRoll = 1+floor(random 100);

//diagnostics:
[_caller,format ["probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]] call adv_aceCPR_fnc_diag;

if ( _probability >= _diceRoll ) exitWith {
	//resetting the values of the target:
	_target setVariable ["ace_medical_inReviveState",false,true];
	//_target setVariable ["ace_medical_heartRateAdjustments",[],true];
	_target setVariable ["ace_medical_inCardiacArrest",false,true];
	//sets the heartrate higher than CPR:
	_target setVariable ["ace_medical_heartRate",40, true];
	
	//if the player's bloodVolume is below the minimal value, it will be reset to 30:
	if (_target getVariable "ace_medical_bloodVolume" < 30) then {
		_target setVariable ["ace_medical_bloodVolume",30, true];
	};
	
	//log the custom cpr success to the treatment log:
	[_target, "activity", localize "STR_ADV_ACECPR_AED_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_ADV_ACECPR_AED_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	//diagnostics:
	[_caller,"patient has been succesfully stabilized"] call adv_aceCPR_fnc_diag;

	//return:
	true;
};

//diagnostics:
[_caller,"patient has not been stabilized"] call adv_aceCPR_fnc_diag;

//log the custom cpr to the treatment log:
[_target, "activity", localize "STR_ADV_ACECPR_AED_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_ADV_ACECPR_AED_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;