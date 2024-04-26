/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "BandParameters-v1450.h"

asn_TYPE_member_t asn_MBR_BandParameters_v1450_1[] = {
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1450, must_CapabilityPerBand_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MUST_Parameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"must-CapabilityPerBand-r14"
		},
};
static const int asn_MAP_BandParameters_v1450_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_BandParameters_v1450_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1450_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* must-CapabilityPerBand-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1450_specs_1 = {
	sizeof(struct BandParameters_v1450),
	offsetof(struct BandParameters_v1450, _asn_ctx),
	asn_MAP_BandParameters_v1450_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_BandParameters_v1450_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1450 = {
	"BandParameters-v1450",
	"BandParameters-v1450",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1450_tags_1,
	sizeof(asn_DEF_BandParameters_v1450_tags_1)
		/sizeof(asn_DEF_BandParameters_v1450_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1450_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1450_tags_1)
		/sizeof(asn_DEF_BandParameters_v1450_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandParameters_v1450_1,
	1,	/* Elements count */
	&asn_SPC_BandParameters_v1450_specs_1	/* Additional specs */
};

