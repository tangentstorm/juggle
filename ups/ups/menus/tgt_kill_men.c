#include <stdio.h>
#include <local/wn.h>
#include <local/menu3.h>

static MENU MM1 = {
	0x40,
	0,
	"Cancel",
	63,
	100,
	25,
	224,
	63,
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
static MENU MM2 = {
	0x40,
	13880,
	"Confirm",
	107,
	100,
	63,
	224,
	101,
	2358,
	13100,
	0,
	0,
	0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static MENU MM3 = {
	0x404,
	63,
	NULL,
	0,
	100,
	25,
	224,
	101,
	-28,
	-12,
	0,
	0,
	0,
	NULL,
	&MM1,
	&MM2,
	NULL,
	NULL,
};
MENU tgt_kill_men = {
	0x2660,
	9216,
	"Kill",
	107,
	-1,
	-1,
	128,
	37,
	0,
	2,
	0,
	0,
	0,
	NULL,
	&MM3,
	NULL,
	NULL,
	NULL,
};
