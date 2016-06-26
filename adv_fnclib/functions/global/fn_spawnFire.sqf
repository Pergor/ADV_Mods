/*
ADV_fnclib_fnc_spawnFire:

Creates a fire or smoke effect at a given object.

Possible calls - has to be executed on each client locally:

[OBJECT,"FIRE_SMALL"] call ADV_fnc_spawnFire;
[OBJECT,"FIRE_MEDIUM"] call ADV_fnc_spawnFire;
[OBJECT,"FIRE_BIG"] call ADV_fnc_spawnFire;
[OBJECT,"SMOKE_SMALL"] call ADV_fnc_spawnFire;
[OBJECT,"SMOKE_MEDIUM"] call ADV_fnc_spawnFire;
[OBJECT,"SMOKE_BIG"] call ADV_fnc_spawnFire;
*/

private["_effect","_pos","_fire","_smoke"];
private["_light","_brightness","_color","_ambient","_intensity","_attenuation"];

_pos 	= getPosATL (_this select 0);
_effect = _this select 1;

_fire	= "";
_smoke	= "";
_light	= objNull;
_color		= [1,0.85,0.6];
_ambient	= [1,0.3,0];

switch (toUpper _effect) do {
	case "FIRE_SMALL" : {
		_fire 	= "SmallDestructionFire";
		_smoke 	= "SmallDestructionSmoke";
	};
	case "FIRE_MEDIUM" : {
		_fire 	= "MediumDestructionFire";
		_smoke 	= "MediumDestructionSmoke";
		_brightness	= 1.0;
		_intensity	= 400;
		_attenuation	= [0,0,0,2];
	};
	case "FIRE_BIG" : {
		_fire 	= "BigDestructionFire";
		_smoke 	= "BigDestructionSmoke";
		_brightness	= 1.0;
		_intensity	= 1600;
		_attenuation	= [0,0,0,1.6];
	};
	case "SMOKE_SMALL" : {
		_smoke 	= "SmallDestructionSmoke";
	};
	case "SMOKE_MEDIUM" : {
		_smoke 	= "MediumSmoke";
	};
	case "SMOKE_BIG" : {
		_smoke 	= "BigDestructionSmoke";
	};
};

if (_fire != "") then {
	_eFire = "#particlesource" createVehicleLocal _pos;
	_eFire setParticleClass _fire;
	_eFire setPosATL _pos;
};

if (_smoke != "") then {
	_eSmoke = "#particlesource" createVehicleLocal _pos;
	_eSmoke setParticleClass _smoke;
	_eSmoke setPosATL _pos;
};

//create lightsource
if (_effect in ["FIRE_BIG","FIRE_MEDIUM"]) then {
	_pos   = [_pos select 0,_pos select 1,(_pos select 2)+1];
	_light = createVehicle ["#lightpoint", _pos, [], 0, "CAN_COLLIDE"];
	_light setPosATL _pos;

	_light setLightBrightness _brightness;
	_light setLightColor _color;
	_light setLightAmbient _ambient;
	_light setLightIntensity _intensity;
	_light setLightAttenuation _attenuation;
	_light setLightDayLight false;
};

if (true) exitWith {};