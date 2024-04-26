/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "MeasObjectEUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_setup_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_setup_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_t312_r12_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_t312_r12_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_6_cmp_15(const void *sptr) {
	const Q_OffsetRange_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 15 */
	return (*st != 15);
}
static int asn_DFL_6_set_15(void **sptr) {
	Q_OffsetRange_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 15 */
	*st = 15;
	return 0;
}
static const asn_INTEGER_enum_map_t asn_MAP_setup_value2enum_20[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms300" },
	{ 5,	5,	"ms400" },
	{ 6,	5,	"ms500" },
	{ 7,	6,	"ms1000" }
};
static const unsigned int asn_MAP_setup_enum2value_20[] = {
	0,	/* ms0(0) */
	2,	/* ms100(2) */
	7,	/* ms1000(7) */
	3,	/* ms200(3) */
	4,	/* ms300(4) */
	5,	/* ms400(5) */
	1,	/* ms50(1) */
	6	/* ms500(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_setup_specs_20 = {
	asn_MAP_setup_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_setup_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_setup_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_20 = {
	"setup",
	"setup",
	&asn_OP_NativeEnumerated,
	asn_DEF_setup_tags_20,
	sizeof(asn_DEF_setup_tags_20)
		/sizeof(asn_DEF_setup_tags_20[0]) - 1, /* 1 */
	asn_DEF_setup_tags_20,	/* Same as above */
	sizeof(asn_DEF_setup_tags_20)
		/sizeof(asn_DEF_setup_tags_20[0]), /* 2 */
	{ &asn_OER_type_setup_constr_20, &asn_PER_type_setup_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_setup_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_t312_r12_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__t312_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__t312_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_setup_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_t312_r12_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_t312_r12_specs_18 = {
	sizeof(struct MeasObjectEUTRA__t312_r12),
	offsetof(struct MeasObjectEUTRA__t312_r12, _asn_ctx),
	offsetof(struct MeasObjectEUTRA__t312_r12, present),
	sizeof(((struct MeasObjectEUTRA__t312_r12 *)0)->present),
	asn_MAP_t312_r12_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t312_r12_18 = {
	"t312-r12",
	"t312-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_t312_r12_constr_18, &asn_PER_type_t312_r12_constr_18, CHOICE_constraint },
	asn_MBR_t312_r12_18,
	2,	/* Elements count */
	&asn_SPC_t312_r12_specs_18	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"presenceAntennaPort1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellConfig"
		},
	{ ATF_POINTER, 22, offsetof(struct MeasObjectEUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		&asn_DFL_6_cmp_15,	/* Compare DEFAULT 15 */
		&asn_DFL_6_set_15,	/* Set DEFAULT 15 */
		"offsetFreq"
		},
	{ ATF_POINTER, 21, offsetof(struct MeasObjectEUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 20, offsetof(struct MeasObjectEUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToAddModList"
		},
	{ ATF_POINTER, 19, offsetof(struct MeasObjectEUTRA, blackCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"blackCellsToRemoveList"
		},
	{ ATF_POINTER, 18, offsetof(struct MeasObjectEUTRA, blackCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BlackCellsToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"blackCellsToAddModList"
		},
	{ ATF_POINTER, 17, offsetof(struct MeasObjectEUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 16, offsetof(struct MeasObjectEUTRA, measCycleSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasCycleSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCycleSCell-r10"
		},
	{ ATF_POINTER, 15, offsetof(struct MeasObjectEUTRA, measSubframePatternConfigNeigh_r10),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternConfigNeigh_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measSubframePatternConfigNeigh-r10"
		},
	{ ATF_POINTER, 14, offsetof(struct MeasObjectEUTRA, widebandRSRQ_Meas_r11),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"widebandRSRQ-Meas-r11"
		},
	{ ATF_POINTER, 13, offsetof(struct MeasObjectEUTRA, altTTT_CellsToRemoveList_r12),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altTTT-CellsToRemoveList-r12"
		},
	{ ATF_POINTER, 12, offsetof(struct MeasObjectEUTRA, altTTT_CellsToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AltTTT_CellsToAddModList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altTTT-CellsToAddModList-r12"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasObjectEUTRA, t312_r12),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_t312_r12_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t312-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasObjectEUTRA, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMeasPerformance-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasObjectEUTRA, measDS_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasDS_Config_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measDS-Config-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectEUTRA, whiteCellsToRemoveList_r13),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"whiteCellsToRemoveList-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectEUTRA, whiteCellsToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WhiteCellsToAddModList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"whiteCellsToAddModList-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectEUTRA, rmtc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RMTC_Config_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-Config-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA, tx_ResourcePoolToRemoveList_r14),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Tx_ResourcePoolMeasList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-ResourcePoolToRemoveList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA, tx_ResourcePoolToAddList_r14),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Tx_ResourcePoolMeasList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-ResourcePoolToAddList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA, fembms_MixedCarrier_r14),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fembms-MixedCarrier-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA, measSensing_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasSensing_Config_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measSensing-Config-r15"
		},
};
static const int asn_MAP_MeasObjectEUTRA_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
static const ber_tlv_tag_t asn_DEF_MeasObjectEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* presenceAntennaPort1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* neighCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* blackCellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* blackCellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* measCycleSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* measSubframePatternConfigNeigh-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* widebandRSRQ-Meas-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* altTTT-CellsToRemoveList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* altTTT-CellsToAddModList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* t312-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* reducedMeasPerformance-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* measDS-Config-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* whiteCellsToRemoveList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* whiteCellsToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* rmtc-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* carrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* tx-ResourcePoolToRemoveList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* tx-ResourcePoolToAddList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* fembms-MixedCarrier-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 } /* measSensing-Config-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1 = {
	sizeof(struct MeasObjectEUTRA),
	offsetof(struct MeasObjectEUTRA, _asn_ctx),
	asn_MAP_MeasObjectEUTRA_tag2el_1,
	26,	/* Count of tags in the map */
	asn_MAP_MeasObjectEUTRA_oms_1,	/* Optional members */
	6, 16,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA = {
	"MeasObjectEUTRA",
	"MeasObjectEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectEUTRA_tags_1,
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectEUTRA_1,
	26,	/* Elements count */
	&asn_SPC_MeasObjectEUTRA_specs_1	/* Additional specs */
};

