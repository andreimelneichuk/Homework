/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "PDSCH-ConfigDedicated-v1130.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_qcl_Operation_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_qcl_Operation_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_qcl_Operation_value2enum_3[] = {
	{ 0,	5,	"typeA" },
	{ 1,	5,	"typeB" }
};
static const unsigned int asn_MAP_qcl_Operation_enum2value_3[] = {
	0,	/* typeA(0) */
	1	/* typeB(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_qcl_Operation_specs_3 = {
	asn_MAP_qcl_Operation_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_qcl_Operation_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_qcl_Operation_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qcl_Operation_3 = {
	"qcl-Operation",
	"qcl-Operation",
	&asn_OP_NativeEnumerated,
	asn_DEF_qcl_Operation_tags_3,
	sizeof(asn_DEF_qcl_Operation_tags_3)
		/sizeof(asn_DEF_qcl_Operation_tags_3[0]) - 1, /* 1 */
	asn_DEF_qcl_Operation_tags_3,	/* Same as above */
	sizeof(asn_DEF_qcl_Operation_tags_3)
		/sizeof(asn_DEF_qcl_Operation_tags_3[0]), /* 2 */
	{ &asn_OER_type_qcl_Operation_constr_3, &asn_PER_type_qcl_Operation_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_qcl_Operation_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1130_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PDSCH_ConfigDedicated_v1130, dmrs_ConfigPDSCH_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DMRS_Config_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dmrs-ConfigPDSCH-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct PDSCH_ConfigDedicated_v1130, qcl_Operation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_qcl_Operation_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qcl-Operation"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ConfigDedicated_v1130, re_MappingQCLConfigToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RE_MappingQCLConfigToReleaseList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"re-MappingQCLConfigToReleaseList-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ConfigDedicated_v1130, re_MappingQCLConfigToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RE_MappingQCLConfigToAddModList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"re-MappingQCLConfigToAddModList-r11"
		},
};
static const int asn_MAP_PDSCH_ConfigDedicated_v1130_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigDedicated_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dmrs-ConfigPDSCH-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qcl-Operation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* re-MappingQCLConfigToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* re-MappingQCLConfigToAddModList-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1130_specs_1 = {
	sizeof(struct PDSCH_ConfigDedicated_v1130),
	offsetof(struct PDSCH_ConfigDedicated_v1130, _asn_ctx),
	asn_MAP_PDSCH_ConfigDedicated_v1130_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PDSCH_ConfigDedicated_v1130_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1130 = {
	"PDSCH-ConfigDedicated-v1130",
	"PDSCH-ConfigDedicated-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigDedicated_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_ConfigDedicated_v1130_1,
	4,	/* Elements count */
	&asn_SPC_PDSCH_ConfigDedicated_v1130_specs_1	/* Additional specs */
};

