/*
adv_fnclib_fnc_IEDhandler;

[] call adv_fnclib_fnc_IEDhandler
*/

if !(isClass(configFile >> "CfgPatches" >> "ace_explosives")) exitWith {};

{
	if ( [typeOf _x,0,2] call BIS_fnc_trimString == "IED" || [typeOf _x,0,6] call BIS_fnc_trimString == "CUP_IED" ) then {
		private _mine = _x;
		private _pos = getPos _mine;
		private _dir = getDir _mine;
		_replacementType = call {
			if ( typeOf _mine == "IEDLANDBIG_REMOTE_AMMO"  ) exitWith {	"ACE_IEDLandBig_Range" };
			if ( typeOf _mine == "IEDURBANBIG_REMOTE_AMMO" || typeOf _mine == "CUP_IED_V2_AMMO"  || typeOf _mine == "CUP_IED_V4_AMMO" ) exitWith { "ACE_IEDUrbanBig_Range" };
			if ( typeOf _mine == "IEDLANDSMALL_REMOTE_AMMO" || typeOf _mine == "CUP_IED_V3_AMMO" ) exitWith { "ACE_IEDLandSmall_Range" };
			if ( typeOf _mine == "IEDURBANSMALL_REMOTE_AMMO" || typeOf _mine == "CUP_IED_V1_AMMO" ) exitWith { "ACE_IEDUrbanSmall_Range" };
			"";
		};
		if !( _replacementType == "" ) then {
			deleteVehicle _mine;
			_new = createMine [_replacementType, _pos, [], 0];
			_new setDir _dir;
		};
	};
	nil;
} count allMines;

true;