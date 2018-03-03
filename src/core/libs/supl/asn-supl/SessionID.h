/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../supl-common.asn"
 */

#ifndef _SessionID_H_
#define _SessionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetSessionID;
struct SlpSessionID;

/* SessionID */
typedef struct SessionID
{
    struct SetSessionID *setSessionID /* OPTIONAL */;
    struct SlpSessionID *slpSessionID /* OPTIONAL */;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} SessionID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SessionID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetSessionID.h"
#include "SlpSessionID.h"

#endif /* _SessionID_H_ */
#include <asn_internal.h>
