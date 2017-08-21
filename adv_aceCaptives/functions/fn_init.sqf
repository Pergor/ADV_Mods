/*
ADV-aceCaptive - by Belbo
*/

//register the eventhandlers:
//evh for the CPR:
["adv_aceCaptives_evh_doAnim", { _this call adv_aceCaptives_fnc_doAnim }] call CBA_fnc_addEventHandler;

//for diagnostic purposes only:
["adv_aceCaptives_evh_log", { diag_Log (format ["%1",_this]) }] call CBA_fnc_addEventHandler;

missionNamespace setVariable ["adv_aceCaptives_diag",false];