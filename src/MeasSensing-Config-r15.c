/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "MeasSensing-Config-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sensingSubchannelNumber_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sensingReselectionCounter_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5 && value <= 75)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sensingPriority_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_sensingPeriodicity_r15_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sensingPeriodicity_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sensingSubchannelNumber_r15_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..20) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sensingSubchannelNumber_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  20 }	/* (1..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sensingReselectionCounter_r15_constr_16 CC_NOTUSED = {
	{ 1, 1 }	/* (5..75) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sensingReselectionCounter_r15_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  5,  75 }	/* (5..75) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sensingPriority_r15_constr_17 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sensingPriority_r15_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sensingPeriodicity_r15_value2enum_3[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms300" },
	{ 5,	5,	"ms400" },
	{ 6,	5,	"ms500" },
	{ 7,	5,	"ms600" },
	{ 8,	5,	"ms700" },
	{ 9,	5,	"ms800" },
	{ 10,	5,	"ms900" },
	{ 11,	6,	"ms1000" }
};
static const unsigned int asn_MAP_sensingPeriodicity_r15_enum2value_3[] = {
	2,	/* ms100(2) */
	11,	/* ms1000(11) */
	0,	/* ms20(0) */
	3,	/* ms200(3) */
	4,	/* ms300(4) */
	5,	/* ms400(5) */
	1,	/* ms50(1) */
	6,	/* ms500(6) */
	7,	/* ms600(7) */
	8,	/* ms700(8) */
	9,	/* ms800(9) */
	10	/* ms900(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_sensingPeriodicity_r15_specs_3 = {
	asn_MAP_sensingPeriodicity_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_sensingPeriodicity_r15_enum2value_3,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sensingPeriodicity_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sensingPeriodicity_r15_3 = {
	"sensingPeriodicity-r15",
	"sensingPeriodicity-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sensingPeriodicity_r15_tags_3,
	sizeof(asn_DEF_sensingPeriodicity_r15_tags_3)
		/sizeof(asn_DEF_sensingPeriodicity_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_sensingPeriodicity_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_sensingPeriodicity_r15_tags_3)
		/sizeof(asn_DEF_sensingPeriodicity_r15_tags_3[0]), /* 2 */
	{ &asn_OER_type_sensingPeriodicity_r15_constr_3, &asn_PER_type_sensingPeriodicity_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sensingPeriodicity_r15_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasSensing_Config_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasSensing_Config_r15, sensingSubchannelNumber_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sensingSubchannelNumber_r15_constr_2, &asn_PER_memb_sensingSubchannelNumber_r15_constr_2,  memb_sensingSubchannelNumber_r15_constraint_1 },
		0, 0, /* No default value */
		"sensingSubchannelNumber-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasSensing_Config_r15, sensingPeriodicity_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sensingPeriodicity_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensingPeriodicity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasSensing_Config_r15, sensingReselectionCounter_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sensingReselectionCounter_r15_constr_16, &asn_PER_memb_sensingReselectionCounter_r15_constr_16,  memb_sensingReselectionCounter_r15_constraint_1 },
		0, 0, /* No default value */
		"sensingReselectionCounter-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasSensing_Config_r15, sensingPriority_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sensingPriority_r15_constr_17, &asn_PER_memb_sensingPriority_r15_constr_17,  memb_sensingPriority_r15_constraint_1 },
		0, 0, /* No default value */
		"sensingPriority-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasSensing_Config_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasSensing_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sensingSubchannelNumber-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sensingPeriodicity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sensingReselectionCounter-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sensingPriority-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasSensing_Config_r15_specs_1 = {
	sizeof(struct MeasSensing_Config_r15),
	offsetof(struct MeasSensing_Config_r15, _asn_ctx),
	asn_MAP_MeasSensing_Config_r15_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasSensing_Config_r15 = {
	"MeasSensing-Config-r15",
	"MeasSensing-Config-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasSensing_Config_r15_tags_1,
	sizeof(asn_DEF_MeasSensing_Config_r15_tags_1)
		/sizeof(asn_DEF_MeasSensing_Config_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasSensing_Config_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasSensing_Config_r15_tags_1)
		/sizeof(asn_DEF_MeasSensing_Config_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasSensing_Config_r15_1,
	4,	/* Elements count */
	&asn_SPC_MeasSensing_Config_r15_specs_1	/* Additional specs */
};

