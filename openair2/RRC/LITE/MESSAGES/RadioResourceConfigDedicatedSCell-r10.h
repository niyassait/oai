/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RadioResourceConfigDedicatedSCell_r10_H_
#define	_RadioResourceConfigDedicatedSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysicalConfigDedicatedSCell_r10;

/* RadioResourceConfigDedicatedSCell-r10 */
typedef struct RadioResourceConfigDedicatedSCell_r10 {
	struct PhysicalConfigDedicatedSCell_r10	*physicalConfigDedicatedSCell_r10	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedSCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCell_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysicalConfigDedicatedSCell-r10.h"

#endif	/* _RadioResourceConfigDedicatedSCell_r10_H_ */
#include <asn_internal.h>
