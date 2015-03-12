loberg_51sb_soi_fnc_nextpage = 
{
	if !("item51soi" in items player)exitWith {hint "MISSING ITEM";};
	closeDialog 0;
	createDialog "loberg_51sb_soi_page3to4";
};
