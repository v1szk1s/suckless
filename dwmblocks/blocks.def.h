//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

	{"", "nmcli connection show --active | grep 'tun0' > /dev/null && echo 'VPN' || echo 'No VPN'", 0,		11},
	{"", "setxkbmap -query | grep layout | awk '{print $2}'", 0,		10},

	{"vol: ", "vol-get", 0,		12},

	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "free -h | awk '/^Mem/ { print $2\"/\"$3 }' | sed s/i//g",	10,		0},

	{"", "battery",	30,		0},

	{"", "date '+%y.%m.%d (%a) %H:%M'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
