/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasResultCDMA2000_H_
#define	_MeasResultCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdCDMA2000.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellGlobalIdCDMA2000;

/* MeasResultCDMA2000 */
typedef struct MeasResultCDMA2000 {
	PhysCellIdCDMA2000_t	 physCellId;
	struct CellGlobalIdCDMA2000	*cgi_Info	/* OPTIONAL */;
	struct MeasResultCDMA2000__measResult {
		long	*pilotPnPhase	/* OPTIONAL */;
		long	 pilotStrength;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCDMA2000;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellGlobalIdCDMA2000.h"

#endif	/* _MeasResultCDMA2000_H_ */
#include <asn_internal.h>
