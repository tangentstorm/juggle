#include <stdio.h>
#include <local/menu3.h>

static MENU MM1 = {
	0x40,
	0,
	"Clear",
	99,
	-1,
	-1,
	125,
	107,
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
	184,
	"Backwards",
	98,
	61,
	1,
	184,
	104,
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
static MENU MM3 = {
	0x40,
	0,
	"Forwards",
	102,
	184,
	1,
	307,
	104,
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
static MENU MM4 = {
	0x408,
	184,
	NULL,
	0,
	61,
	1,
	307,
	104,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM2,
	&MM3,
	NULL,
	NULL,
};
static MENU MM5 = {
	0x260,
	506,
	"Search",
	120,
	125,
	-1,
	252,
	107,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM4,
	NULL,
	NULL,
	NULL,
};
static MENU MM6 = {
	0x8,
	125,
	NULL,
	99,
	-1,
	-1,
	252,
	107,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM1,
	&MM5,
	NULL,
	NULL,
};
static MENU MM7 = {
	0x40,
	1,
	"Load",
	108,
	252,
	-1,
	379,
	107,
	160,
	1024,
	0,
	0,
	0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static MENU MM8 = {
	0x40,
	0,
	"Save",
	115,
	379,
	-1,
	506,
	107,
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
static MENU MM9 = {
	0x40,
	0,
	"Close",
	67,
	506,
	-1,
	631,
	107,
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
static MENU MM10 = {
	0x8,
	506,
	NULL,
	115,
	379,
	-1,
	631,
	107,
	64,
	0,
	0,
	0,
	0,
	NULL,
	&MM8,
	&MM9,
	NULL,
	NULL,
};
static MENU MM11 = {
	0x8,
	379,
	NULL,
	108,
	252,
	-1,
	631,
	107,
	480,
	0,
	0,
	0,
	0,
	NULL,
	&MM7,
	&MM10,
	NULL,
	NULL,
};
MENU out_men = {
	0x408,
	252,
	NULL,
	0,
	-1,
	-1,
	631,
	107,
	0,
	2,
	0,
	0,
	0,
	NULL,
	&MM6,
	&MM11,
	NULL,
	NULL,
};
