loberg_51sb_soi_fnc_toggle = 
{
	if !("Item51SOI" in items player)exitWith {hint "MISSING ITEM";};
	closeDialog 0;
	createDialog "loberg_51sb_soi";
};
