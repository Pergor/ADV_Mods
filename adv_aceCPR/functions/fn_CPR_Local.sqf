/*
ADV_aceCPR_fnc_CPR - by Belbo
*/

params ["_target"];

//resetting the values of the target:
_target setVariable ["ace_medical_inReviveState",false,true];
_target setVariable ["ace_medical_inCardiacArrest",nil, true];
if (_target getVariable "ace_medical_bloodVolume" > 60) then {
	_target setVariable ["ace_medical_heartRate",30];
} else {
	_target setVariable ["ace_medical_heartRate",40];
};
/*
_target setVariable ["ace_medical_bloodPressure", [40,60]];
_target setVariable ["ace_medical_bloodVolume",(_target getVariable ["ace_medical_bloodVolume",70])-20];
*/
if (_target getVariable "ace_medical_bloodVolume" < 30) then {
	_target setVariable ["ace_medical_bloodVolume",30];
};

//diagnostics:
if (adv_aceCPR_diag) then {
	diag_log "adv_aceCPR - Patient has been succesfully stabilized";
};

//return:
true;