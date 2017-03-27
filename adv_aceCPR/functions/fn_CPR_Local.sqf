/*
ADV_aceCPR_fnc_CPR - by Belbo
*/

params [
	["_target", objNull, [objNull]]
];

//resetting the values of the target:
_target setVariable ["ace_medical_inReviveState",false, true];
_target setVariable ["ace_medical_inCardiacArrest",false, true];
_target setVariable ["ace_medical_heartRate",40, true];
_target setVariable ["ace_medical_bloodPressure", [40,60], true];
_target setVariable ["ace_medical_bloodVolume",(_target getVariable ["ace_medical_bloodVolume",70])-20, true];
if (_target getVariable "ace_medical_bloodVolume" < 45) then {
	_target setVariable ["ace_medical_bloodVolume",45, true];
};

//diagnostics:
if (adv_aceCPR_diag) then {
	diag_log "adv_aceCPR - Patient has been succesfully stabilized";
};

//return:
true;