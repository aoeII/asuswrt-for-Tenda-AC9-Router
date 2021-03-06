/*
 * tkmic.h
 * Prototypes for TKIP Message Integrity Check (MIC) functions.
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2016,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 * $Id: tkmic.h 451682 2014-01-27 20:30:17Z $
 */

#ifndef _TKMIC_H_
#define _TKMIC_H_

#include <typedefs.h>

#define ROTR32(x, n)	(((x)<<(32-(n))) | ((uint32)(x)>>(n)))

#define ROTL32(x, n)	ROTR32(x, 32-n)
#define XSWAP32(x)	((((x)>> 8) & 0x00ff00ff) | (((x)<< 8) & 0xff00ff00))

/* compute mic across message */
/* buffer must already have terminator and padding appended */
/* buffer length (n) specified in bytes */
extern void tkip_mic(uint32 k0, uint32 k1, int n, uint8 *m, uint32 *left, uint32 *right);

/* append the MIC terminator to the data buffer */
/* terminator is 0x5a followed by 3-7 bytes of 0 */
/* param 'o' is current frag's offset in the frame */
/* returns length of message plus terminator in bytes */
extern int tkip_mic_eom(uint8 *m, uint n, uint o);

#endif /* _TKMIC_H_ */
