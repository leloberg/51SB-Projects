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
			text = "\51sb_soi\data\images\notebook.paa";
			x = "-0.0786458 * safezoneW + safezoneX";
			y = "0.015807 * safezoneH + safezoneY";
			w = "0.469219 * safezoneW";
			h = "0.979 * safezoneH";
			moving = 1;
		};
	};
};
