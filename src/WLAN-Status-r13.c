/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "WLAN-Status-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_WLAN_Status_r13_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_WLAN_Status_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_WLAN_Status_r13_value2enum_1[] = {
	{ 0,	21,	"successfulAssociation" },
	{ 1,	20,	"failureWlanRadioLink" },
	{ 2,	22,	"failureWlanUnavailable" },
	{ 3,	14,	"failureTimeout" }
};
static const unsigned int asn_MAP_WLAN_Status_r13_enum2value_1[] = {
	3,	/* failureTimeout(3) */
	1,	/* failureWlanRadioLink(1) */
	2,	/* failureWlanUnavailable(2) */
	0	/* successfulAssociation(0) */
};
const asn_INTEGER_specifics_t asn_SPC_WLAN_Status_r13_specs_1 = {
	asn_MAP_WLAN_Status_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_WLAN_Status_r13_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_WLAN_Status_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_WLAN_Status_r13 = {
	"WLAN-Status-r13",
	"WLAN-Status-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_WLAN_Status_r13_tags_1,
	sizeof(asn_DEF_WLAN_Status_r13_tags_1)
		/sizeof(asn_DEF_WLAN_Status_r13_tags_1[0]), /* 1 */
	asn_DEF_WLAN_Status_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_WLAN_Status_r13_tags_1)
		/sizeof(asn_DEF_WLAN_Status_r13_tags_1[0]), /* 1 */
	{ &asn_OER_type_WLAN_Status_r13_constr_1, &asn_PER_type_WLAN_Status_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_WLAN_Status_r13_specs_1	/* Additional specs */
};

