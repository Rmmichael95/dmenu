/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static double opacity = 0.8;                /* -o  option; defines alpha translucency */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int instant = 1;                     /* -n  option; if 1, selects matching item without the need to press enter */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] =
{
	"cozette:size=14"
};
static const char *prompt      = ">";      /* -p  option; prompt to the left of input field */

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

static
const
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#222222", "#7892ac" },
	[SchemeOut]  = { "#000000", "#a1efe4" },
	[SchemeSelHighlight]  = { "#222222", "#7892ac" },
	[SchemeNormHighlight] = { "#222222", "#353D4B" },
	[SchemeHover]  = { "#bbbbbb", "#222222" },
	[SchemeGreen]  = { "#bbbbbb", "#8ec07c" },
	[SchemeRed]    = { "#bbbbbb", "#e05252" },
	[SchemeYellow] = { "#bbbbbb", "#e0c452" },
	[SchemeBlue]   = { "#bbbbbb", "#ea81ff" },
	[SchemePurple] = { "#bbbbbb", "#9952e0" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


