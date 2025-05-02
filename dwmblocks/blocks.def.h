//Modify this file to change what commands output to your statusbar, and recompile using the make command.



#define BIN(cmd) "/home/v1szk1s/.dotfiles/bin/blocks/" cmd


static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", BIN("keyboard"),		0,			10},
	// {"", BIN("ram"),			5,			0},
	{"", BIN("battery"),		10,			0},
	{"", BIN("volume"),			0,			12},
	{"", BIN("wifi"),			10,			0},
	{"", BIN("bluetooth"),		10,			13},
	{"", BIN("date"),			5,			0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
