/*
 * Author: Belbo
 *
 * Creates pre set weather conditions for whole mission.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * Script handle <HANDLE>
 *
 * Example:
 * _handle = [] call adv_fnclib_fnc_weather;
 *
 * Public: No
 */

_handle = _this spawn {
	params [
		["_weather", 99, [0,""]]
	];
	_weatherValue = if (_weather == "RANDOM") then { (floor (random 9))+1 } else { _weather };

	_weatherArray = switch (_weatherValue) do {
		case 1: {[0, 0, [0, 0, 0], [1, 1, true]]};	//sunny
		case 2: {[0.3, 0, [0, 0, 0], [1, 1, true]]};	//clear
		case 3: {[0.6, 0, [0.05, 0.1, 10], [2, 2, true]]};	//overcast
		case 4: {[0.6, 0.3, [0.1, 0.1, 20], [3, 3, true]]};	//light rain
		case 5: {[0.70, 0.5, [0.2, 0.1, 20], [4, 4, true]]};	//medium rain
		case 6: {[0.80, 0.9, [0.2, 0.1, 20], [5, 5, true]]};	//heavy rain
		case 7: {[0.4, 0, [0.2, 0.01, 20], [0, 0, true]]};	//light fog
		case 8: {[0.4, 0, [0.4, 0.005, 20], [0, 0, true]]};	//medium fog
		case 9: {[0.5, 0, [0.5, 0.0025, 40], [0, 0, true]]}; //dense fog
		default {nil};
	};

	if (isNil "_weatherArray") exitWith {false};

	_initialOvercast = _weatherArray select 0;
	_initialRain = _weatherArray select 1;
	_initialFog = _weatherArray select 2;
	_initialWind = _weatherArray select 3;

	skipTime 24;
	if (isServer) then {
		//84600 setOvercast _initialOvercast;
		[_initialOvercast] call BIS_fnc_setOvercast;
		0 setRain _initialRain;
		setWind _initialWind;
	};
	0 setFog _initialFog;
	skipTime -24;
};

_handle;