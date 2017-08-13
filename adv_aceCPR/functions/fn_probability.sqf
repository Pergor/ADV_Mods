/*
ADV_aceCPR_fnc_probability - by Belbo
*/

params ["_caller", "_target"];

//probability for custom cpr success:
private _isMedic = _caller getVariable ["ACE_medical_medicClass", 0];
private _onlyDoctors = missionNamespace getVariable ["adv_aceCPR_onlyDoctors", 0];
private _probabilities = missionNamespace getVariable ["adv_aceCPR_probabilities", [40,15,5]];
if ( _onlyDoctors isEqualType true ) then {
	_onlyDoctors = if (_onlyDoctors) then {2} else {0};
};

//exitWith probability 0 if only doctors are allowed to resuscitate and _caller hasn't the necessary medic level:
if ( (_onlyDoctors isEqualTo 2 && _isMedic < 2) || (_onlyDoctors > 0 && _isMedic < 1)) exitWith {0};

//probability depends on medicClass of _caller:
private _probability = call {
	if ( _isMedic isEqualTo 2 ) exitWith { _probabilities select 0 };
	if ( _isMedic isEqualTo 1 ) exitWith { _probabilities select 1 };
	_probabilities select 2
};
//diagnostics
[_caller,format ["probability started at %1, with a adv_aceCPR_probabilities of %2",_probability, _probabilities]] call adv_aceCPR_fnc_diag;

//if patient has epinephrine in his circulation, the probability rises by 10%.
//private _gotMorphine = _target getVariable ["ace_medical_morphine_insystem",0];
//private _gotAdenosine = _target getVariable ["ace_medical_adenosine_insystem",0];
//private _gotAtropine = _target getVariable ["ace_medical_atropine_insystem",0];
private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem",0];
if (_gotEpi > 0.5) then {
	private _probabilityGain = 8 + (floor random 8);
	_probability = _probability + _probabilityGain;
	
	//diagnostics:
	[_caller,format ["probability has been raised by %1 due to epinephrine. New probability is %2",_probabilityGain,_probability]] call adv_aceCPR_fnc_diag;
};

//reduces probability depending on total blood loss of patient:
private _bloodLoss = [_caller, _target] call adv_aceCPR_fnc_getBloodLoss;
call {
	if (_bloodLoss >= 0.3) exitWith {
		private _probabilityLoss = 10 + (floor random 15);
		_probability = _probability - _probabilityLoss;

		//diagnostics:
		[_caller,format ["probability has been reduced by %1 due to blood loss. New probability is %2",_probabilityLoss,_probability]] call adv_aceCPR_fnc_diag;
	};
	if (_bloodLoss >= 0.15) exitWith {
		private _probabilityLoss = 5 + (floor random 8);
		_probability = _probability - _probabilityLoss;
		
		//diagnostics:
		[_caller,format ["probability has been reduced by %1 due to blood loss. New probability is %2",_probabilityLoss,_probability]] call adv_aceCPR_fnc_diag;
	};
};

//and let at least a chance of 2%...:
if ( _probability < 1 ) then {
	_probability = 2;
};

_probability;