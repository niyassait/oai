/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "LogMeasInfo-r10.h"

static int
memb_relativeTimeStamp_r10_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_relativeTimeStamp_r10_constr_3 = {
	{ APC_CONSTRAINED,	 13,  13,  0,  7200 }	/* (0..7200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measResultServCell_r10_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10__measResultServCell_r10, rsrpResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrpResult-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10__measResultServCell_r10, rsrqResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrqResult-r10"
		},
};
static ber_tlv_tag_t asn_DEF_measResultServCell_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResultServCell_r10_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r10 at 1402 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r10 at 1404 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultServCell_r10_specs_5 = {
	sizeof(struct LogMeasInfo_r10__measResultServCell_r10),
	offsetof(struct LogMeasInfo_r10__measResultServCell_r10, _asn_ctx),
	asn_MAP_measResultServCell_r10_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultServCell_r10_5 = {
	"measResultServCell-r10",
	"measResultServCell-r10",
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
	asn_DEF_measResultServCell_r10_tags_5,
	sizeof(asn_DEF_measResultServCell_r10_tags_5)
		/sizeof(asn_DEF_measResultServCell_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_measResultServCell_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_measResultServCell_r10_tags_5)
		/sizeof(asn_DEF_measResultServCell_r10_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResultServCell_r10_5,
	2,	/* Elements count */
	&asn_SPC_measResultServCell_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultNeighCells_r10_8[] = {
	{ ATF_POINTER, 4, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListEUTRA_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListEUTRA-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListUTRA_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2UTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListUTRA-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListGERAN_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2GERAN_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListGERAN-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, measResultListCDMA2000_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2CDMA2000_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListCDMA2000-r10"
		},
};
static int asn_MAP_measResultNeighCells_r10_oms_8[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_measResultNeighCells_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResultNeighCells_r10_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListEUTRA-r10 at 1406 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultListUTRA-r10 at 1407 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultListGERAN-r10 at 1408 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResultListCDMA2000-r10 at 1409 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultNeighCells_r10_specs_8 = {
	sizeof(struct LogMeasInfo_r10__measResultNeighCells_r10),
	offsetof(struct LogMeasInfo_r10__measResultNeighCells_r10, _asn_ctx),
	asn_MAP_measResultNeighCells_r10_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_measResultNeighCells_r10_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultNeighCells_r10_8 = {
	"measResultNeighCells-r10",
	"measResultNeighCells-r10",
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
	asn_DEF_measResultNeighCells_r10_tags_8,
	sizeof(asn_DEF_measResultNeighCells_r10_tags_8)
		/sizeof(asn_DEF_measResultNeighCells_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_measResultNeighCells_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_measResultNeighCells_r10_tags_8)
		/sizeof(asn_DEF_measResultNeighCells_r10_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResultNeighCells_r10_8,
	4,	/* Elements count */
	&asn_SPC_measResultNeighCells_r10_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LogMeasInfo_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r10, locationInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationInfo_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"locationInfo-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10, relativeTimeStamp_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_relativeTimeStamp_r10_constraint_1,
		&asn_PER_memb_relativeTimeStamp_r10_constr_3,
		0,
		"relativeTimeStamp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10, servCellIdentity_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"servCellIdentity-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r10, measResultServCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_measResultServCell_r10_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultServCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r10, measResultNeighCells_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_measResultNeighCells_r10_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultNeighCells-r10"
		},
};
static int asn_MAP_LogMeasInfo_r10_oms_1[] = { 0, 4 };
static ber_tlv_tag_t asn_DEF_LogMeasInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LogMeasInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationInfo-r10 at 1398 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* relativeTimeStamp-r10 at 1399 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* servCellIdentity-r10 at 1400 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultServCell-r10 at 1402 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* measResultNeighCells-r10 at 1406 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LogMeasInfo_r10_specs_1 = {
	sizeof(struct LogMeasInfo_r10),
	offsetof(struct LogMeasInfo_r10, _asn_ctx),
	asn_MAP_LogMeasInfo_r10_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LogMeasInfo_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LogMeasInfo_r10 = {
	"LogMeasInfo-r10",
	"LogMeasInfo-r10",
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
	asn_DEF_LogMeasInfo_r10_tags_1,
	sizeof(asn_DEF_LogMeasInfo_r10_tags_1)
		/sizeof(asn_DEF_LogMeasInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_LogMeasInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LogMeasInfo_r10_tags_1)
		/sizeof(asn_DEF_LogMeasInfo_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LogMeasInfo_r10_1,
	5,	/* Elements count */
	&asn_SPC_LogMeasInfo_r10_specs_1	/* Additional specs */
};

