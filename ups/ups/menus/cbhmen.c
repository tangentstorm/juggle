#include <stdio.h>
#include <menu3.h>

static MENU MM1 = {
	0x40,
	0,
	"Expand",
	101,
	-1,
	-1,
	300,
	47,
	28,
	1056,
	0,
	0,
	0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static MENU MM2 = {
	0x40,
	0,
	"Collapse",
	99,
	300,
	-1,
	600,
	47,
	0,
	0,
	0,
	0,
	0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
MENU cbh_men = {
	0x408,
	300,
	NULL,
	0,
	-1,
	-1,
	600,
	47,
	0,
	1056,
	0,
	0,
	0,
	NULL,
	&MM1,
	&MM2,
	NULL,
	NULL,
};
