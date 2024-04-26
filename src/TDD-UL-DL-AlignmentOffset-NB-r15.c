/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "TDD-UL-DL-AlignmentOffset-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_TDD_UL_DL_AlignmentOffset_NB_r15_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TDD_UL_DL_AlignmentOffset_NB_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TDD_UL_DL_AlignmentOffset_NB_r15_value2enum_1[] = {
	{ 0,	9,	"khz-7dot5" },
	{ 1,	4,	"khz0" },
	{ 2,	8,	"khz7dot5" }
};
static const unsigned int asn_MAP_TDD_UL_DL_AlignmentOffset_NB_r15_enum2value_1[] = {
	0,	/* khz-7dot5(0) */
	1,	/* khz0(1) */
	2	/* khz7dot5(2) */
};
const asn_INTEGER_specifics_t asn_SPC_TDD_UL_DL_AlignmentOffset_NB_r15_specs_1 = {
	asn_MAP_TDD_UL_DL_AlignmentOffset_NB_r15_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TDD_UL_DL_AlignmentOffset_NB_r15_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15 = {
	"TDD-UL-DL-AlignmentOffset-NB-r15",
	"TDD-UL-DL-AlignmentOffset-NB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1,
	sizeof(asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1)
		/sizeof(asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1)
		/sizeof(asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15_tags_1[0]), /* 1 */
	{ &asn_OER_type_TDD_UL_DL_AlignmentOffset_NB_r15_constr_1, &asn_PER_type_TDD_UL_DL_AlignmentOffset_NB_r15_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TDD_UL_DL_AlignmentOffset_NB_r15_specs_1	/* Additional specs */
};

