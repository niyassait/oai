/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MCCH_Message_H_
#define	_MCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MCCH-Message */
typedef struct MCCH_Message {
	MCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _MCCH_Message_H_ */
#include <asn_internal.h>
