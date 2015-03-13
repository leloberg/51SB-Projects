loberg_51sb_soi_fnc_nextpage = 
{
	if !("item51SOI" in items player)exitWith {hint "Don't have it";};
	closeDialog 0;
	createDialog "loberg_51sb_soi_page3to4";
};