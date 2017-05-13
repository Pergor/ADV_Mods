/*
ADV_aceCPR_fnc_CPR_Local - by Belbo
*/

params ["_caller", "_target"];

if !( [_target] call adv_aceCPR_fnc_canCPR ) exitWith {
	//diagnostics:
	[_caller,"target was too long in revive state"] call adv_aceCPR_fnc_diag;
};

//probability for custom cpr success:
private _isMedic = _caller getVariable ["ACE_medical_medicClass", 0];
private _onlyDoctors = missionNamespace getVariable ["adv_aceCPR_onlyDoctors", 0];
private _probabilities = missionNamespace getVariable ["adv_aceCPR_probabilities", [40,15,5]];
if ( _onlyDoctors isEqualType true ) then {
	_onlyDoctors = if (_onlyDoctors) then {2} else {0};
};

//probability depends on medicClass of _caller:
private _probability = call {
	if ( _isMedic isEqualTo 2 ) exitWith {
		_probabilities select 0
	};
	if ( _isMedic isEqualTo 1 ) exitWith {
		if ( _onlyDoctors > 1 ) then {0} else { _probabilities select 1 };
	};
	if ( _onlyDoctors > 0 ) then {0} else { _probabilities 2 };
};
//diagnostics
[_caller,format ["probability started at %1, with a adv_aceCPR_probabilities of %2",_probability, _probabilities]] call adv_aceCPR_fnc_diag;

//if patient has epinephrine in his circulation, the probability rises by 10%.
private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem",0];
if (_gotEpi > 0.5) then {
	_probability = _probability + 10;
	
	//diagnostics:
	[_caller,format ["probability has been raised by 10% due to epinephrine. New probability is %1",_probability]] call adv_aceCPR_fnc_diag;
};

//reduces probability depending on total blood loss of patient:
private _bloodLoss = [_caller, _target] call adv_aceCPR_fnc_getBloodLoss;
call {
	if (_bloodLoss >= 0.3) exitWith {
		_probability = _probability - 20;

		//diagnostics:
		[_caller,format ["probability has been reduced by 20% due to blood loss. New probability is %1",_probability]] call adv_aceCPR_fnc_diag;
	};
	if (_bloodLoss >= 0.15) exitWith {
		_probability = _probability - 10;
		
		//diagnostics:
		[_caller,format ["probability has been reduced by 10% due to blood loss. New probability is %1",_probability]] call adv_aceCPR_fnc_diag;
	};
};

//let's roll the dice:
private _diceRoll = 1+floor(random 100);
//and let at least a chance of 2%...:
if ( _probability < 1 && _onlyDoctors isEqualTo 0 ) then {
	_probability = 2;
};
//diagnostics:
[_caller,format ["resulting probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]] call adv_aceCPR_fnc_diag;

if ( _probability >= _diceRoll ) exitWith {
	//resetting the values of the target:
	_target setVariable ["ace_medical_inReviveState",false,true];
	_target setVariable ["ace_medical_inCardiacArrest",nil, true];
	
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

false;