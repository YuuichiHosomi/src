/*	$OpenBSD: lpdchar.c,v 1.4 2002/05/20 23:13:50 millert Exp $	*/
/*	$NetBSD: lpdchar.c,v 1.5 1997/07/17 05:44:32 mikel Exp $	*/

/*
 * Copyright (c) 1983, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef lint
#if 0
static const char sccsid[] = "@(#)lpdchar.c	8.1 (Berkeley) 6/6/93";
#else
static const char rcsid[] = "$OpenBSD: lpdchar.c,v 1.4 2002/05/20 23:13:50 millert Exp $";
#endif
#endif /* not lint */

/*
 *	Character set for line printer daemon
 */
#include "lp.local.h"

#define c_______ 0
#define c______1 01
#define c_____1_ 02
#define c____1__ 04
#define c____11_ 06
#define c___1___ 010
#define c___1__1 011
#define c___1_1_ 012
#define c___11__ 014
#define c__1____ 020
#define c__1__1_ 022
#define c__1_1__ 024
#define c__11___ 030
#define c__111__ 034
#define c__111_1 035
#define c__1111_ 036
#define c__11111 037
#define c_1_____ 040
#define c_1____1 041
#define c_1___1_ 042
#define c_1__1__ 044
#define c_1_1___ 050
#define c_1_1__1 051
#define c_1_1_1_ 052
#define c_11____ 060
#define c_11_11_ 066
#define c_111___ 070
#define c_111__1 071
#define c_111_1_ 072
#define c_1111__ 074
#define c_1111_1 075
#define c_11111_ 076
#define c_111111 077
#define c1______ 0100
#define c1_____1 0101
#define c1____1_ 0102
#define c1____11 0103
#define c1___1__ 0104
#define c1___1_1 0105
#define c1___11_ 0106
#define c1__1___ 0110
#define c1__1__1 0111
#define c1__11_1 0115
#define c1__1111 0117
#define c1_1____ 0120
#define c1_1___1 0121
#define c1_1_1_1 0125
#define c1_1_11_ 0126
#define c1_111__ 0134
#define c1_1111_ 0136
#define c11____1 0141
#define c11___1_ 0142
#define c11___11 0143
#define c11_1___ 0150
#define c11_1__1 0151
#define c111_11_ 0166
#define c1111___ 0170
#define c11111__ 0174
#define c111111_ 0176
#define c1111111 0177

