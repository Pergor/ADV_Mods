// rickB?s Breathing f|| HiddenIdentity Gasmasks M40 & M50
// put this in units init to make breathing sound while wearing one of the listed Gasmasks ->  null = [this] execVM "rick_survival\rick_mask_breathe.sqf";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (!hasInterface) exitWith {};

params [
	["_unit", player, [objNull]]
];

while {alive _unit} do {
	waituntil { sleep 1; (goggles _unit in ["Mask_M40_OD","Mask_M40","Mask_M50"]) };
	playsound3d ["A3\sounds_f\characters\human-sfx\other\diver-breath-2.wss", _unit,false,getposASL _unit, 5,1,15];
	sleep 4;
};

if (true) exitWith {};