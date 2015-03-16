// 51 Scottish Battalion Signals Operating Instructions
///////////////////////////////////////////////////////////////////////////////

// Include BI DIK codes.
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

call compile preprocessFile "\51SB_Handbook\functions\functions.sqf";

/////////////////////////////////////////////////////////////////////////////////


// Check if CBA Keybinding system is available.
if (!isNil "cba_keybinding") then {
	// Register CBA keybinds
	["51SB SOI", "Open 51SB Handbook SOI", {_this call ff_51sb_soi_fnc_toggle}, [DIK_M,true,false,false]] call cba_fnc_registerKeybind;
	["51SB SOI", "Next Page", {_this call ff_51sb_soi_fnc_nextpage}, [DIK_M,true,false,false]] call cba_fnc_registerKeybind;
} else {
	["51SB SOI: Your version of CBA is too old for this version of 51SB SOI. Please upgrade CBA."] call cba_fnc_systemChat;
};

/////////////////////////////////////////////////////////////////////////////////
