/*
 * For WPS to adapt to OpenSSL crypto library
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2016,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 *
 * <<Broadcom-WL-IPTag/Proprietary:>>
 *
 * $Id: wps_sha256.h 525052 2015-01-08 20:18:35Z $
 */

#ifndef _WPS_SHA256_H_
#define _WPS_SHA256_H_

#ifdef EXTERNAL_OPENSSL

#include <sha.h>

#else

#include <sha256.h>
#include <hmac_sha256.h>

#endif /* EXTERNAL_OPENSSL */
#endif /* _WPS_SHA256_H_ */
