/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RRCConnectionReconfiguration-r8-IEs.h"

static int
memb_dedicatedInfoNASList_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 11)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_dedicatedInfoNASList_constr_4 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  11 }	/* (SIZE(1..11)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dedicatedInfoNASList_constr_4 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  11 }	/* (SIZE(1..11)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dedicatedInfoNASList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_DedicatedInfoNAS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_dedicatedInfoNASList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dedicatedInfoNASList_specs_4 = {
	sizeof(struct RRCConnectionReconfiguration_r8_IEs__dedicatedInfoNASList),
	offsetof(struct RRCConnectionReconfiguration_r8_IEs__dedicatedInfoNASList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dedicatedInfoNASList_4 = {
	"dedicatedInfoNASList",
	"dedicatedInfoNASList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dedicatedInfoNASList_tags_4,
	sizeof(asn_DEF_dedicatedInfoNASList_tags_4)
		/sizeof(asn_DEF_dedicatedInfoNASList_tags_4[0]) - 1, /* 1 */
	asn_DEF_dedicatedInfoNASList_tags_4,	/* Same as above */
	sizeof(asn_DEF_dedicatedInfoNASList_tags_4)
		/sizeof(asn_DEF_dedicatedInfoNASList_tags_4[0]), /* 2 */
	&asn_PER_type_dedicatedInfoNASList_constr_4,
	asn_MBR_dedicatedInfoNASList_4,
	1,	/* Single element */
	&asn_SPC_dedicatedInfoNASList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_r8_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionReconfiguration_r8_IEs, measConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measConfig"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionReconfiguration_r8_IEs, mobilityControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityControlInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mobilityControlInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionReconfiguration_r8_IEs, dedicatedInfoNASList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_dedicatedInfoNASList_4,
		memb_dedicatedInfoNASList_constraint_1,
		&asn_PER_memb_dedicatedInfoNASList_constr_4,
		0,
		"dedicatedInfoNASList"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionReconfiguration_r8_IEs, radioResourceConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigDedicated"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReconfiguration_r8_IEs, securityConfigHO),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityConfigHO,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"securityConfigHO"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfiguration_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfiguration_v890_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_RRCConnectionReconfiguration_r8_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionReconfiguration_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measConfig at 642 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mobilityControlInfo at 643 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dedicatedInfoNASList at 645 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceConfigDedicated at 646 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* securityConfigHO at 647 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension at 648 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_r8_IEs_specs_1 = {
	sizeof(struct RRCConnectionReconfiguration_r8_IEs),
	offsetof(struct RRCConnectionReconfiguration_r8_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReconfiguration_r8_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReconfiguration_r8_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_r8_IEs = {
	"RRCConnectionReconfiguration-r8-IEs",
	"RRCConnectionReconfiguration-r8-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionReconfiguration_r8_IEs_1,
	6,	/* Elements count */
	&asn_SPC_RRCConnectionReconfiguration_r8_IEs_specs_1	/* Additional specs */
};

