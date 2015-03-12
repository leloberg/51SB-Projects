class CfgPatches {
	class 51sb_soi {
		units[] = {};
		weapons[] = {"ItemSOI"};
		requiredVersion = 0.1;
		requiredAddons[] = {CBA_XEH, CBA_MAIN, A3_UI_F};
		version = 2.3;
		author[] = {"Loberg"};
		authorUrl = "URL";
	};
};

#include "\51sb_soi\cfgfunctions.h"

class Extended_PostInit_EventHandlers {
	class 51sb_soi {
		clientInit = "call compile preProcessFileLineNumbers '\51SB_Handbook\init.sqf'";
	};
};

class loberg_51sb_soi_picture
{
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};


class loberg_51sb_soi
{
	idd = -1;
	movingenable = "true";
	onUnload = "hint """"";
	class Controls
	{
		class loberg_51sb_soi_background: loberg_51sb_soi_picture
		{
			idc = 1200;
			text = "\51SB_Handbook\data\images\soi51.paa";
			x = "-0.0786458 * safezoneW + safezoneX";
			y = "0.015807 * safezoneH + safezoneY";
			w = "0.469219 * safezoneW";
			h = "0.979 * safezoneH";
			moving = 1;
		};
	};
};

class CfgWeapons
{
	class itemcore;
	class item51soi: itemcore {
		displayname = "51SB SOI";
		descriptionshort = "51SB SOI";
		descriptionuse = "51SB SOI";
		picture = "\51SB_Handbook\data\images\15th_rugged_tab_ico.paa";
		scope = 2;
		class ItemInfo
		{
			mass = 1;
		};
		author = "Loberg";
	};
};
