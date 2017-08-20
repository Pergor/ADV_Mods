/*
ADV-aceCaptive - by Belbo
*/

//register the eventhandlers:
//evh for the CPR:
["adv_aceCaptive_evh_doAnim", { _this call adv_aceCaptive_fnc_doAnim }] call CBA_fnc_addEventHandler;

//for diagnostic purposes only:
["adv_aceCaptive_evh_log", { diag_Log (format ["%1",_this]) }] call CBA_fnc_addEventHandler;

missionNamespace setVariable ["adv_aceCaptive_diag",false];