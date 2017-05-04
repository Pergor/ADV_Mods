/*
    Author(s):
        By Dimitri Yuri edited by 2600K - modified by [SeL] Belbo
        Dedmen
    Description:
        Add Eventhandler that notifies nearby AI's when player is Speaking - edit: and creates SAD waypoint on the speaking player.
*/

if (!hasInterface && !(isClass(configFile >> "CfgPatches" >> "tfar_core"))) exitWith {}; //Only on clients

["TFAR_AI_Detection", "OnSpeak", {
    params ["_unit","_isSpeaking"];
    //systemChat format["TFAR OnSpeak %1 %2",_unit,_isSpeaking];
    // Exit if unit is isolated or DC'd or dead
    if ((vehicle _unit) call TFAR_fnc_isVehicleIsolated || {isNil "_unit"} || {!alive _unit}) exitWith {};

    private _nearHostiles = _unit nearEntities [["Car", "Motorcycle", "Tank","CAManBase","Man"], TF_speak_volume_meters - 5];//-5 because Enemies don't have that good hearing
	
	//modified by Belbo:
	private _enemySides = [side _unit] call BIS_fnc_enemySides;
	//end of modified part.
	
    {
        //could use TFAR_speakingSince to see how long player is speaking and increase reveal according to that


        if (!((vehicle _x) call TFAR_fnc_isVehicleIsolated) && {!isPlayer _x} && {_x knowsAbout _unit <= 1.5}) then {
            //#TODO the farther away the unit is the lower reveal it should have
            [_x,[_unit,2]] remoteExec ["reveal", _x];
            //systemChat format["TFAR Revealing %1 to %2 (%3).",_unit,_x,_x knowsAbout _unit];
			
			//modified by Belbo:
			private _waypointType = waypointType [group _x, 1];
			if ( side _x in _enemySides && !(_waypointType isEqualTo "SAD") && !((leader (group _x)) getVariable ["adv_tfar_reveal",true]) ) then {
				_wp = (group _x) addWaypoint [_unit,0,1];
				_wp setWaypointType "SAD";
				//systemChat format ["New Waypoint for %1 of the type %2 at the position of %3",_x, waypointType _wp, _unit];
			};
			//end of modified part.
        };
        true
    } count _nearHostiles;

}, player] call TFAR_fnc_addEventHandler;


/*
This will also be revealing the Player if he stops Speaking.
But as this script only triggers on start and end and not inbetween i think this is a good thing.
*/