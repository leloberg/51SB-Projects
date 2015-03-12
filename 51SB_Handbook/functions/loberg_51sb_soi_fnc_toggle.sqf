loberg_51sb_soi_fnc_toggle = 
{
	if !("item51soi" in items player)exitWith {hint "MISSING ITEM";};
	closeDialog 0;
	createDialog "loberg_51sb_soi";
};