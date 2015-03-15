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

class loberg_hiddenbutton
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 0;
	font = "puristaMedium";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
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
			x = "0.0103626 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.55664 * safezoneW";
			h = "0.946 * safezoneH";
			moving = 1;
		};
		
		class loberg_51sb_soi_nextPage: loberg_hiddenbutton
		{
			idc = 1603;
			x = "0.484538 * safezoneW + safezoneX";
			y = "0.753 * safezoneH + safezoneY";
			w = "0.0412326 * safezoneW";
			h = "0.055 * safezoneH";
			action = "call loberg_51sb_soi_fnc_nextpage;";
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
			x = "0.0103626 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.55664 * safezoneW";
			h = "0.946 * safezoneH";
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
