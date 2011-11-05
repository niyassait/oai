/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SRS-ConfigAp-r10.h"

static int
srs_AntennaPortAp_r10_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
srs_AntennaPortAp_r10_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
srs_AntennaPortAp_r10_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
srs_AntennaPortAp_r10_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
srs_AntennaPortAp_r10_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
srs_AntennaPortAp_r10_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
srs_AntennaPortAp_r10_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
srs_AntennaPortAp_r10_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
srs_AntennaPortAp_r10_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_AntennaPortAp_r10_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
srs_BandwidthAp_r10_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
srs_BandwidthAp_r10_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
srs_BandwidthAp_r10_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
srs_BandwidthAp_r10_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
srs_BandwidthAp_r10_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
srs_BandwidthAp_r10_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
srs_BandwidthAp_r10_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
srs_BandwidthAp_r10_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
srs_BandwidthAp_r10_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_BandwidthAp_r10_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
cyclicShiftAp_r10_14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
cyclicShiftAp_r10_14_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
cyclicShiftAp_r10_14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
cyclicShiftAp_r10_14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
cyclicShiftAp_r10_14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
cyclicShiftAp_r10_14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
cyclicShiftAp_r10_14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
cyclicShiftAp_r10_14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
cyclicShiftAp_r10_14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
cyclicShiftAp_r10_14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	cyclicShiftAp_r10_14_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_freqDomainPositionAp_r10_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 23)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_transmissionCombAp_r10_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_srs_AntennaPortAp_r10_constr_2 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_BandwidthAp_r10_constr_7 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cyclicShiftAp_r10_constr_14 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_freqDomainPositionAp_r10_constr_12 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  23 }	/* (0..23) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_transmissionCombAp_r10_constr_13 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_srs_AntennaPortAp_r10_value2enum_2[] = {
	{ 0,	3,	"an1" },
	{ 1,	3,	"an2" },
	{ 2,	3,	"an4" },
	{ 3,	6,	"spare1" }
};
static unsigned int asn_MAP_srs_AntennaPortAp_r10_enum2value_2[] = {
	0,	/* an1(0) */
	1,	/* an2(1) */
	2,	/* an4(2) */
	3	/* spare1(3) */
};
static asn_INTEGER_specifics_t asn_SPC_srs_AntennaPortAp_r10_specs_2 = {
	asn_MAP_srs_AntennaPortAp_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_AntennaPortAp_r10_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_srs_AntennaPortAp_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_AntennaPortAp_r10_2 = {
	"srs-AntennaPortAp-r10",
	"srs-AntennaPortAp-r10",
	srs_AntennaPortAp_r10_2_free,
	srs_AntennaPortAp_r10_2_print,
	srs_AntennaPortAp_r10_2_constraint,
	srs_AntennaPortAp_r10_2_decode_ber,
	srs_AntennaPortAp_r10_2_encode_der,
	srs_AntennaPortAp_r10_2_decode_xer,
	srs_AntennaPortAp_r10_2_encode_xer,
	srs_AntennaPortAp_r10_2_decode_uper,
	srs_AntennaPortAp_r10_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_AntennaPortAp_r10_tags_2,
	sizeof(asn_DEF_srs_AntennaPortAp_r10_tags_2)
		/sizeof(asn_DEF_srs_AntennaPortAp_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_srs_AntennaPortAp_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_srs_AntennaPortAp_r10_tags_2)
		/sizeof(asn_DEF_srs_AntennaPortAp_r10_tags_2[0]), /* 2 */
	&asn_PER_type_srs_AntennaPortAp_r10_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_AntennaPortAp_r10_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_srs_BandwidthAp_r10_value2enum_7[] = {
	{ 0,	3,	"bw0" },
	{ 1,	3,	"bw1" },
	{ 2,	3,	"bw2" },
	{ 3,	3,	"bw3" }
};
static unsigned int asn_MAP_srs_BandwidthAp_r10_enum2value_7[] = {
	0,	/* bw0(0) */
	1,	/* bw1(1) */
	2,	/* bw2(2) */
	3	/* bw3(3) */
};
static asn_INTEGER_specifics_t asn_SPC_srs_BandwidthAp_r10_specs_7 = {
	asn_MAP_srs_BandwidthAp_r10_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_BandwidthAp_r10_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_srs_BandwidthAp_r10_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_BandwidthAp_r10_7 = {
	"srs-BandwidthAp-r10",
	"srs-BandwidthAp-r10",
	srs_BandwidthAp_r10_7_free,
	srs_BandwidthAp_r10_7_print,
	srs_BandwidthAp_r10_7_constraint,
	srs_BandwidthAp_r10_7_decode_ber,
	srs_BandwidthAp_r10_7_encode_der,
	srs_BandwidthAp_r10_7_decode_xer,
	srs_BandwidthAp_r10_7_encode_xer,
	srs_BandwidthAp_r10_7_decode_uper,
	srs_BandwidthAp_r10_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_BandwidthAp_r10_tags_7,
	sizeof(asn_DEF_srs_BandwidthAp_r10_tags_7)
		/sizeof(asn_DEF_srs_BandwidthAp_r10_tags_7[0]) - 1, /* 1 */
	asn_DEF_srs_BandwidthAp_r10_tags_7,	/* Same as above */
	sizeof(asn_DEF_srs_BandwidthAp_r10_tags_7)
		/sizeof(asn_DEF_srs_BandwidthAp_r10_tags_7[0]), /* 2 */
	&asn_PER_type_srs_BandwidthAp_r10_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_BandwidthAp_r10_specs_7	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_cyclicShiftAp_r10_value2enum_14[] = {
	{ 0,	3,	"cs0" },
	{ 1,	3,	"cs1" },
	{ 2,	3,	"cs2" },
	{ 3,	3,	"cs3" },
	{ 4,	3,	"cs4" },
	{ 5,	3,	"cs5" },
	{ 6,	3,	"cs6" },
	{ 7,	3,	"cs7" }
};
static unsigned int asn_MAP_cyclicShiftAp_r10_enum2value_14[] = {
	0,	/* cs0(0) */
	1,	/* cs1(1) */
	2,	/* cs2(2) */
	3,	/* cs3(3) */
	4,	/* cs4(4) */
	5,	/* cs5(5) */
	6,	/* cs6(6) */
	7	/* cs7(7) */
};
static asn_INTEGER_specifics_t asn_SPC_cyclicShiftAp_r10_specs_14 = {
	asn_MAP_cyclicShiftAp_r10_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_cyclicShiftAp_r10_enum2value_14,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_cyclicShiftAp_r10_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cyclicShiftAp_r10_14 = {
	"cyclicShiftAp-r10",
	"cyclicShiftAp-r10",
	cyclicShiftAp_r10_14_free,
	cyclicShiftAp_r10_14_print,
	cyclicShiftAp_r10_14_constraint,
	cyclicShiftAp_r10_14_decode_ber,
	cyclicShiftAp_r10_14_encode_der,
	cyclicShiftAp_r10_14_decode_xer,
	cyclicShiftAp_r10_14_encode_xer,
	cyclicShiftAp_r10_14_decode_uper,
	cyclicShiftAp_r10_14_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_cyclicShiftAp_r10_tags_14,
	sizeof(asn_DEF_cyclicShiftAp_r10_tags_14)
		/sizeof(asn_DEF_cyclicShiftAp_r10_tags_14[0]) - 1, /* 1 */
	asn_DEF_cyclicShiftAp_r10_tags_14,	/* Same as above */
	sizeof(asn_DEF_cyclicShiftAp_r10_tags_14)
		/sizeof(asn_DEF_cyclicShiftAp_r10_tags_14[0]), /* 2 */
	&asn_PER_type_cyclicShiftAp_r10_constr_14,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cyclicShiftAp_r10_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SRS_ConfigAp_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, srs_AntennaPortAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_AntennaPortAp_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-AntennaPortAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, srs_BandwidthAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_BandwidthAp_r10_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-BandwidthAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, freqDomainPositionAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_freqDomainPositionAp_r10_constraint_1,
		&asn_PER_memb_freqDomainPositionAp_r10_constr_12,
		0,
		"freqDomainPositionAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, transmissionCombAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_transmissionCombAp_r10_constraint_1,
		&asn_PER_memb_transmissionCombAp_r10_constr_13,
		0,
		"transmissionCombAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, cyclicShiftAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cyclicShiftAp_r10_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cyclicShiftAp-r10"
		},
};
static ber_tlv_tag_t asn_DEF_SRS_ConfigAp_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SRS_ConfigAp_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-AntennaPortAp-r10 at 2718 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-BandwidthAp-r10 at 2719 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqDomainPositionAp-r10 at 2720 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* transmissionCombAp-r10 at 2721 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* cyclicShiftAp-r10 at 2722 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SRS_ConfigAp_r10_specs_1 = {
	sizeof(struct SRS_ConfigAp_r10),
	offsetof(struct SRS_ConfigAp_r10, _asn_ctx),
	asn_MAP_SRS_ConfigAp_r10_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SRS_ConfigAp_r10 = {
	"SRS-ConfigAp-r10",
	"SRS-ConfigAp-r10",
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
	asn_DEF_SRS_ConfigAp_r10_tags_1,
	sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1)
		/sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1[0]), /* 1 */
	asn_DEF_SRS_ConfigAp_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1)
		/sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SRS_ConfigAp_r10_1,
	5,	/* Elements count */
	&asn_SPC_SRS_ConfigAp_r10_specs_1	/* Additional specs */
};

