/* sccsdata.c - sccs data file for mtrprog generated by mksccs */

char mtrprog_sccsdata_c_sccsid[] = "@(#)sccsdata.c	1.41 4/6/95";

#include "sccsdata.h"

#ifndef __STDC__
#define const
#endif

/*  Changes since the last version:
 *
 *  Makefile 1.36:
 *      Change checksccs and CHECKSCCS to sccs_check and SCCS_CHECK.
 *      Change install to ${INSTALL}, with INSTALL set to ucbinstall.
 *  
 *  utils.h 1.16:
 *      Update fopen_new_file() and fclose_new_file() prototypes to track
 *      fopnew.c
 *  
 *  fopnew.c 1.7:
 *      fopen_new_file(): Return bool success/failure and set *p_fp rather
 *      than returning fp.  Take additional overwrite parameter - if TRUE, it
 *      is OK to overwrite an existing file.  Take additional what parameter
 *      (passed on to failmesg).
 *      fclose_new_file(): return bool success/failure rather than 0/-1.  Take
 *      additional ok parameter - if FALSE on entry, produce no additional
 *      error messages.
 *  
 */

const char *mtrprog__sccsdata[] = {
	"mtrprog version 1.41 (build date: Sun Jun 4 22:26:40 BST 1995)",
	"@{$mtrprog$}: sccsdata.c 1.41 ",
	"@{$mtrprog$}: read_chunk.c 1.1 ",
	"@{$mtrprog$}: hash.c 1.3 ",
	"@{$mtrprog$}: e_close.c 1.8 ",
	"@{$mtrprog$}: is_number.c 1.4 ",
	"@{$mtrprog$}: memxxx.c 1.6 ",
	"@{$mtrprog$}: query_user.c 1.8 ",
	"@{$mtrprog$}: rm_rf.c 1.10 ",
	"@{$mtrprog$}: serverhost.c 1.7 ",
	"@{$mtrprog$}: so.c 1.25 ",
	"@{$mtrprog$}: strcache.c 1.22 ",
	"@{$mtrprog$}: regex.c 1.9 ",
	"@{$mtrprog$}: strtod.c 1.11 ",
	"@{$mtrprog$}: swap_longs.c 1.5 ",
	"@{$mtrprog$}: appltofl.c 1.9 ",
	"@{$mtrprog$}: fmtostr.c 1.6 ",
	"@{$mtrprog$}: fttostr.c 1.5 ",
	"@{$mtrprog$}: fopnew.c 1.7 ",
	"@{$mtrprog$}: strtobsz.c 1.7 ",
	"@{$mtrprog$}: mtrprog_vers.c 1.6 ",
	"@{$mtrprog$}: failmesg.c 1.2 ",
	"@{$mtrprog$}: alloc.h 1.7 ",
	"@{$mtrprog$}: genmergesort.h 1.6 ",
	"@{$mtrprog$}: ifdefs.h 1.16 ",
	"@{$mtrprog$}: hash.h 1.2 ",
	"@{$mtrprog$}: regex.h 1.3 ",
	"@{$mtrprog$}: sccsdata.h 1.3 ",
	"@{$mtrprog$}: serverhost.h 1.2 ",
	"@{$mtrprog$}: so.h 1.11 ",
	"@{$mtrprog$}: strcache.h 1.7 ",
	"@{$mtrprog$}: utils.h 1.16 ",
	"@{$mtrprog$}: io.h 1.1 ",
	"@{$mtrprog$}: Makefile 1.36 ",
};
