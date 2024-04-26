/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "PhysicalConfigDedicatedSCell-v13c0.h"

static asn_oer_constraints_t asn_OER_type_pucch_SCell_v13c0_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pucch_SCell_v13c0_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0__setup, pucch_ConfigDedicated_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigDedicated_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigDedicated-v13c0"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pucch-ConfigDedicated-v13c0 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0__setup),
	offsetof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_4,
	1,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pucch_SCell_v13c0_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pucch_SCell_v13c0_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pucch_SCell_v13c0_specs_2 = {
	sizeof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0),
	offsetof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0, _asn_ctx),
	offsetof(struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0, present),
	sizeof(((struct PhysicalConfigDedicatedSCell_v13c0__pucch_SCell_v13c0 *)0)->present),
	asn_MAP_pucch_SCell_v13c0_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_SCell_v13c0_2 = {
	"pucch-SCell-v13c0",
	"pucch-SCell-v13c0",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_pucch_SCell_v13c0_constr_2, &asn_PER_type_pucch_SCell_v13c0_constr_2, CHOICE_constraint },
	asn_MBR_pucch_SCell_v13c0_2,
	2,	/* Elements count */
	&asn_SPC_pucch_SCell_v13c0_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalConfigDedicatedSCell_v13c0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicatedSCell_v13c0, pucch_SCell_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pucch_SCell_v13c0_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-SCell-v13c0"
		},
};
static const ber_tlv_tag_t asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalConfigDedicatedSCell_v13c0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pucch-SCell-v13c0 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicatedSCell_v13c0_specs_1 = {
	sizeof(struct PhysicalConfigDedicatedSCell_v13c0),
	offsetof(struct PhysicalConfigDedicatedSCell_v13c0, _asn_ctx),
	asn_MAP_PhysicalConfigDedicatedSCell_v13c0_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicatedSCell_v13c0 = {
	"PhysicalConfigDedicatedSCell-v13c0",
	"PhysicalConfigDedicatedSCell-v13c0",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1,
	sizeof(asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1[0]), /* 1 */
	asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicatedSCell_v13c0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysicalConfigDedicatedSCell_v13c0_1,
	1,	/* Elements count */
	&asn_SPC_PhysicalConfigDedicatedSCell_v13c0_specs_1	/* Additional specs */
};
