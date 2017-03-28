/*
ADV_aceCPR_fnc_CPR_Local - by Belbo
*/

params ["_caller", "_target"];

//probability for custom cpr success:
private _isMedic = _caller getVariable ["ACE_medical_medicClass",0];
//probability depends on medicClass of _caller:
private _probability = if ( _isMedic > 0 ) then {
	if ( _isMedic > 1 ) then { 50 } else { 30 };
//standard is 10:
} else { 10 };

//if patient has epinephrine in his circulation, the probability rises by 10%.
private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem",0];
if (_gotEpi > 0.5) then {
	_probability = _probability + 10;
	//diagnostics:
	if (adv_aceCPR_diag) then {
		if !(local _caller) then {
			["adv_aceCPR_evh_log", ["adv_aceCPR - Probability has been raised by 10% due to epinephrine."], _caller] call CBA_fnc_targetEvent;
		};
		["adv_aceCPR_evh_log", ["adv_aceCPR - Probability has been raised by 10% due to epinephrine."]] call CBA_fnc_localEvent;
	};
};

//reduces probability depending on total blood loss of patient:
private _bloodLoss = [_caller, _target] call adv_aceCPR_fnc_getBloodLoss;
call {
	if (_bloodLoss >= 0.3) exitWith {
		_probability = _probability - 20;
		//diagnostics:
		if (adv_aceCPR_diag) then {
			if !(local _caller) then {
				["adv_aceCPR_evh_log", ["adv_aceCPR - Probability has been reduced by 20% due to blood loss."], _caller] call CBA_fnc_targetEvent;
			};
			["adv_aceCPR_evh_log", ["adv_aceCPR - Probability has been reduced by 20% due to blood loss."]] call CBA_fnc_localEvent;
		};
	};
	if (_bloodLoss >= 0.15) exitWith {
		_probability = _probability - 10;
		//diagnostics:
		if (adv_aceCPR_diag) then {
			if !(local _caller) then {
				["adv_aceCPR_evh_log", ["adv_aceCPR - Probability has been reduced by 10% due to blood loss."], _caller] call CBA_fnc_targetEvent;
			};
			["adv_aceCPR_evh_log", ["adv_aceCPR - Probability has been reduced by 10% due to blood loss."]] call CBA_fnc_localEvent;
		};
	};
};

//let's roll the dice:
private _diceRoll = 1+floor(random 100);
//and let at least a chance of 2%:
if (_probability < 1) then {
	_probability = 2;
};

//diagnostics:
if (adv_aceCPR_diag) then {
	if !(local _caller) then {
		["adv_aceCPR_evh_log", [format ["adv_aceCPR - Probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]], _caller] call CBA_fnc_targetEvent;
	};
	["adv_aceCPR_evh_log", [format ["adv_aceCPR - Probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]]] call CBA_fnc_localEvent;
};

if ( _probability >= _diceRoll ) exitWith {
	//resetting the values of the target:
	_target setVariable ["ace_medical_inReviveState",false,true];
	_target setVariable ["ace_medical_inCardiacArrest",nil, true];
	//if player has a higher bloodvolume, the new heart rate will be lower.
	if (_target getVariable "ace_medical_bloodVolume" > 60 && !(_gotEpi > 0.5)) then {
		_target setVariable ["ace_medical_heartRate",30];
	} else {
		_target setVariable ["ace_medical_heartRate",40];
	};
	//if the players bloodVolume is below the minimal value, it will be reset to 30:
	if (_target getVariable "ace_medical_bloodVolume" < 30) then {
		_target setVariable ["ace_medical_bloodVolume",30];
	};
	
	//log the custom cpr success to the treatment log (execution of cpr action is logged by regular ace-cpr):
	[_target, "activity", localize "STR_ADV_ACECPR_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_ADV_ACECPR_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	
	//diagnostics:
	if (adv_aceCPR_diag) then {
		if !(local _caller) then {
			["adv_aceCPR_evh_log", ["adv_aceCPR - Patient has been succesfully stabilized"], _caller] call CBA_fnc_targetEvent;
		};
		["adv_aceCPR_evh_log", ["adv_aceCPR - Patient has been succesfully stabilized"]] call CBA_fnc_localEvent;
	};

	//return:
	true;
};

false;