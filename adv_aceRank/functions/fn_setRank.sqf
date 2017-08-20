/*
ADV-aceRank - by Belbo
*/

_this spawn {
	params ["_target","_newRank"];

	//set the new rank:
	[_target,_newRank] remoteExecCall ["setRank", 0, true];
	
	//short sleep:
	sleep 1;
	
	//apply new rank:
	_insigniaFunction = missionnamespace getVariable ["adv_fnc_insignia",nil];
	[_target] call _insigniaFunction;
};