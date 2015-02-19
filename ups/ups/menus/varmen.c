#include <stdio.h>
#include <local/menu3.h>

static MENU MM1 = {
	0x40,
	0,
	"&",
	100,
	-1,
	-1,
	35,
	26,
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
	0,
	"*",
	117,
	35,
	-1,
	72,
	26,
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
	0x8,
	35,
	NULL,
	100,
	-1,
	-1,
	72,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM1,
	&MM2,
	NULL,
	NULL,
};
static MENU MM4 = {
	0x40,
	0,
	"::",
	121,
	72,
	-1,
	109,
	26,
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
static MENU MM5 = {
	0x40,
	0,
	"Struct/Union",
	69,
	180,
	15,
	325,
	45,
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
static MENU MM6 = {
	0x40,
	0,
	"Class Hierarchy",
	121,
	180,
	45,
	325,
	75,
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
static MENU MM7 = {
	0x4,
	45,
	NULL,
	69,
	180,
	15,
	325,
	75,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM5,
	&MM6,
	NULL,
	NULL,
};
static MENU MM8 = {
	0x40,
	0,
	"Static Members",
	83,
	180,
	75,
	325,
	105,
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
	"Dump Memory",
	87,
	180,
	105,
	325,
	135,
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
	0x4,
	105,
	NULL,
	83,
	180,
	75,
	325,
	135,
	0,
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
	0x404,
	75,
	NULL,
	0,
	180,
	15,
	325,
	135,
	-23,
	-11,
	0,
	0,
	0,
	NULL,
	&MM7,
	&MM10,
	NULL,
	NULL,
};
static MENU MM12 = {
	0x2260,
	0,
	"Expand",
	69,
	109,
	-1,
	203,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM11,
	NULL,
	NULL,
	NULL,
};
static MENU MM13 = {
	0x8,
	109,
	NULL,
	121,
	72,
	-1,
	203,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM4,
	&MM12,
	NULL,
	NULL,
};
static MENU MM14 = {
	0x8,
	72,
	NULL,
	100,
	-1,
	-1,
	203,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM3,
	&MM13,
	NULL,
	NULL,
};
static MENU MM15 = {
	0x40,
	0,
	"First level",
	99,
	279,
	14,
	417,
	42,
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
static MENU MM16 = {
	0x40,
	0,
	"Completely",
	67,
	279,
	42,
	417,
	71,
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
static MENU MM17 = {
	0x404,
	42,
	NULL,
	0,
	279,
	14,
	417,
	71,
	-35,
	-12,
	0,
	0,
	0,
	NULL,
	&MM15,
	&MM16,
	NULL,
	NULL,
};
static MENU MM18 = {
	0x2260,
	0,
	"Collapse",
	63,
	203,
	-1,
	314,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM17,
	NULL,
	NULL,
	NULL,
};
static MENU MM19 = {
	0x40,
	0,
	"Dup",
	68,
	314,
	-1,
	371,
	26,
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
static MENU MM20 = {
	0x8,
	314,
	NULL,
	63,
	203,
	-1,
	371,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM18,
	&MM19,
	NULL,
	NULL,
};
static MENU MM21 = {
	0x40,
	0,
	"Del",
	107,
	371,
	-1,
	436,
	26,
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
static MENU MM22 = {
	0x40,
	0,
	"Decimal",
	84,
	342,
	63,
	435,
	88,
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
static MENU MM23 = {
	0x40,
	0,
	"Octal",
	79,
	342,
	88,
	435,
	114,
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
static MENU MM24 = {
	0x4,
	88,
	NULL,
	84,
	342,
	63,
	435,
	114,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM22,
	&MM23,
	NULL,
	NULL,
};
static MENU MM25 = {
	0x40,
	0,
	"Hex",
	72,
	342,
	114,
	435,
	139,
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
static MENU MM26 = {
	0x40,
	0,
	"Binary",
	66,
	342,
	139,
	435,
	165,
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
static MENU MM27 = {
	0x4,
	139,
	NULL,
	72,
	342,
	114,
	435,
	165,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM25,
	&MM26,
	NULL,
	NULL,
};
static MENU MM28 = {
	0x404,
	114,
	NULL,
	0,
	342,
	63,
	435,
	165,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM24,
	&MM27,
	NULL,
	NULL,
};
static MENU MM29 = {
	0x260,
	0,
	"Unsigned",
	63,
	344,
	31,
	434,
	59,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM28,
	NULL,
	NULL,
	NULL,
};
static MENU MM30 = {
	0x40,
	0,
	"Decimal",
	116,
	432,
	63,
	525,
	89,
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
static MENU MM31 = {
	0x40,
	0,
	"Octal",
	111,
	432,
	89,
	525,
	115,
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
static MENU MM32 = {
	0x40,
	0,
	"Hex",
	104,
	432,
	115,
	525,
	141,
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
static MENU MM33 = {
	0x4,
	115,
	NULL,
	111,
	432,
	89,
	525,
	141,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM31,
	&MM32,
	NULL,
	NULL,
};
static MENU MM34 = {
	0x404,
	89,
	NULL,
	0,
	432,
	63,
	525,
	141,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM30,
	&MM33,
	NULL,
	NULL,
};
static MENU MM35 = {
	0x260,
	0,
	"Signed",
	63,
	434,
	31,
	525,
	59,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM34,
	NULL,
	NULL,
	NULL,
};
static MENU MM36 = {
	0x40,
	0,
	"Default",
	110,
	525,
	63,
	636,
	88,
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
static MENU MM37 = {
	0x40,
	0,
	"Ascii",
	97,
	525,
	88,
	636,
	114,
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
static MENU MM38 = {
	0x40,
	0,
	"String",
	115,
	525,
	114,
	636,
	140,
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
static MENU MM39 = {
	0x4,
	114,
	NULL,
	97,
	525,
	88,
	636,
	140,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM37,
	&MM38,
	NULL,
	NULL,
};
static MENU MM40 = {
	0x404,
	88,
	NULL,
	0,
	525,
	63,
	636,
	140,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM36,
	&MM39,
	NULL,
	NULL,
};
static MENU MM41 = {
	0x260,
	0,
	"Other",
	98,
	525,
	31,
	616,
	59,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM40,
	NULL,
	NULL,
	NULL,
};
static MENU MM42 = {
	0x8,
	525,
	NULL,
	63,
	434,
	31,
	616,
	59,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM35,
	&MM41,
	NULL,
	NULL,
};
static MENU MM43 = {
	0x408,
	434,
	NULL,
	0,
	344,
	31,
	616,
	59,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM29,
	&MM42,
	NULL,
	NULL,
};
static MENU MM44 = {
	0x260,
	0,
	"Format",
	63,
	436,
	-1,
	527,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM43,
	NULL,
	NULL,
	NULL,
};
static MENU MM45 = {
	0x40,
	0,
	"Use typedefs",
	85,
	600,
	24,
	742,
	49,
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
static MENU MM46 = {
	0x40,
	0,
	"Ignore typedefs",
	73,
	600,
	49,
	742,
	75,
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
static MENU MM47 = {
	0x404,
	49,
	NULL,
	0,
	600,
	24,
	742,
	75,
	0,
	-2,
	0,
	0,
	0,
	NULL,
	&MM45,
	&MM46,
	NULL,
	NULL,
};
static MENU MM48 = {
	0x3260,
	0,
	"Decl",
	113,
	527,
	-1,
	600,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM47,
	NULL,
	NULL,
	NULL,
};
static MENU MM49 = {
	0x8,
	527,
	NULL,
	63,
	436,
	-1,
	600,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM44,
	&MM48,
	NULL,
	NULL,
};
static MENU MM50 = {
	0x8,
	436,
	NULL,
	107,
	371,
	-1,
	600,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM21,
	&MM49,
	NULL,
	NULL,
};
static MENU MM51 = {
	0x8,
	371,
	NULL,
	63,
	203,
	-1,
	600,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM20,
	&MM50,
	NULL,
	NULL,
};
MENU var_men = {
	0x408,
	203,
	NULL,
	0,
	-1,
	-1,
	600,
	26,
	0,
	0,
	0,
	0,
	0,
	NULL,
	&MM14,
	&MM51,
	NULL,
	NULL,
};
