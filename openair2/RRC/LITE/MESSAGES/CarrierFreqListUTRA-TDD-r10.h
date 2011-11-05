/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CarrierFreqListUTRA_TDD_r10_H_
#define	_CarrierFreqListUTRA_TDD_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqListUTRA-TDD-r10 */
typedef struct CarrierFreqListUTRA_TDD_r10 {
	A_SEQUENCE_OF(ARFCN_ValueUTRA_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqListUTRA_TDD_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqListUTRA_TDD_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqListUTRA_TDD_r10_H_ */
#include <asn_internal.h>
