/*
Author: SENSEI
Last modified: 7/24/2015
Description: switches an array of units to another side and groups them
             returns group
__________________________________________________________________*/

params [
	["_units", [], [[],grpNull]],
	["_side", west],
	"_newgrp"
];

_newgrp = createGroup _side;
call {
	if (_units isEqualType []) exitWith {
		{[_x] joinSilent _newgrp} count _units;
	};
	if (_units isEqualType grpNull) exitWith {
		{[_x] joinSilent _newgrp} count (units _units);
	};
};

_newgrp;