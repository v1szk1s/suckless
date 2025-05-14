/* user and group to drop privileges to */
static const char *user  = "v1szk1s";
static const char *group = "v1szk1s";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#44b8ae",   /* during input */
	[FAILED] = "#ba203f",   /* wrong password */
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Locked";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

/* PAM service that's used for authentication */
static const char* pam_service = "slock";


/* Patch: auto-timeout */
/* should [command] be run only once? */
static const int runonce = 1;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 15;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "/usr/bin/xset dpms force off";

