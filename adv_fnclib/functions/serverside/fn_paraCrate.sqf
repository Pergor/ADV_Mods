/*
ADV_fnclib_fnc_paraCrate by Belbo

Spawns a supply crate in the given height.
Call with:
[spawnLocation,500,"BLUE",[ADV_fnc_clearCargo,ADV_fnc_crate],"B_CargoNet_01_ammo_F","B_Parachute_02_F"] call ADV_fnclib_fnc_paraCrate;
or
["landingMarker",500,"NONE","clearItemCargo (_this select 0);"] call ADV_fnclib_fnc_paraCrate;

_this select 0 = Object or Marker at the spawn Location (object or string);
_this select 1 = Height (number);
_this select 2 = Color of Smoke to be attached to the crate if the crate is below 30 meters - or "NONE" (string);
_this select 3 = Functions to call or code to spawn on the spawned crate. Crate object is _this select 0 in the code or function. (Array of functions or string - optional);
_this select 4 = Functions to call or code to spawn on the spawned crate. Crate object is _this select 0 in the code or function. (Array of functions or string - optional);
_this select 5 = Classname of crate (string - optional);
_this select 6 = Classname of parachute (string - optional);
*/

if (!isServer && hasInterface) exitWith {};

params [
	["_target", objNull, [objNull,""]],
	["_height", 800, [0]],
	["_smokeColor", "ORANGE", [""]],
	["_code", [], [[],""]],
	["_crateType", "B_CargoNet_01_ammo_F", [""]],
	["_chuteType", "B_Parachute_02_F", [""]],
	"_targetType","_codeType","_targetPos","_chute","_crate","_smokeType","_light","_IRlight"
];

_targetType = typeName (_target);
_codeType = typeName (_code);

_targetPos = nil;
if (_targetType == "STRING") then {
	_targetpos = [getMarkerPos _target select 0, getMarkerPos _target select 1, _height];
};
if (_targetType == "OBJECT") then {
	_targetPos = [getPos _target select 0, getPos _target select 1, _height];
};
_chute = createVehicle [_chuteType, _targetPos, [], 0, "NONE"];
_crate = createVehicle [_crateType, _targetpos, [], 0, "NONE"];
_crate attachTo [_chute, [0, 0, -1.3]];
_chute setVelocity [0,0,-50];
{ _x addCuratorEditableObjects [[_crate],false] } forEach allCurators;
if (_codeType == "STRING") then {
	[_crate] spawn compile _code;
} else {
	{[_crate] call _x} forEach _code;
};
_smokeType = switch (toUpper _smokeColor) do {
	case "WHITE": {"G_40mm_Smoke"};
	case "BLUE": {"G_40mm_SmokeBlue"};
	case "GREEN": {"G_40mm_SmokeGreen"};
	case "RED": {"G_40mm_SmokeRed"};
	case "YELLOW": {"G_40mm_SmokeYellow"};
	case "PURPLE": {"G_40mm_SmokePurple"};
	case "ORANGE": {"G_40mm_SmokeOrange"};
	case "NONE": {str objNull};
	default {str objNull};
};
[_crate,_smokeType] spawn {
	waitUntil {sleep 1; ((getPosATL (_this select 0)) select 2) < 30};
	_smoke = createVehicle [(_this select 1), (getPosATL (_this select 0)), [], 0, "NONE"];
	_smoke attachTo [(_this select 0), [0, 0, -1]];
	waitUntil {sleep 1; ((getPosATL (_this select 0)) select 2) < 2};
	detach (_this select 0);
};

_light = createVehicle ["Chemlight_red", (getPosATL _crate), [], 0, "NONE"];
_IRlight = createVehicle ["B_IRStrobe", (getPosATL _crate), [], 0, "NONE"];
{_x attachTo [_crate, [0, 0, 1.3]];} forEach [_light,_IRlight];

if (true) exitWith {};