/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasGapConfig_H_
#define	_MeasGapConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasGapConfig_PR {
	MeasGapConfig_PR_NOTHING,	/* No components present */
	MeasGapConfig_PR_release,
	MeasGapConfig_PR_setup
} MeasGapConfig_PR;
typedef enum MeasGapConfig__setup__gapOffset_PR {
	MeasGapConfig__setup__gapOffset_PR_NOTHING,	/* No components present */
	MeasGapConfig__setup__gapOffset_PR_gp0,
	MeasGapConfig__setup__gapOffset_PR_gp1,
	/* Extensions may appear below */
	
} MeasGapConfig__setup__gapOffset_PR;

/* MeasGapConfig */
typedef struct MeasGapConfig {
	MeasGapConfig_PR present;
	union MeasGapConfig_u {
		NULL_t	 release;
		struct MeasGapConfig__setup {
			struct MeasGapConfig__setup__gapOffset {
				MeasGapConfig__setup__gapOffset_PR present;
				union MeasGapConfig__setup__gapOffset_u {
					long	 gp0;
					long	 gp1;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gapOffset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapConfig;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasGapConfig_H_ */
#include <asn_internal.h>
