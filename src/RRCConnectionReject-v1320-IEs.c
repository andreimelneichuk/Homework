/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "RRCConnectionReject-v1320-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_rrc_SuspendIndication_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rrc_SuspendIndication_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_rrc_SuspendIndication_r13_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rrc_SuspendIndication_r13_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rrc_SuspendIndication_r13_specs_2 = {
	asn_MAP_rrc_SuspendIndication_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_rrc_SuspendIndication_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rrc_SuspendIndication_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rrc_SuspendIndication_r13_2 = {
	"rrc-SuspendIndication-r13",
	"rrc-SuspendIndication-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_rrc_SuspendIndication_r13_tags_2,
	sizeof(asn_DEF_rrc_SuspendIndication_r13_tags_2)
		/sizeof(asn_DEF_rrc_SuspendIndication_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_rrc_SuspendIndication_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_rrc_SuspendIndication_r13_tags_2)
		/sizeof(asn_DEF_rrc_SuspendIndication_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_rrc_SuspendIndication_r13_constr_2, &asn_PER_type_rrc_SuspendIndication_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rrc_SuspendIndication_r13_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct RRCConnectionReject_v1320_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionReject_v1320_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionReject_v1320_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReject_v1320_IEs, rrc_SuspendIndication_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rrc_SuspendIndication_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-SuspendIndication-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject_v1320_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionReject_v1320_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReject_v1320_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReject_v1320_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-SuspendIndication-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_v1320_IEs_specs_1 = {
	sizeof(struct RRCConnectionReject_v1320_IEs),
	offsetof(struct RRCConnectionReject_v1320_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReject_v1320_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReject_v1320_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v1320_IEs = {
	"RRCConnectionReject-v1320-IEs",
	"RRCConnectionReject-v1320-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReject_v1320_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReject_v1320_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReject_v1320_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReject_v1320_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReject_v1320_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReject_v1320_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionReject_v1320_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionReject_v1320_IEs_specs_1	/* Additional specs */
};

