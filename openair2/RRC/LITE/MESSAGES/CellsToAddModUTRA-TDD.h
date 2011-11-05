/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellsToAddModUTRA_TDD_H_
#define	_CellsToAddModUTRA_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellIdUTRA-TDD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellsToAddModUTRA-TDD */
typedef struct CellsToAddModUTRA_TDD {
	long	 cellIndex;
	PhysCellIdUTRA_TDD_t	 physCellId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModUTRA_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModUTRA_TDD;

#ifdef __cplusplus
}
#endif

#endif	/* _CellsToAddModUTRA_TDD_H_ */
#include <asn_internal.h>
