/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "UEInformationResponse-v1130-IEs.h"

asn_TYPE_member_t asn_MBR_UEInformationResponse_v1130_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UEInformationResponse_v1130_IEs, connEstFailReport_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnEstFailReport_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connEstFailReport-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationResponse_v1130_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationResponse_v1250_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEInformationResponse_v1130_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UEInformationResponse_v1130_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEInformationResponse_v1130_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* connEstFailReport-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_v1130_IEs_specs_1 = {
	sizeof(struct UEInformationResponse_v1130_IEs),
	offsetof(struct UEInformationResponse_v1130_IEs, _asn_ctx),
	asn_MAP_UEInformationResponse_v1130_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UEInformationResponse_v1130_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v1130_IEs = {
	"UEInformationResponse-v1130-IEs",
	"UEInformationResponse-v1130-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEInformationResponse_v1130_IEs_tags_1,
	sizeof(asn_DEF_UEInformationResponse_v1130_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_v1130_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEInformationResponse_v1130_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationResponse_v1130_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_v1130_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEInformationResponse_v1130_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UEInformationResponse_v1130_IEs_specs_1	/* Additional specs */
};

