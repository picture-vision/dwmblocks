//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"^b#3b4252^^c#d65d0e^  ",	"sensors | awk '/^Package/ { print $4 }' | sed s/+//g",             5,		 0},
	{"^b#3b4252^^c#d79921^  ", 	"acpi | awk '/^Battery 0/ { print $4}' | sed s/,//g",             30, 	 0},
	{"^b#3b4252^^c#98971a^ ",	"echo $(pulsemixer --get-volume | awk '{ print $1}')%",                                       0,		10},
  {"^b#3b4252^^c#d5c4a1^ﯦ ", 	"echo $(echo $(brightnessctl g)00/$(brightnessctl m) | bc)%",     0, 	    20},
	{"^b#3b4252^^c#458588^  ", 	"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",			10,		 0},
//	{" ",	"nmcli c | awk '/wifi/ {print $1}'",		 	                    10,		 0},
	{"^b#3b4252^^c#b16286^ ",	"iwctl station wlan0 show | awk '/network/ {print $3}'",		 	10,		 0},
//	{"  ", 	"date '+%b %d (%a) %I:%M%p ' ",									5,		 0},
	{"^b#3b4252^^c#427b58^  ", 	"date '+%d.%b %H:%M ' ",									5,		 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
