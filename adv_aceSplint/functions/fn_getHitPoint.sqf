/*
ADV-aceSplint - by Belbo
*/

params ["_selection"];

private _return = call {
	if ( (toLower _selection) == "hand_l"] ) exitWith { ["hithands","hitleftarm","hand_l",localize "STR_ADV_ACESPLINT_ARM"] };
	if ( (toLower _selection) == "hand_r"] ) exitWith { ["hithands","hitrightarm","hand_r",localize "STR_ADV_ACESPLINT_ARM"] };
	if ( (toLower _selection) == "leg_l"] ) exitWith { ["hitlegs","hitleftleg","leg_l",localize "STR_ADV_ACESPLINT_LEG"] };
	if ( (toLower _selection) == "leg_r"] ) exitWith { ["hitlegs","hitrightleg","leg_r",localize "STR_ADV_ACESPLINT_LEG"] };
	["","",_selection]
};

_return