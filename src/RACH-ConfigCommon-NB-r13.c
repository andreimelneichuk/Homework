/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "RACH-ConfigCommon-NB-r13.h"

static int
memb_connEstFailOffset_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_connEstFailOffset_r13_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_connEstFailOffset_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_NB_r13, preambleTransMax_CE_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PreambleTransMax,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleTransMax-CE-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_NB_r13, powerRampingParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PowerRampingParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingParameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_NB_r13, rach_InfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_InfoList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-InfoList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RACH_ConfigCommon_NB_r13, connEstFailOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_connEstFailOffset_r13_constr_5, &asn_PER_memb_connEstFailOffset_r13_constr_5,  memb_connEstFailOffset_r13_constraint_1 },
		0, 0, /* No default value */
		"connEstFailOffset-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RACH_ConfigCommon_NB_r13, powerRampingParameters_v1450),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PowerRampingParameters_NB_v1450,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingParameters-v1450"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_ConfigCommon_NB_r13, rach_InfoList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_InfoList_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-InfoList-v1530"
		},
};
static const int asn_MAP_RACH_ConfigCommon_NB_r13_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RACH_ConfigCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RACH_ConfigCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preambleTransMax-CE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* powerRampingParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rach-InfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* connEstFailOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* powerRampingParameters-v1450 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* rach-InfoList-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_NB_r13_specs_1 = {
	sizeof(struct RACH_ConfigCommon_NB_r13),
	offsetof(struct RACH_ConfigCommon_NB_r13, _asn_ctx),
	asn_MAP_RACH_ConfigCommon_NB_r13_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RACH_ConfigCommon_NB_r13_oms_1,	/* Optional members */
	1, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon_NB_r13 = {
	"RACH-ConfigCommon-NB-r13",
	"RACH-ConfigCommon-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_RACH_ConfigCommon_NB_r13_tags_1,
	sizeof(asn_DEF_RACH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_RACH_ConfigCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RACH_ConfigCommon_NB_r13_1,
	6,	/* Elements count */
	&asn_SPC_RACH_ConfigCommon_NB_r13_specs_1	/* Additional specs */
};
