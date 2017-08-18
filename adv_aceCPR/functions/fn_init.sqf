/*
ADV-aceCPR - by Belbo
*/

//register the eventhandlers:
//evh for the CPR:
["adv_aceCPR_evh_CPR_Local", { _this call adv_aceCPR_fnc_CPR_Local }] call CBA_fnc_addEventHandler;
//evh for the addition of revive time:
["adv_aceCPR_evh_addTime", { _this call adv_aceCPR_fnc_addTime }] call CBA_fnc_addEventHandler;
//evh for the AED:
["adv_aceCPR_evh_AED_Local", { _this call adv_aceCPR_fnc_AED_Local }] call CBA_fnc_addEventHandler;

//for diagnostic purposes only:
["adv_aceCPR_evh_log", { diag_Log (format ["%1",_this]) }] call CBA_fnc_addEventHandler;

missionNamespace setVariable ["adv_aceCPR_diag",false];