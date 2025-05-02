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
static const int failonclear = 1;

/* default message */
static const char * message = "Locked";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

/* PAM service that's used for authentication */
static const char* pam_service = "slock";
