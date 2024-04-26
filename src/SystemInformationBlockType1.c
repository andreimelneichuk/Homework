/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "SystemInformationBlockType1.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_q_RxLevMinOffset_constraint_14(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_systemInfoValueTag_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_cellBarred_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cellBarred_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_intraFreqReselection_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_intraFreqReselection_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_q_RxLevMinOffset_constr_16 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_q_RxLevMinOffset_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_si_WindowLength_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_si_WindowLength_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_systemInfoValueTag_constr_29 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_systemInfoValueTag_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cellBarred_value2enum_6[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarred_enum2value_6[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarred_specs_6 = {
	asn_MAP_cellBarred_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarred_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_6 = {
	"cellBarred",
	"cellBarred",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarred_tags_6,
	sizeof(asn_DEF_cellBarred_tags_6)
		/sizeof(asn_DEF_cellBarred_tags_6[0]) - 1, /* 1 */
	asn_DEF_cellBarred_tags_6,	/* Same as above */
	sizeof(asn_DEF_cellBarred_tags_6)
		/sizeof(asn_DEF_cellBarred_tags_6[0]), /* 2 */
	{ &asn_OER_type_cellBarred_constr_6, &asn_PER_type_cellBarred_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_intraFreqReselection_value2enum_9[] = {
	{ 0,	7,	"allowed" },
	{ 1,	10,	"notAllowed" }
};
static const unsigned int asn_MAP_intraFreqReselection_enum2value_9[] = {
	0,	/* allowed(0) */
	1	/* notAllowed(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_intraFreqReselection_specs_9 = {
	asn_MAP_intraFreqReselection_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqReselection_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_intraFreqReselection_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqReselection_9 = {
	"intraFreqReselection",
	"intraFreqReselection",
	&asn_OP_NativeEnumerated,
	asn_DEF_intraFreqReselection_tags_9,
	sizeof(asn_DEF_intraFreqReselection_tags_9)
		/sizeof(asn_DEF_intraFreqReselection_tags_9[0]) - 1, /* 1 */
	asn_DEF_intraFreqReselection_tags_9,	/* Same as above */
	sizeof(asn_DEF_intraFreqReselection_tags_9)
		/sizeof(asn_DEF_intraFreqReselection_tags_9[0]), /* 2 */
	{ &asn_OER_type_intraFreqReselection_constr_9, &asn_PER_type_intraFreqReselection_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqReselection_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellAccessRelatedInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, trackingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, cellBarred),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBarred"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, intraFreqReselection),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqReselection_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqReselection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, csg_Indication),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csg-Indication"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, csg_Identity),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csg-Identity"
		},
};
static const int asn_MAP_cellAccessRelatedInfo_oms_2[] = { 6 };
static const ber_tlv_tag_t asn_DEF_cellAccessRelatedInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellAccessRelatedInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellBarred */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* intraFreqReselection */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csg-Indication */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* csg-Identity */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellAccessRelatedInfo_specs_2 = {
	sizeof(struct SystemInformationBlockType1__cellAccessRelatedInfo),
	offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, _asn_ctx),
	asn_MAP_cellAccessRelatedInfo_tag2el_2,
	7,	/* Count of tags in the map */
	asn_MAP_cellAccessRelatedInfo_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellAccessRelatedInfo_2 = {
	"cellAccessRelatedInfo",
	"cellAccessRelatedInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_cellAccessRelatedInfo_tags_2,
	sizeof(asn_DEF_cellAccessRelatedInfo_tags_2)
		/sizeof(asn_DEF_cellAccessRelatedInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellAccessRelatedInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellAccessRelatedInfo_tags_2)
		/sizeof(asn_DEF_cellAccessRelatedInfo_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellAccessRelatedInfo_2,
	7,	/* Elements count */
	&asn_SPC_cellAccessRelatedInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellSelectionInfo_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellSelectionInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1__cellSelectionInfo, q_RxLevMinOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_q_RxLevMinOffset_constr_16, &asn_PER_memb_q_RxLevMinOffset_constr_16,  memb_q_RxLevMinOffset_constraint_14 },
		0, 0, /* No default value */
		"q-RxLevMinOffset"
		},
};
static const int asn_MAP_cellSelectionInfo_oms_14[] = { 1 };
static const ber_tlv_tag_t asn_DEF_cellSelectionInfo_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellSelectionInfo_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-RxLevMinOffset */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellSelectionInfo_specs_14 = {
	sizeof(struct SystemInformationBlockType1__cellSelectionInfo),
	offsetof(struct SystemInformationBlockType1__cellSelectionInfo, _asn_ctx),
	asn_MAP_cellSelectionInfo_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_cellSelectionInfo_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectionInfo_14 = {
	"cellSelectionInfo",
	"cellSelectionInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_cellSelectionInfo_tags_14,
	sizeof(asn_DEF_cellSelectionInfo_tags_14)
		/sizeof(asn_DEF_cellSelectionInfo_tags_14[0]) - 1, /* 1 */
	asn_DEF_cellSelectionInfo_tags_14,	/* Same as above */
	sizeof(asn_DEF_cellSelectionInfo_tags_14)
		/sizeof(asn_DEF_cellSelectionInfo_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellSelectionInfo_14,
	2,	/* Elements count */
	&asn_SPC_cellSelectionInfo_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_WindowLength_value2enum_21[] = {
	{ 0,	3,	"ms1" },
	{ 1,	3,	"ms2" },
	{ 2,	3,	"ms5" },
	{ 3,	4,	"ms10" },
	{ 4,	4,	"ms15" },
	{ 5,	4,	"ms20" },
	{ 6,	4,	"ms40" }
};
static const unsigned int asn_MAP_si_WindowLength_enum2value_21[] = {
	0,	/* ms1(0) */
	3,	/* ms10(3) */
	4,	/* ms15(4) */
	1,	/* ms2(1) */
	5,	/* ms20(5) */
	6,	/* ms40(6) */
	2	/* ms5(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_WindowLength_specs_21 = {
	asn_MAP_si_WindowLength_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_si_WindowLength_enum2value_21,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_WindowLength_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_WindowLength_21 = {
	"si-WindowLength",
	"si-WindowLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_si_WindowLength_tags_21,
	sizeof(asn_DEF_si_WindowLength_tags_21)
		/sizeof(asn_DEF_si_WindowLength_tags_21[0]) - 1, /* 1 */
	asn_DEF_si_WindowLength_tags_21,	/* Same as above */
	sizeof(asn_DEF_si_WindowLength_tags_21)
		/sizeof(asn_DEF_si_WindowLength_tags_21[0]), /* 2 */
	{ &asn_OER_type_si_WindowLength_constr_21, &asn_PER_type_si_WindowLength_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_WindowLength_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, cellAccessRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellAccessRelatedInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAccessRelatedInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, cellSelectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellSelectionInfo_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, freqBandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, schedulingInfoList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1, tdd_Config),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, si_WindowLength),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_WindowLength_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-WindowLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, systemInfoValueTag),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_systemInfoValueTag_constr_29, &asn_PER_memb_systemInfoValueTag_constr_29,  memb_systemInfoValueTag_constraint_1 },
		0, 0, /* No default value */
		"systemInfoValueTag"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v890_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_oms_1[] = { 2, 5, 8 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellAccessRelatedInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellSelectionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqBandIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* schedulingInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tdd-Config */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* si-WindowLength */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* systemInfoValueTag */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_specs_1 = {
	sizeof(struct SystemInformationBlockType1),
	offsetof(struct SystemInformationBlockType1, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1 = {
	"SystemInformationBlockType1",
	"SystemInformationBlockType1",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_1,
	9,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_specs_1	/* Additional specs */
};

