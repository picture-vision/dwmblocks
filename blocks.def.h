//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/  /*Command*/								/*Update Interval*/	/*Update Signal*/
	{" ",	  "echo $(playerctl metadata title)",					                            10,			11   },
	{" 󰦝 ",	  "/usr/local/bin/vpnstatus",					                                   2,			 0   },
	{"   ",	  "echo $(pamixer --get-volume-human | awk '{ print $1}')",              0,			10   },
	{" 󰻠 ",	  "sensors | awk '/^Tctl/ { print $2 }' | sed s/+//g",                   5,			 0   },
	// {" 󰍛 ",   "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",		10,			0   },
	{" 󰃭 ",   "date '+%d.%b %H:%M '  ",						                                  30,			 0   },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
