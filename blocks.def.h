//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ",	"sensors | awk '/^Package/ { print $4 }' | sed s/+//g",             5,		 0},
	{"  ", 	"acpi | awk '/^Battery/ { print $4}' | sed s/,//g",             30, 	 0},
	{" ",	"pamixer --get-volume-human",                                       0,		10},
	{"ﯦ ", 	"xbacklight | awk '{split($0,a,\".\"); {  print a[1] \"%\"}}'",     0, 	    20},
	{"  ", 	"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",			10,		 0},
//	{" ",	"nmcli c | awk '/wifi/ {print $1}'",		 	                    10,		 0},
	{" ",	"iwctl station wlan0 show | awk '/network/ {print $3}'",		 	10,		 0},
//	{"  ", 	"date '+%b %d (%a) %I:%M%p ' ",									5,		 0},
	{"  ", 	"date '+%d.%b %H:%M ' ",									5,		 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
