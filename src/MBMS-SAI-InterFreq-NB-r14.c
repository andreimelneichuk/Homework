/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "MBMS-SAI-InterFreq-NB-r14.h"

asn_TYPE_member_t asn_MBR_MBMS_SAI_InterFreq_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_SAI_InterFreq_NB_r14, dl_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_SAI_InterFreq_NB_r14, mbms_SAI_List_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_List_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-List-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_SAI_InterFreq_NB_r14, multiBandInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalBandInfoList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-r14"
		},
};
static const int asn_MAP_MBMS_SAI_InterFreq_NB_r14_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_SAI_InterFreq_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-SAI-List-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* multiBandInfoList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_SAI_InterFreq_NB_r14_specs_1 = {
	sizeof(struct MBMS_SAI_InterFreq_NB_r14),
	offsetof(struct MBMS_SAI_InterFreq_NB_r14, _asn_ctx),
	asn_MAP_MBMS_SAI_InterFreq_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMS_SAI_InterFreq_NB_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_SAI_InterFreq_NB_r14 = {
	"MBMS-SAI-InterFreq-NB-r14",
	"MBMS-SAI-InterFreq-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1,
	sizeof(asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1)
		/sizeof(asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1)
		/sizeof(asn_DEF_MBMS_SAI_InterFreq_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_SAI_InterFreq_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_SAI_InterFreq_NB_r14_specs_1	/* Additional specs */
};

