/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_FreqPriorityListEUTRA_H_
#define	_FreqPriorityListEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqPriorityEUTRA;

/* FreqPriorityListEUTRA */
typedef struct FreqPriorityListEUTRA {
	A_SEQUENCE_OF(struct FreqPriorityEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityListEUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FreqPriorityEUTRA.h"

#endif	/* _FreqPriorityListEUTRA_H_ */
#include <asn_internal.h>
