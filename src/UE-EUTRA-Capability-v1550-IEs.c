/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "UE-EUTRA-Capability-v1550-IEs.h"

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1550_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1550_IEs, neighCellSI_AcquisitionParameters_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellSI_AcquisitionParameters_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellSI-AcquisitionParameters-v1550"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1550_IEs, phyLayerParameters_v1550),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1550"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1550_IEs, mac_Parameters_v1550),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_Parameters_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-v1550"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1550_IEs, fdd_Add_UE_EUTRA_Capabilities_v1550),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1550"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1550_IEs, tdd_Add_UE_EUTRA_Capabilities_v1550),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1550"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1550_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1560_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1550_IEs_oms_1[] = { 0, 5 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1550_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* neighCellSI-AcquisitionParameters-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phyLayerParameters-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mac-Parameters-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1550_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1550_IEs),
	offsetof(struct UE_EUTRA_Capability_v1550_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1550_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1550_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1550_IEs = {
	"UE-EUTRA-Capability-v1550-IEs",
	"UE-EUTRA-Capability-v1550-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1550_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1550_IEs_1,
	6,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1550_IEs_specs_1	/* Additional specs */
};

