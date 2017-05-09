/*
ADV_aceCPR_fnc_getBloodLoss - by Belbo
*/

params ["_caller", "_target"];

//count the total blood loss amounting from every wound the player has:
private _totalBloodLoss = 0;
{
    _totalBloodLoss = _totalBloodLoss + ((_x select 4) * (_x select 3));
} forEach (_target getVariable ["ace_medical_openWounds", []]);

//diagnostics:
if (missionNamespace getVariable ["adv_aceCPR_diag",false]) then {
	if !(local _caller) then {
		["adv_aceCPR_evh_log", [format ["adv_aceCPR - The patient has a bloodloss of %1.",_totalBloodLoss]], _caller] call CBA_fnc_targetEvent;
	};
	["adv_aceCPR_evh_log", [format ["adv_aceCPR - The patient has a bloodloss of %1.",_totalBloodLoss]]] call CBA_fnc_localEvent;
};

//return
_totalBloodLoss;