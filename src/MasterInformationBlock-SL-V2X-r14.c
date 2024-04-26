/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "MasterInformationBlock-SL-V2X-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_directFrameNumber_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_directSubframeNumber_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_reserved_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 27)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sl_Bandwidth_r14_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_Bandwidth_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_directFrameNumber_r14_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_directFrameNumber_r14_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_directSubframeNumber_r14_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (0..9) */,
	-1};
static asn_per_constraints_t asn_PER_memb_directSubframeNumber_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_reserved_r14_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	27	/* (SIZE(27..27)) */};
static asn_per_constraints_t asn_PER_memb_reserved_r14_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  27,  27 }	/* (SIZE(27..27)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_Bandwidth_r14_value2enum_2[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_sl_Bandwidth_r14_enum2value_2[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_Bandwidth_r14_specs_2 = {
	asn_MAP_sl_Bandwidth_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_Bandwidth_r14_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_Bandwidth_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_Bandwidth_r14_2 = {
	"sl-Bandwidth-r14",
	"sl-Bandwidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_Bandwidth_r14_tags_2,
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_2)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_Bandwidth_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_2)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_2[0]), /* 2 */
	{ &asn_OER_type_sl_Bandwidth_r14_constr_2, &asn_PER_type_sl_Bandwidth_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_Bandwidth_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MasterInformationBlock_SL_V2X_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_SL_V2X_r14, sl_Bandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_Bandwidth_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Bandwidth-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_SL_V2X_r14, tdd_ConfigSL_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_ConfigSL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-ConfigSL-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_SL_V2X_r14, directFrameNumber_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_directFrameNumber_r14_constr_10, &asn_PER_memb_directFrameNumber_r14_constr_10,  memb_directFrameNumber_r14_constraint_1 },
		0, 0, /* No default value */
		"directFrameNumber-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_SL_V2X_r14, directSubframeNumber_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_directSubframeNumber_r14_constr_11, &asn_PER_memb_directSubframeNumber_r14_constr_11,  memb_directSubframeNumber_r14_constraint_1 },
		0, 0, /* No default value */
		"directSubframeNumber-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_SL_V2X_r14, inCoverage_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inCoverage-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_SL_V2X_r14, reserved_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_reserved_r14_constr_13, &asn_PER_memb_reserved_r14_constr_13,  memb_reserved_r14_constraint_1 },
		0, 0, /* No default value */
		"reserved-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MasterInformationBlock_SL_V2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-Bandwidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd-ConfigSL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* directFrameNumber-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* directSubframeNumber-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* inCoverage-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* reserved-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_SL_V2X_r14_specs_1 = {
	sizeof(struct MasterInformationBlock_SL_V2X_r14),
	offsetof(struct MasterInformationBlock_SL_V2X_r14, _asn_ctx),
	asn_MAP_MasterInformationBlock_SL_V2X_r14_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_SL_V2X_r14 = {
	"MasterInformationBlock-SL-V2X-r14",
	"MasterInformationBlock-SL-V2X-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1,
	sizeof(asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1[0]), /* 1 */
	asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_SL_V2X_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MasterInformationBlock_SL_V2X_r14_1,
	6,	/* Elements count */
	&asn_SPC_MasterInformationBlock_SL_V2X_r14_specs_1	/* Additional specs */
};
