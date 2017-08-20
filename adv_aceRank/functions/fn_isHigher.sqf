/*
ADV-aceRank - by Belbo
*/

params ["_caller","_target","_newRankValue"];

private _rankValue = {
	params ["_unit"];
	switch (rank _unit) do {
		case "PRIVATE": {1};
		case "CORPORAL": {2};
		case "SERGEANT": {3};
		case "LIEUTENANT": {4};
		case "CAPTAIN": {5};
		case "MAJOR": {6};
		case "COLONEL": {7};
	};
};

private _rankCaller = [_caller] call _rankValue;
private _rankTarget = [_target] call _rankValue;

if ( _rankCaller < 3 ) exitWith { false };
if ( _rankTarget isEqualTo _newRankValue ) exitWith { false };
if ( _rankCaller <= _newRankValue ) exitWith { false };
if ( _rankCaller > _rankTarget ) exitWith { true };

false;