const char scnkey[][HEIGHT] =	/* this is relatively easy to modify */
			/* just look: */
{
	{ c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______ },			/*   */

	{ c__11___,
	  c__11___,
	  c__11___,
	  c__11___,
	  c__11___,
	  c_______,
	  c_______,
	  c__11___,
	  c__11___ },			/* ! */

	{ c_1__1__,
	  c_1__1__,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______ },			/* " */

	{ c_______,
	  c__1_1__,
	  c__1_1__,
	  c1111111,
	  c__1_1__,
	  c1111111,
	  c__1_1__,
	  c__1_1__,
	  c_______ },			/* # */

	{ c___1___,
	  c_11111_,
	  c1__1__1,
	  c1__1___,
	  c_11111_,
	  c___1__1,
	  c1__1__1,
	  c_11111_,
	  c___1___ },			/* $ */

 	{ c_1_____,
 	  c1_1___1,
 	  c_1___1_,
 	  c____1__,
 	  c___1___,
 	  c__1____,
 	  c_1___1_,
 	  c1___1_1,
 	  c_____1_ },			/* % */
 
 	{ c_11____,
 	  c1__1___,
 	  c1___1__,
 	  c_1_1___,
 	  c__1____,
 	  c_1_1__1,
 	  c1___11_,
 	  c1___11_,
 	  c_111__1 },			/* & */
 
 	{ c___11__,
 	  c___11__,
 	  c___1___,
 	  c__1____,
 	  c_______,
 	  c_______,
 	  c_______,
 	  c_______,
 	  c_______ },			/* ' */
 
 	{ c____1__,
 	  c___1___,
 	  c__1____,
 	  c__1____,
 	  c__1____,
 	  c__1____,
 	  c__1____,
 	  c___1___,
 	  c____1__ },			/* ( */
 
 	{ c__1____,
 	  c___1___,
 	  c____1__,
 	  c____1__,
 	  c____1__,
 	  c____1__,
 	  c____1__,
 	  c___1___,
 	  c__1____ },			/* ) */
 
 	{ c_______,
 	  c___1___,
 	  c1__1__1,
 	  c_1_1_1_,
 	  c__111__,
 	  c_1_1_1_,
 	  c1__1__1,
 	  c___1___,
 	  c_______ },			/* * */
 
 	{ c_______,
 	  c___1___,
 	  c___1___,
 	  c___1___,
 	  c1111111,
 	  c___1___,
 	  c___1___,
 	  c___1___,
 	  c_______ },			/* + */
 
 	{ c_______,
 	  c_______,
 	  c_______,
 	  c_______,
 	  c__11___,
 	  c__11___,
 	  c__1____,
 	  c_1_____,
 	  c_______ },			/* , */
 
 	{ c_______,
 	  c_______,
 	  c_______,
 	  c_______,
 	  c1111111,
 	  c_______,
 	  c_______,
 	  c_______,
 	  c_______ },			/* - */
 
 	{ c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c__11___,
	  c__11___ },			/* . */

	{ c_______,
	  c______1,
	  c_____1_,
	  c____1__,
	  c___1___,
	  c__1____,
	  c_1_____,
	  c1______,
	  c_______ },			/* / */

	{ c_11111_,
	  c1_____1,
	  c1____11,
	  c1___1_1,
	  c1__1__1,
	  c1_1___1,
	  c11____1,
	  c1_____1,
	  c_11111_ },			/* 0 */

	{ c___1___,
	  c__11___,
	  c_1_1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c_11111_ },			/* 1 */

	{ c_11111_,
	  c1_____1,
	  c______1,
	  c_____1_,
	  c__111__,
	  c_1_____,
	  c1______,
	  c1______,
	  c1111111 },			/* 2 */

	{ c_11111_,
	  c1_____1,
	  c______1,
	  c______1,
	  c__1111_,
	  c______1,
	  c______1,
	  c1_____1,
	  c_11111_ },			/* 3 */

	{ c_____1_,
	  c____11_,
	  c___1_1_,
	  c__1__1_,
	  c_1___1_,
	  c1____1_,
	  c1111111,
	  c_____1_,
	  c_____1_ },			/* 4 */

	{ c1111111,
	  c1______,
	  c1______,
	  c11111__,
	  c_____1_,
	  c______1,
	  c______1,
	  c1____1_,
	  c_1111__ },			/* 5 */

	{ c__1111_,
	  c_1_____,
	  c1______,
	  c1______,
	  c1_1111_,
	  c11____1,
	  c1_____1,
	  c1_____1,
	  c_11111_ },			/* 6 */

	{ c1111111,
	  c1_____1,
	  c_____1_,
	  c____1__,
	  c___1___,
	  c__1____,
	  c__1____,
	  c__1____,
	  c__1____ },			/* 7 */

	{ c_11111_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c_11111_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c_11111_ },			/* 8 */

	{ c_11111_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c_111111,
	  c______1,
	  c______1,
	  c1_____1,
	  c_1111__ },			/* 9 */

	{ c_______,
	  c_______,
	  c_______,
	  c__11___,
	  c__11___,
	  c_______,
	  c_______,
	  c__11___,
	  c__11___ },			/* : */


	{ c__11___,
	  c__11___,
	  c_______,
	  c_______,
	  c__11___,
	  c__11___,
	  c__1____,
	  c_1_____,
	  c_______ },			/* ; */

	{ c____1__,
	  c___1___,
	  c__1____,
	  c_1_____,
	  c1______,
	  c_1_____,
	  c__1____,
	  c___1___,
	  c____1__ },			/* < */

	{ c_______,
	  c_______,
	  c_______,
	  c1111111,
	  c_______,
	  c1111111,
	  c_______,
	  c_______,
	  c_______ },			/* = */

	{ c__1____,
	  c___1___,
	  c____1__,
	  c_____1_,
	  c______1,
	  c_____1_,
	  c____1__,
	  c___1___,
	  c__1____ },			/* > */

	{ c__1111_,
	  c_1____1,
	  c_1____1,
	  c______1,
	  c____11_,
	  c___1___,
	  c___1___,
	  c_______,
	  c___1___ },			/* ? */

	{ c__1111_,
	  c_1____1,
	  c1__11_1,
	  c1_1_1_1,
	  c1_1_1_1,
	  c1_1111_,
	  c1______,
	  c_1____1,
	  c__1111_ },			/* @ */

	{ c__111__,
	  c_1___1_,
	  c1_____1,
	  c1_____1,
	  c1111111,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1 },			/* A */

	{ c111111_,
	  c_1____1,
	  c_1____1,
	  c_1____1,
	  c_11111_,
	  c_1____1,
	  c_1____1,
	  c_1____1,
	  c111111_ },			/* B */

	{ c__1111_,
	  c_1____1,
	  c1______,
	  c1______,
	  c1______,
	  c1______,
	  c1______,
	  c_1____1,
	  c__1111_ },			/* C */

	{ c11111__,
	  c_1___1_,
	  c_1____1,
	  c_1____1,
	  c_1____1,
	  c_1____1,
	  c_1____1,
	  c_1___1_,
	  c11111__ },			/* D */

	{ c1111111,
	  c1______,
	  c1______,
	  c1______,
	  c111111_,
	  c1______,
	  c1______,
	  c1______,
	  c1111111 },			/* E */

	{ c1111111,
	  c1______,
	  c1______,
	  c1______,
	  c111111_,
	  c1______,
	  c1______,
	  c1______,
	  c1______ },			/* F */

	{ c__1111_,
	  c_1____1,
	  c1______,
	  c1______,
	  c1______,
	  c1__1111,
	  c1_____1,
	  c_1____1,
	  c__1111_ },			/* G */

	{ c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1111111,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1 },			/* H */

	{ c_11111_,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c_11111_ },			/* I */

	{ c__11111,
	  c____1__,
	  c____1__,
	  c____1__,
	  c____1__,
	  c____1__,
	  c____1__,
	  c1___1__,
	  c_111___ },			/* J */

	{ c1_____1,
	  c1____1_,
	  c1___1__,
	  c1__1___,
	  c1_1____,
	  c11_1___,
	  c1___1__,
	  c1____1_,
	  c1_____1 },			/* K */

	{ c1______,
	  c1______,
	  c1______,
	  c1______,
	  c1______,
	  c1______,
	  c1______,
	  c1______,
	  c1111111 },			/* L */

	{ c1_____1,
	  c11___11,
	  c1_1_1_1,
	  c1__1__1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1 },			/* M */

	{ c1_____1,
	  c11____1,
	  c1_1___1,
	  c1__1__1,
	  c1___1_1,
	  c1____11,
	  c1_____1,
	  c1_____1,
	  c1_____1 },			/* N */

	{ c__111__,
	  c_1___1_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c_1___1_,
	  c__111__ },			/* O */

	{ c111111_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c111111_,
	  c1______,
	  c1______,
	  c1______,
	  c1______ },			/* P */

	{ c__111__,
	  c_1___1_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1__1__1,
	  c1___1_1,
	  c_1___1_,
	  c__111_1 },			/* Q */

	{ c111111_,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c111111_,
	  c1__1___,
	  c1___1__,
	  c1____1_,
	  c1_____1 },			/* R */

	{ c_11111_,
	  c1_____1,
	  c1______,
	  c1______,
	  c_11111_,
	  c______1,
	  c______1,
	  c1_____1,
	  c_11111_ },			/* S */

	{ c1111111,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___ },			/* T */

	{ c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c_11111_ },			/* U */

	{ c1_____1,
	  c1_____1,
	  c1_____1,
	  c_1___1_,
	  c_1___1_,
	  c__1_1__,
	  c__1_1__,
	  c___1___,
	  c___1___ },			/* V */

	{ c1_____1,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c1__1__1,
	  c1__1__1,
	  c1_1_1_1,
	  c11___11,
	  c1_____1 },			/* W */

	{ c1_____1,
	  c1_____1,
	  c_1___1_,
	  c__1_1__,
	  c___1___,
	  c__1_1__,
	  c_1___1_,
	  c1_____1,
	  c1_____1 },			/* X */

	{ c1_____1,
	  c1_____1,
	  c_1___1_,
	  c__1_1__,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___ },			/* Y */

	{ c1111111,
	  c______1,
	  c_____1_,
	  c____1__,
	  c___1___,
	  c__1____,
	  c_1_____,
	  c1______,
	  c1111111 },			/* Z */

	{ c_1111__,
	  c_1_____,
	  c_1_____,
	  c_1_____,
	  c_1_____,
	  c_1_____,
	  c_1_____,
	  c_1_____,
	  c_1111__ },			/* [ */

	{ c_______,
	  c1______,
	  c_1_____,
	  c__1____,
	  c___1___,
	  c____1__,
	  c_____1_,
	  c______1,
	  c_______ },			/* \ */

	{ c__1111_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c__1111_ },			/* ] */

	{ c___1___,
	  c__1_1__,
	  c_1___1_,
	  c1_____1,
	  c_______,
	  c_______,
	  c_______,
	  c_______ },			/* ^ */

	{ c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c1111111,
	  c_______ },			/* _ */

	{ c__11___,
	  c__11___,
	  c___1___,
	  c____1__,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______ },			/* ` */

	{ c_______,
	  c_______,
	  c_______,
	  c_1111__,
	  c_____1_,
	  c_11111_,
	  c1_____1,
	  c1____11,
	  c_1111_1 },			/* a */

	{ c1______,
	  c1______,
	  c1______,
	  c1_111__,
	  c11___1_,
	  c1_____1,
	  c1_____1,
	  c11___1_,
	  c1_111__ },			/* b */

	{ c_______,
	  c_______,
	  c_______,
	  c_1111__,
	  c1____1_,
	  c1______,
	  c1______,
	  c1____1_,
	  c_1111__ },			/* c */

	{ c_____1_,
	  c_____1_,
	  c_____1_,
	  c_111_1_,
	  c1___11_,
	  c1____1_,
	  c1____1_,
	  c1___11_,
	  c_111_1_ },			/* d */

	{ c_______,
	  c_______,
	  c_______,
	  c_1111__,
	  c1____1_,
	  c111111_,
	  c1______,
	  c1____1_,
	  c_1111__ },			/* e */

	{ c___11__,
	  c__1__1_,
	  c__1____,
	  c__1____,
	  c11111__,
	  c__1____,
	  c__1____,
	  c__1____,
	  c__1____ },			/* f */

	{ c_111_1_,
	  c1___11_,
	  c1____1_,
	  c1____1_,
	  c1___11_,
	  c_111_1_,
	  c_____1_,
	  c1____1_,
	  c_1111__ },			/* g */

	{ c1______,
	  c1______,
	  c1______,
	  c1_111__,
	  c11___1_,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c1____1_ },			/* h */

	{ c_______,
	  c___1___,
	  c_______,
	  c__11___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c__111__ },			/* i */

	{ c____11_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_____1_,
	  c_1___1_,
	  c__111__ },			/* j */

	{ c1______,
	  c1______,
	  c1______,
	  c1___1__,
	  c1__1___,
	  c1_1____,
	  c11_1___,
	  c1___1__,
	  c1____1_ },			/* k */

	{ c__11___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c__111__ },			/* l */

	{ c_______,
	  c_______,
	  c_______,
	  c1_1_11_,
	  c11_1__1,
	  c1__1__1,
	  c1__1__1,
	  c1__1__1,
	  c1__1__1 },			/* m */

	{ c_______,
	  c_______,
	  c_______,
	  c1_111__,
	  c11___1_,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c1____1_ },			/* n */

	{ c_______,
	  c_______,
	  c_______,
	  c_1111__,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c_1111__ },			/* o */

	{ c1_111__,
	  c11___1_,
	  c1____1_,
	  c1____1_,
	  c11___1_,
	  c1_111__,
	  c1______,
	  c1______,
	  c1______ },			/* p */

	{ c_111_1_,
	  c1___11_,
	  c1____1_,
	  c1____1_,
	  c1___11_,
	  c_111_1_,
	  c_____1_,
	  c_____1_,
	  c_____1_ },			/* q */

	{ c_______,
	  c_______,
	  c_______,
	  c1_111__,
	  c11___1_,
	  c1______,
	  c1______,
	  c1______,
	  c1______ },			/* r */

	{ c_______,
	  c_______,
	  c_______,
	  c_1111__,
	  c1____1_,
	  c_11____,
	  c___11__,
	  c1____1_,
	  c_1111__ },			/* s */

	{ c_______,
	  c__1____,
	  c__1____,
	  c11111__,
	  c__1____,
	  c__1____,
	  c__1____,
	  c__1__1_,
	  c___11__ },			/* t */

	{ c_______,
	  c_______,
	  c_______,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c1___11_,
	  c_111_1_ },			/* u */

	{ c_______,
	  c_______,
	  c_______,
	  c1_____1,
	  c1_____1,
	  c1_____1,
	  c_1___1_,
	  c__1_1__,
	  c___1___ },			/* v */

	{ c_______,
	  c_______,
	  c_______,
	  c1_____1,
	  c1__1__1,
	  c1__1__1,
	  c1__1__1,
	  c1__1__1,
	  c_11_11_ },			/* w */

	{ c_______,
	  c_______,
	  c_______,
	  c1____1_,
	  c_1__1__,
	  c__11___,
	  c__11___,
	  c_1__1__,
	  c1____1_ },			/* x */

	{ c1____1_,
	  c1____1_,
	  c1____1_,
	  c1____1_,
	  c1___11_,
	  c_111_1_,
	  c_____1_,
	  c1____1_,
	  c_1111__ },			/* y */

	{ c_______,
	  c_______,
	  c_______,
	  c111111_,
	  c____1__,
	  c___1___,
	  c__1____,
	  c_1_____,
	  c111111_ },			/* z */

	{ c___11__,
	  c__1____,
	  c__1____,
	  c__1____,
	  c_1_____,
	  c__1____,
	  c__1____,
	  c__1____,
	  c___11__ },			/* } */

	{ c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___,
	  c___1___ },			/* | */

	{ c__11___,
	  c____1__,
	  c____1__,
	  c____1__,
	  c_____1_,
	  c____1__,
	  c____1__,
	  c____1__,
	  c__11___ },			/* } */

	{ c_11____,
	  c1__1__1,
	  c____11_,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______,
	  c_______ },			/* ~ */

	{ c_1__1__,
	  c1__1__1,
	  c__1__1_,
	  c_1__1__,
	  c1__1__1,
	  c__1__1_,
	  c_1__1__,
	  c1__1__1,
	  c__1__1_ }			/* rub-out */
};
