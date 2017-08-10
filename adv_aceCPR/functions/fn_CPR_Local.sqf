/*
ADV_aceCPR_fnc_CPR_Local - by Belbo
*/

params ["_caller", "_target"];

if !( [_target] call adv_aceCPR_fnc_canCPR ) exitWith {
	//diagnostics:
	[_caller,"custom CPR on target not possible"] call adv_aceCPR_fnc_diag;
};

//what's our probability?
private _probability = [_caller,_target] call ADV_aceCPR_fnc_probability;

//let's roll the dice:
private _diceRoll = 1+floor(random 100);

if ( _probability >= _diceRoll ) exitWith {
	//resetting the values of the target:
	_target setVariable ["ace_medical_inReviveState",false,true];
	_target setVariable ["ace_medical_inCardiacArrest",nil,true];
	private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem",0];
	
	//if player has a higher bloodvolume, the new heart rate will be lower.
	call {
		if (_target getVariable "ace_medical_bloodVolume" > 60 && !(_gotEpi > 0.5)) exitWith {
			_target setVariable ["ace_medical_heartRate",30];
		};
		_target setVariable ["ace_medical_heartRate",40];
	};
	
	//if the player's bloodVolume is below the minimal value, it will be reset to 30:
	if (_target getVariable "ace_medical_bloodVolume" < 30) then {
		_target setVariable ["ace_medical_bloodVolume",30];
	};
	
	//log the custom cpr success to the treatment log:
	[_target, "activity", localize "STR_ADV_ACECPR_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_ADV_ACECPR_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	//diagnostics:
	[_caller,"patient has been succesfully stabilized"] call adv_aceCPR_fnc_diag;

	//return:
	true;
};

//diagnostics:
[_caller,"patient has not been stabilized"] call adv_aceCPR_fnc_diag;

//log the custom cpr to the treatment log:
[_target, "activity", localize "STR_ADV_ACECPR_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_ADV_ACECPR_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;