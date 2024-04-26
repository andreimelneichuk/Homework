/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "StandaloneTDD-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sib_StandaloneLocation_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sib_StandaloneLocation_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_spare_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_spare_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sib_StandaloneLocation_r15_value2enum_2[] = {
	{ 0,	5,	"lower" },
	{ 1,	6,	"higher" }
};
static const unsigned int asn_MAP_sib_StandaloneLocation_r15_enum2value_2[] = {
	1,	/* higher(1) */
	0	/* lower(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sib_StandaloneLocation_r15_specs_2 = {
	asn_MAP_sib_StandaloneLocation_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sib_StandaloneLocation_r15_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sib_StandaloneLocation_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib_StandaloneLocation_r15_2 = {
	"sib-StandaloneLocation-r15",
	"sib-StandaloneLocation-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sib_StandaloneLocation_r15_tags_2,
	sizeof(asn_DEF_sib_StandaloneLocation_r15_tags_2)
		/sizeof(asn_DEF_sib_StandaloneLocation_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_sib_StandaloneLocation_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_sib_StandaloneLocation_r15_tags_2)
		/sizeof(asn_DEF_sib_StandaloneLocation_r15_tags_2[0]), /* 2 */
	{ &asn_OER_type_sib_StandaloneLocation_r15_constr_2, &asn_PER_type_sib_StandaloneLocation_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sib_StandaloneLocation_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_StandaloneTDD_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneTDD_NB_r15, sib_StandaloneLocation_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sib_StandaloneLocation_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-StandaloneLocation-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandaloneTDD_NB_r15, spare),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_spare_constr_5, &asn_PER_memb_spare_constr_5,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_StandaloneTDD_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StandaloneTDD_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-StandaloneLocation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_StandaloneTDD_NB_r15_specs_1 = {
	sizeof(struct StandaloneTDD_NB_r15),
	offsetof(struct StandaloneTDD_NB_r15, _asn_ctx),
	asn_MAP_StandaloneTDD_NB_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_StandaloneTDD_NB_r15 = {
	"StandaloneTDD-NB-r15",
	"StandaloneTDD-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_StandaloneTDD_NB_r15_tags_1,
	sizeof(asn_DEF_StandaloneTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_StandaloneTDD_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_StandaloneTDD_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_StandaloneTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_StandaloneTDD_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_StandaloneTDD_NB_r15_1,
	2,	/* Elements count */
	&asn_SPC_StandaloneTDD_NB_r15_specs_1	/* Additional specs */
};

