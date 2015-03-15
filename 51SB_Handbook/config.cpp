class CfgPatches {
	class 51sb_soi {
		units[] = {};
		weapons[] = {"Item51SOI"};
		requiredVersion = 0.1;
		requiredAddons[] = {CBA_XEH, CBA_MAIN, A3_UI_F};
		version = 2.3;
		author[] = {"Loberg"};
		authorUrl = "URL";
	};
};

class Extended_PostInit_EventHandlers {
	class 51sb_Handbooks {
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


class loberg_51sb_soi_page1to2
{
	idd = -1;
	movingenable = "true";
	onUnload = "hint """"";
	class Controls
	{
		class loberg_51sb_soi_background1to2: loberg_51sb_soi_picture
		{
			idc = 1200;
			text = "\51SB_Handbook\data\images\sig_book_button.paa";
			x = "-0.0786458 * safezoneW + safezoneX";
			y = "0.015807 * safezoneH + safezoneY";
			w = "0.469219 * safezoneW";
			h = "0.979 * safezoneH";
			moving = 1;
		};
	};
};

class loberg_51sb_soi_page3to4
{
	idd = -1;
	movingenable = "true";
	onUnload = "hint """"";
	class Controls
	{
		class loberg_51sb_soi_background3to4: loberg_51sb_soi_picture
		{
			idc = 1200;
			text = "\51SB_Handbook\data\images\sig_book2.paa";
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
	class item51SOI: itemcore {
		displayname = "51SB Handbook SOI";
		descriptionshort = "51SB Handbook - Signal Operating Instructions";
		descriptionuse = "51SB Handbook - Signal Operating Instructions";
		picture = "\51SB_Handbook\data\images\15th_rugged_tab_ico.paa";
		scope = 2;
		simulation = "ItemGPS";
		class ItemInfo
		{
			mass = 1;
		};
		author = "Loberg";
	};
};
