// 51 Scottish Battalion Signals Operating Instructions
///////////////////////////////////////////////////////////////////////////////

// Include BI DIK codes.
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

call compile preprocessFile "\51SB_Handbooks\functions\functions.sqf";

/////////////////////////////////////////////////////////////////////////////////

// Read config file keys.
[] call tao_foldmap_fnc_processKeyConfig;

// Check if CBA Keybinding system is available.
if (!isNil "cba_keybinding") then {
	// Register CBA keybinds (defaults are read from config file).
	["51SB SOI", "Open SOI", {_this call loberg_51sb_soi_fnc_toggle}, [DIK_M,true,false,false]] call cba_fnc_registerKeybind;
} else {
	["51SB SOI: Your version of CBA is too old for this version of 51SB SOI. Please upgrade CBA."] call cba_fnc_systemChat;
};

/////////////////////////////////////////////////////////////////////////////////
