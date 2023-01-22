//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	                  /*Command*/		                                                      /*Update Interval*/   /*Update Signal*/
	{"^b#3b4252^^c#d65d0e^  ",	"sensors | awk '/^SMBUSMASTER/ { print $3 }' | sed s/+//g",             5,                    0   },
	{"^b#3b4252^^c#98971a^ ",	"echo $(pamixer --get-volume-human | awk '{ print $1}')",           0,                    10  },
	{"^b#3b4252^^c#d79921^  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",			    10,		                0   },
	// {"^b#3b4252^^c#b16286^  ",	"iwctl station wlan0 show | awk '/network/ {print $3}'",		 	      30,		                0   },
	{"^b#3b4252^^c#427b58^  ", "date '+%d.%b %H:%M ' ",									                          30,		                0   },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
