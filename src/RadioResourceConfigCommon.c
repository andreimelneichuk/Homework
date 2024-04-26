/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "RadioResourceConfigCommon.h"

asn_TYPE_member_t asn_MBR_RadioResourceConfigCommon_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, rach_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, prach_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, pdsch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, pusch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigCommon, phich_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PHICH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phich-Config"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommon, pucch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommon, soundingRS_UL_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoCommon"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, tdd_Config),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, ul_CyclicPrefixLength),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CyclicPrefixLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CyclicPrefixLength"
		},
	{ ATF_POINTER, 16, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon_v1020),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-v1020"
		},
	{ ATF_POINTER, 15, offsetof(struct RadioResourceConfigCommon, tdd_Config_v1130),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1130"
		},
	{ ATF_POINTER, 14, offsetof(struct RadioResourceConfigCommon, pusch_ConfigCommon_v1270),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon_v1270,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon-v1270"
		},
	{ ATF_POINTER, 13, offsetof(struct RadioResourceConfigCommon, prach_Config_v1310),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config-v1310"
		},
	{ ATF_POINTER, 12, offsetof(struct RadioResourceConfigCommon, freqHoppingParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqHoppingParameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqHoppingParameters-r13"
		},
	{ ATF_POINTER, 11, offsetof(struct RadioResourceConfigCommon, pdsch_ConfigCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon-v1310"
		},
	{ ATF_POINTER, 10, offsetof(struct RadioResourceConfigCommon, pucch_ConfigCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon-v1310"
		},
	{ ATF_POINTER, 9, offsetof(struct RadioResourceConfigCommon, pusch_ConfigCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon-v1310"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-v1310"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigCommon, highSpeedConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighSpeedConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedConfig-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommon, prach_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config-v1430"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommon, pucch_ConfigCommon_v1430),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon, tdd_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon, tdd_Config_v1450),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1450,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1450"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon_v1530),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, highSpeedConfig_v1530),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighSpeedConfig_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedConfig-v1530"
		},
};
static const int asn_MAP_RadioResourceConfigCommon_oms_1[] = { 0, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdsch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pusch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phich-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pucch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* soundingRS-UL-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* uplinkPowerControlCommon */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* antennaInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* tdd-Config */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ul-CyclicPrefixLength */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* uplinkPowerControlCommon-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* tdd-Config-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* pusch-ConfigCommon-v1270 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* prach-Config-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* freqHoppingParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* pdsch-ConfigCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* pucch-ConfigCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* pusch-ConfigCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* uplinkPowerControlCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* highSpeedConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* prach-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* pucch-ConfigCommon-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* tdd-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* tdd-Config-v1450 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* uplinkPowerControlCommon-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 } /* highSpeedConfig-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommon_specs_1 = {
	sizeof(struct RadioResourceConfigCommon),
	offsetof(struct RadioResourceConfigCommon, _asn_ctx),
	asn_MAP_RadioResourceConfigCommon_tag2el_1,
	28,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommon_oms_1,	/* Optional members */
	9, 16,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommon = {
	"RadioResourceConfigCommon",
	"RadioResourceConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommon_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommon_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommon_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigCommon_1,
	28,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommon_specs_1	/* Additional specs */
};

