/*
ADV_fnclib_fnc_flare = spawns a flare at given height over object or marker;

_this select 0 = Object/Objects at spawn location - ARRAY;
_this select 1 = color of the flare - STRING;
_this select 2 = spread of actual flare spawn - SCALAR;
_this select 3 = height - SCALAR;

ex.:
[[player,player],"red",30,120] call ADV_fnclib_fnc_flare;

*/

/*
_spawn = [_this, 0, [], [[]]] call BIS_fnc_param;
_color = [_this, 1, "YELLOW", [""]] call BIS_fnc_param;
_spread = [_this, 2, 0, [0]] call BIS_fnc_param;
_height = [_this, 3, 160, [0]] call BIS_fnc_param;
*/

params [
	["_spawn", [], [[]]],
	["_color", "YELLOW", [""]],
	["_spread", 0 , [0]],
	["_height", 160, [0]],
	"_object","_spawnType", "_spawnPos", "_colorType", "_flare", "_sound", "_soundFile"
];

{
	_object = _x;
	_spawnType = typeName (_object);
	if (count _spawn > 1) then {_height = _height + random 3;};
	_spawnPos = nil;
	if (_spawnType == "STRING") then {
		_spawnPos = [getMarkerPos _object select 0, getMarkerPos _object select 1, _height];
	};
	if (_spawnType == "OBJECT") then {
		_spawnPos = [getPosATL _object select 0, getPosATL _object select 1, (getPosATL _object select 2)+_height];
	};
	_colorType = switch (toUpper _color) do {
		case "WHITE": {"F_40mm_White"};
		case "GREEN": {"F_40mm_Green"};
		case "RED": {"F_40mm_red"};
		case "YELLOW": {"F_40mm_Yellow"};
		case "CIR": {"F_40mm_CIR"};
		case "SIGNAL_GREEN": {"Sub_F_Signal_Green"};
		case "SIGNAL_RED": {"Sub_F_Signal_Red"};
		case "NONE": {str objNull};
		default {_color};
	};
	_flare = createVehicle [_colorType, _spawnPos, [], _spread, "NONE"];
	_flare setVelocity [0,0,-0.2];
	_sound = selectRandom ["flaregun_1.wss","flaregun_2.wss","flaregun_3.wss","flaregun_4.wss"];
	_soundFile = format ["a3\missions_f_beta\data\sounds\Showcase_Night\%1",_sound];
	playSound3d [_soundFile,_flare];
	nil;
} count _spawn;

if (true) exitWith {};