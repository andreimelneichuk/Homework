/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "BandParametersDL-r13.h"

/*
 * This type is implemented using CA_MIMO_ParametersDL_r13,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_BandParametersDL_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BandParametersDL_r13 = {
	"BandParametersDL-r13",
	"BandParametersDL-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParametersDL_r13_tags_1,
	sizeof(asn_DEF_BandParametersDL_r13_tags_1)
		/sizeof(asn_DEF_BandParametersDL_r13_tags_1[0]), /* 1 */
	asn_DEF_BandParametersDL_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParametersDL_r13_tags_1)
		/sizeof(asn_DEF_BandParametersDL_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CA_MIMO_ParametersDL_r13_1,
	4,	/* Elements count */
	&asn_SPC_CA_MIMO_ParametersDL_r13_specs_1	/* Additional specs */
};

