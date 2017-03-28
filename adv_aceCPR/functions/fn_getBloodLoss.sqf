/*
ADV_aceCPR_fnc_canCPR - by Belbo
*/

params ["_target"];

private _totalBloodLoss = 0;
{
    _totalBloodLoss = _totalBloodLoss + ((_x select 4) * (_x select 3));
} forEach (_target getVariable ["ace_medical_openWounds", []]);

_totalBloodLoss;