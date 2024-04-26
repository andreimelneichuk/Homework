/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "CarrierFreqGERAN.h"

asn_TYPE_member_t asn_MBR_CarrierFreqGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqGERAN, arfcn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"arfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqGERAN, bandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandIndicatorGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandIndicator"
		},
};
static const ber_tlv_tag_t asn_DEF_CarrierFreqGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierFreqGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* arfcn */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bandIndicator */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqGERAN_specs_1 = {
	sizeof(struct CarrierFreqGERAN),
	offsetof(struct CarrierFreqGERAN, _asn_ctx),
	asn_MAP_CarrierFreqGERAN_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqGERAN = {
	"CarrierFreqGERAN",
	"CarrierFreqGERAN",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierFreqGERAN_tags_1,
	sizeof(asn_DEF_CarrierFreqGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqGERAN_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqGERAN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CarrierFreqGERAN_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqGERAN_specs_1	/* Additional specs */
};

