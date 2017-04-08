 /*
 * Author: Belbo
 *
 * Defines a zone around an object, marker or position in the given radius that allows no grenade throws within for the target (ie. player).
 *
 * Arguments:
 * 0: target - <OBJECT>
 * 1: position, can be: position, object, marker - <ARRAY>, <OBJECT>, <STRING>
 * 2: radius around position to be safe (optional) - <NUMBER>
 *
 * Return Value:
 * fired evh handle - <HANDLE>
 *
 * Example:
 * _handle = [player, "respawn_west", 100] call adv_fnclib_fnc_safeZone;
 *
 * Public: No
 */

params [
	["_target", player, [objNull]],
	["_object", objNull, [objNull,"",[]]],
	["_radius", 100,[0]]
];

adv_safezone_scriptfnc = {
	params [
		["_target", player, [objNull]],
		["_object", [0,0,0], [[]]],
		["_radius", 100, [0]],
		["_grenade", objNull, [objNull]],
		["_grenadeType", "", [""]]
	];
	if ( ((getPosWorld _target) distance2D _object) < _radius ) then {
		deleteVehicle _grenade;
		_target addMagazine [_grenadeType,1];
	};
	true
};

adv_safezone_targetPos = switch (typeName _object) do {
	case "STRING": { getMarkerPos _object };
	case "OBJECT": { getPosWorld _object };
	case "ARRAY": { _object };
	default {nil};
};

adv_safezone_radius = _radius;

_index = _target addEventhandler [
	"fired",
	{
		if (_this select 1 == "THROW") then {
			[_this select 0,adv_safezone_targetPos,adv_safezone_radius,_this select 6,_this select 5] call adv_safezone_scriptfnc;
		};
	}
];

_index;