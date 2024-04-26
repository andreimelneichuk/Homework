/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "RLC-Parameters-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_rlc_UM_r15_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rlc_UM_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_rlc_UM_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_rlc_UM_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlc_UM_r15_specs_2 = {
	asn_MAP_rlc_UM_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_rlc_UM_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlc_UM_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_UM_r15_2 = {
	"rlc-UM-r15",
	"rlc-UM-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlc_UM_r15_tags_2,
	sizeof(asn_DEF_rlc_UM_r15_tags_2)
		/sizeof(asn_DEF_rlc_UM_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_rlc_UM_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_rlc_UM_r15_tags_2)
		/sizeof(asn_DEF_rlc_UM_r15_tags_2[0]), /* 2 */
	{ &asn_OER_type_rlc_UM_r15_constr_2, &asn_PER_type_rlc_UM_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlc_UM_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLC_Parameters_NB_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RLC_Parameters_NB_r15, rlc_UM_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlc_UM_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-UM-r15"
		},
};
static const int asn_MAP_RLC_Parameters_NB_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RLC_Parameters_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_Parameters_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-UM-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_RLC_Parameters_NB_r15_specs_1 = {
	sizeof(struct RLC_Parameters_NB_r15),
	offsetof(struct RLC_Parameters_NB_r15, _asn_ctx),
	asn_MAP_RLC_Parameters_NB_r15_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RLC_Parameters_NB_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Parameters_NB_r15 = {
	"RLC-Parameters-NB-r15",
	"RLC-Parameters-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_RLC_Parameters_NB_r15_tags_1,
	sizeof(asn_DEF_RLC_Parameters_NB_r15_tags_1)
		/sizeof(asn_DEF_RLC_Parameters_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_RLC_Parameters_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_Parameters_NB_r15_tags_1)
		/sizeof(asn_DEF_RLC_Parameters_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RLC_Parameters_NB_r15_1,
	1,	/* Elements count */
	&asn_SPC_RLC_Parameters_NB_r15_specs_1	/* Additional specs */
};

