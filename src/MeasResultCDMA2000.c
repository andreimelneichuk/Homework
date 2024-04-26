/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "MeasResultCDMA2000.h"

static int
memb_pilotPnPhase_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 32767)) {
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
memb_pilotStrength_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_pilotPnPhase_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..32767) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pilotPnPhase_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  0,  32767 }	/* (0..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pilotStrength_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pilotStrength_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measResult_4[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultCDMA2000__measResult, pilotPnPhase),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pilotPnPhase_constr_5, &asn_PER_memb_pilotPnPhase_constr_5,  memb_pilotPnPhase_constraint_4 },
		0, 0, /* No default value */
		"pilotPnPhase"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultCDMA2000__measResult, pilotStrength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pilotStrength_constr_6, &asn_PER_memb_pilotStrength_constr_6,  memb_pilotStrength_constraint_4 },
		0, 0, /* No default value */
		"pilotStrength"
		},
};
static const int asn_MAP_measResult_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_measResult_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pilotPnPhase */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pilotStrength */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_4 = {
	sizeof(struct MeasResultCDMA2000__measResult),
	offsetof(struct MeasResultCDMA2000__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_measResult_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_4 = {
	"measResult",
	"measResult",
	&asn_OP_SEQUENCE,
	asn_DEF_measResult_tags_4,
	sizeof(asn_DEF_measResult_tags_4)
		/sizeof(asn_DEF_measResult_tags_4[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_4,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_4)
		/sizeof(asn_DEF_measResult_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResult_4,
	2,	/* Elements count */
	&asn_SPC_measResult_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultCDMA2000_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultCDMA2000, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultCDMA2000, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellGlobalIdCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultCDMA2000, measResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResult_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult"
		},
};
static const int asn_MAP_MeasResultCDMA2000_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MeasResultCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultCDMA2000_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultCDMA2000_specs_1 = {
	sizeof(struct MeasResultCDMA2000),
	offsetof(struct MeasResultCDMA2000, _asn_ctx),
	asn_MAP_MeasResultCDMA2000_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultCDMA2000_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultCDMA2000 = {
	"MeasResultCDMA2000",
	"MeasResultCDMA2000",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultCDMA2000_tags_1,
	sizeof(asn_DEF_MeasResultCDMA2000_tags_1)
		/sizeof(asn_DEF_MeasResultCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_MeasResultCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultCDMA2000_tags_1)
		/sizeof(asn_DEF_MeasResultCDMA2000_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultCDMA2000_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultCDMA2000_specs_1	/* Additional specs */
};

