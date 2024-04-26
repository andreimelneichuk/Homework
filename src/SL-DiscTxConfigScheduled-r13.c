/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "SL-DiscTxConfigScheduled-r13.h"

asn_TYPE_member_t asn_MBR_SL_DiscTxConfigScheduled_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SL_DiscTxConfigScheduled_r13, discTxConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscResourcePool_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxConfig-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_DiscTxConfigScheduled_r13, discTF_IndexList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_IndexPairList_r12b,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTF-IndexList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscTxConfigScheduled_r13, discHoppingConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_HoppingConfigDisc_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discHoppingConfig-r13"
		},
};
static const int asn_MAP_SL_DiscTxConfigScheduled_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscTxConfigScheduled_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discTxConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discTF-IndexList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* discHoppingConfig-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_DiscTxConfigScheduled_r13_specs_1 = {
	sizeof(struct SL_DiscTxConfigScheduled_r13),
	offsetof(struct SL_DiscTxConfigScheduled_r13, _asn_ctx),
	asn_MAP_SL_DiscTxConfigScheduled_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SL_DiscTxConfigScheduled_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscTxConfigScheduled_r13 = {
	"SL-DiscTxConfigScheduled-r13",
	"SL-DiscTxConfigScheduled-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1,
	sizeof(asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscTxConfigScheduled_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_DiscTxConfigScheduled_r13_1,
	3,	/* Elements count */
	&asn_SPC_SL_DiscTxConfigScheduled_r13_specs_1	/* Additional specs */
};

