/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "RF-Parameters-v1090.h"

asn_TYPE_member_t asn_MBR_RF_Parameters_v1090_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1090, supportedBandCombination_v1090),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombination_v1090,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombination-v1090"
		},
};
static const int asn_MAP_RF_Parameters_v1090_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v1090_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1090_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombination-v1090 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1090_specs_1 = {
	sizeof(struct RF_Parameters_v1090),
	offsetof(struct RF_Parameters_v1090, _asn_ctx),
	asn_MAP_RF_Parameters_v1090_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v1090_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1090 = {
	"RF-Parameters-v1090",
	"RF-Parameters-v1090",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v1090_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1090_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1090_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1090_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1090_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1090_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v1090_1,
	1,	/* Elements count */
	&asn_SPC_RF_Parameters_v1090_specs_1	/* Additional specs */
};

