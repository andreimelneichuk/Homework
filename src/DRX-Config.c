/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "DRX-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sf10_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_sf20_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_sf32_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_sf40_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_sf64_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_sf80_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
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
memb_sf128_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
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
memb_sf160_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
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
memb_sf256_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_sf320_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
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
memb_sf512_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_sf640_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
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
memb_sf1024_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_sf1280_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
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
memb_sf2048_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_sf2560_constraint_63(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2559)) {
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
memb_drxShortCycleTimer_constraint_80(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_onDurationTimer_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_onDurationTimer_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_drx_InactivityTimer_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_drx_InactivityTimer_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_drx_RetransmissionTimer_constr_54 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_drx_RetransmissionTimer_constr_54 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf10_constr_64 CC_NOTUSED = {
	{ 1, 1 }	/* (0..9) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf10_constr_64 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf20_constr_65 CC_NOTUSED = {
	{ 1, 1 }	/* (0..19) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf20_constr_65 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf32_constr_66 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf32_constr_66 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf40_constr_67 CC_NOTUSED = {
	{ 1, 1 }	/* (0..39) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf40_constr_67 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf64_constr_68 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf64_constr_68 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf80_constr_69 CC_NOTUSED = {
	{ 1, 1 }	/* (0..79) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf80_constr_69 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf128_constr_70 CC_NOTUSED = {
	{ 1, 1 }	/* (0..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf128_constr_70 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf160_constr_71 CC_NOTUSED = {
	{ 1, 1 }	/* (0..159) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf160_constr_71 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf256_constr_72 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf256_constr_72 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf320_constr_73 CC_NOTUSED = {
	{ 2, 1 }	/* (0..319) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf320_constr_73 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf512_constr_74 CC_NOTUSED = {
	{ 2, 1 }	/* (0..511) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf512_constr_74 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf640_constr_75 CC_NOTUSED = {
	{ 2, 1 }	/* (0..639) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf640_constr_75 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf1024_constr_76 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf1024_constr_76 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf1280_constr_77 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1279) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf1280_constr_77 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf2048_constr_78 CC_NOTUSED = {
	{ 2, 1 }	/* (0..2047) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf2048_constr_78 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sf2560_constr_79 CC_NOTUSED = {
	{ 2, 1 }	/* (0..2559) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sf2560_constr_79 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  2559 }	/* (0..2559) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_longDRX_CycleStartOffset_constr_63 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_longDRX_CycleStartOffset_constr_63 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_shortDRX_Cycle_constr_81 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_shortDRX_Cycle_constr_81 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_drxShortCycleTimer_constr_98 CC_NOTUSED = {
	{ 1, 1 }	/* (1..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_drxShortCycleTimer_constr_98 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_DRX_Config_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_DRX_Config_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_onDurationTimer_value2enum_4[] = {
	{ 0,	4,	"psf1" },
	{ 1,	4,	"psf2" },
	{ 2,	4,	"psf3" },
	{ 3,	4,	"psf4" },
	{ 4,	4,	"psf5" },
	{ 5,	4,	"psf6" },
	{ 6,	4,	"psf8" },
	{ 7,	5,	"psf10" },
	{ 8,	5,	"psf20" },
	{ 9,	5,	"psf30" },
	{ 10,	5,	"psf40" },
	{ 11,	5,	"psf50" },
	{ 12,	5,	"psf60" },
	{ 13,	5,	"psf80" },
	{ 14,	6,	"psf100" },
	{ 15,	6,	"psf200" }
};
static const unsigned int asn_MAP_onDurationTimer_enum2value_4[] = {
	0,	/* psf1(0) */
	7,	/* psf10(7) */
	14,	/* psf100(14) */
	1,	/* psf2(1) */
	8,	/* psf20(8) */
	15,	/* psf200(15) */
	2,	/* psf3(2) */
	9,	/* psf30(9) */
	3,	/* psf4(3) */
	10,	/* psf40(10) */
	4,	/* psf5(4) */
	11,	/* psf50(11) */
	5,	/* psf6(5) */
	12,	/* psf60(12) */
	6,	/* psf8(6) */
	13	/* psf80(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_onDurationTimer_specs_4 = {
	asn_MAP_onDurationTimer_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_onDurationTimer_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_onDurationTimer_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_onDurationTimer_4 = {
	"onDurationTimer",
	"onDurationTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_onDurationTimer_tags_4,
	sizeof(asn_DEF_onDurationTimer_tags_4)
		/sizeof(asn_DEF_onDurationTimer_tags_4[0]) - 1, /* 1 */
	asn_DEF_onDurationTimer_tags_4,	/* Same as above */
	sizeof(asn_DEF_onDurationTimer_tags_4)
		/sizeof(asn_DEF_onDurationTimer_tags_4[0]), /* 2 */
	{ &asn_OER_type_onDurationTimer_constr_4, &asn_PER_type_onDurationTimer_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_onDurationTimer_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_InactivityTimer_value2enum_21[] = {
	{ 0,	4,	"psf1" },
	{ 1,	4,	"psf2" },
	{ 2,	4,	"psf3" },
	{ 3,	4,	"psf4" },
	{ 4,	4,	"psf5" },
	{ 5,	4,	"psf6" },
	{ 6,	4,	"psf8" },
	{ 7,	5,	"psf10" },
	{ 8,	5,	"psf20" },
	{ 9,	5,	"psf30" },
	{ 10,	5,	"psf40" },
	{ 11,	5,	"psf50" },
	{ 12,	5,	"psf60" },
	{ 13,	5,	"psf80" },
	{ 14,	6,	"psf100" },
	{ 15,	6,	"psf200" },
	{ 16,	6,	"psf300" },
	{ 17,	6,	"psf500" },
	{ 18,	6,	"psf750" },
	{ 19,	7,	"psf1280" },
	{ 20,	7,	"psf1920" },
	{ 21,	7,	"psf2560" },
	{ 22,	10,	"psf0-v1020" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_drx_InactivityTimer_enum2value_21[] = {
	22,	/* psf0-v1020(22) */
	0,	/* psf1(0) */
	7,	/* psf10(7) */
	14,	/* psf100(14) */
	19,	/* psf1280(19) */
	20,	/* psf1920(20) */
	1,	/* psf2(1) */
	8,	/* psf20(8) */
	15,	/* psf200(15) */
	21,	/* psf2560(21) */
	2,	/* psf3(2) */
	9,	/* psf30(9) */
	16,	/* psf300(16) */
	3,	/* psf4(3) */
	10,	/* psf40(10) */
	4,	/* psf5(4) */
	11,	/* psf50(11) */
	17,	/* psf500(17) */
	5,	/* psf6(5) */
	12,	/* psf60(12) */
	18,	/* psf750(18) */
	6,	/* psf8(6) */
	13,	/* psf80(13) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_InactivityTimer_specs_21 = {
	asn_MAP_drx_InactivityTimer_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_InactivityTimer_enum2value_21,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_InactivityTimer_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimer_21 = {
	"drx-InactivityTimer",
	"drx-InactivityTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_InactivityTimer_tags_21,
	sizeof(asn_DEF_drx_InactivityTimer_tags_21)
		/sizeof(asn_DEF_drx_InactivityTimer_tags_21[0]) - 1, /* 1 */
	asn_DEF_drx_InactivityTimer_tags_21,	/* Same as above */
	sizeof(asn_DEF_drx_InactivityTimer_tags_21)
		/sizeof(asn_DEF_drx_InactivityTimer_tags_21[0]), /* 2 */
	{ &asn_OER_type_drx_InactivityTimer_constr_21, &asn_PER_type_drx_InactivityTimer_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_InactivityTimer_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_RetransmissionTimer_value2enum_54[] = {
	{ 0,	4,	"psf1" },
	{ 1,	4,	"psf2" },
	{ 2,	4,	"psf4" },
	{ 3,	4,	"psf6" },
	{ 4,	4,	"psf8" },
	{ 5,	5,	"psf16" },
	{ 6,	5,	"psf24" },
	{ 7,	5,	"psf33" }
};
static const unsigned int asn_MAP_drx_RetransmissionTimer_enum2value_54[] = {
	0,	/* psf1(0) */
	5,	/* psf16(5) */
	1,	/* psf2(1) */
	6,	/* psf24(6) */
	7,	/* psf33(7) */
	2,	/* psf4(2) */
	3,	/* psf6(3) */
	4	/* psf8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_RetransmissionTimer_specs_54 = {
	asn_MAP_drx_RetransmissionTimer_value2enum_54,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_RetransmissionTimer_enum2value_54,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_RetransmissionTimer_tags_54[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_RetransmissionTimer_54 = {
	"drx-RetransmissionTimer",
	"drx-RetransmissionTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_RetransmissionTimer_tags_54,
	sizeof(asn_DEF_drx_RetransmissionTimer_tags_54)
		/sizeof(asn_DEF_drx_RetransmissionTimer_tags_54[0]) - 1, /* 1 */
	asn_DEF_drx_RetransmissionTimer_tags_54,	/* Same as above */
	sizeof(asn_DEF_drx_RetransmissionTimer_tags_54)
		/sizeof(asn_DEF_drx_RetransmissionTimer_tags_54[0]), /* 2 */
	{ &asn_OER_type_drx_RetransmissionTimer_constr_54, &asn_PER_type_drx_RetransmissionTimer_constr_54, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_RetransmissionTimer_specs_54	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_longDRX_CycleStartOffset_63[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf10_constr_64, &asn_PER_memb_sf10_constr_64,  memb_sf10_constraint_63 },
		0, 0, /* No default value */
		"sf10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf20),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf20_constr_65, &asn_PER_memb_sf20_constr_65,  memb_sf20_constraint_63 },
		0, 0, /* No default value */
		"sf20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf32),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf32_constr_66, &asn_PER_memb_sf32_constr_66,  memb_sf32_constraint_63 },
		0, 0, /* No default value */
		"sf32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf40_constr_67, &asn_PER_memb_sf40_constr_67,  memb_sf40_constraint_63 },
		0, 0, /* No default value */
		"sf40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf64),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf64_constr_68, &asn_PER_memb_sf64_constr_68,  memb_sf64_constraint_63 },
		0, 0, /* No default value */
		"sf64"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf80),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf80_constr_69, &asn_PER_memb_sf80_constr_69,  memb_sf80_constraint_63 },
		0, 0, /* No default value */
		"sf80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf128),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf128_constr_70, &asn_PER_memb_sf128_constr_70,  memb_sf128_constraint_63 },
		0, 0, /* No default value */
		"sf128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf160),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf160_constr_71, &asn_PER_memb_sf160_constr_71,  memb_sf160_constraint_63 },
		0, 0, /* No default value */
		"sf160"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf256),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf256_constr_72, &asn_PER_memb_sf256_constr_72,  memb_sf256_constraint_63 },
		0, 0, /* No default value */
		"sf256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf320),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf320_constr_73, &asn_PER_memb_sf320_constr_73,  memb_sf320_constraint_63 },
		0, 0, /* No default value */
		"sf320"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf512),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf512_constr_74, &asn_PER_memb_sf512_constr_74,  memb_sf512_constraint_63 },
		0, 0, /* No default value */
		"sf512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf640),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf640_constr_75, &asn_PER_memb_sf640_constr_75,  memb_sf640_constraint_63 },
		0, 0, /* No default value */
		"sf640"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf1024),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf1024_constr_76, &asn_PER_memb_sf1024_constr_76,  memb_sf1024_constraint_63 },
		0, 0, /* No default value */
		"sf1024"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf1280),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf1280_constr_77, &asn_PER_memb_sf1280_constr_77,  memb_sf1280_constraint_63 },
		0, 0, /* No default value */
		"sf1280"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf2048),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf2048_constr_78, &asn_PER_memb_sf2048_constr_78,  memb_sf2048_constraint_63 },
		0, 0, /* No default value */
		"sf2048"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, choice.sf2560),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sf2560_constr_79, &asn_PER_memb_sf2560_constr_79,  memb_sf2560_constraint_63 },
		0, 0, /* No default value */
		"sf2560"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_longDRX_CycleStartOffset_tag2el_63[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sf20 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sf32 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf40 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sf64 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sf80 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sf128 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sf160 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sf256 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sf320 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sf512 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* sf640 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* sf1024 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* sf1280 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* sf2048 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* sf2560 */
};
static asn_CHOICE_specifics_t asn_SPC_longDRX_CycleStartOffset_specs_63 = {
	sizeof(struct DRX_Config__setup__longDRX_CycleStartOffset),
	offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, _asn_ctx),
	offsetof(struct DRX_Config__setup__longDRX_CycleStartOffset, present),
	sizeof(((struct DRX_Config__setup__longDRX_CycleStartOffset *)0)->present),
	asn_MAP_longDRX_CycleStartOffset_tag2el_63,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_longDRX_CycleStartOffset_63 = {
	"longDRX-CycleStartOffset",
	"longDRX-CycleStartOffset",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_longDRX_CycleStartOffset_constr_63, &asn_PER_type_longDRX_CycleStartOffset_constr_63, CHOICE_constraint },
	asn_MBR_longDRX_CycleStartOffset_63,
	16,	/* Elements count */
	&asn_SPC_longDRX_CycleStartOffset_specs_63	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_shortDRX_Cycle_value2enum_81[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf5" },
	{ 2,	3,	"sf8" },
	{ 3,	4,	"sf10" },
	{ 4,	4,	"sf16" },
	{ 5,	4,	"sf20" },
	{ 6,	4,	"sf32" },
	{ 7,	4,	"sf40" },
	{ 8,	4,	"sf64" },
	{ 9,	4,	"sf80" },
	{ 10,	5,	"sf128" },
	{ 11,	5,	"sf160" },
	{ 12,	5,	"sf256" },
	{ 13,	5,	"sf320" },
	{ 14,	5,	"sf512" },
	{ 15,	5,	"sf640" }
};
static const unsigned int asn_MAP_shortDRX_Cycle_enum2value_81[] = {
	3,	/* sf10(3) */
	10,	/* sf128(10) */
	4,	/* sf16(4) */
	11,	/* sf160(11) */
	0,	/* sf2(0) */
	5,	/* sf20(5) */
	12,	/* sf256(12) */
	6,	/* sf32(6) */
	13,	/* sf320(13) */
	7,	/* sf40(7) */
	1,	/* sf5(1) */
	14,	/* sf512(14) */
	8,	/* sf64(8) */
	15,	/* sf640(15) */
	2,	/* sf8(2) */
	9	/* sf80(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_shortDRX_Cycle_specs_81 = {
	asn_MAP_shortDRX_Cycle_value2enum_81,	/* "tag" => N; sorted by tag */
	asn_MAP_shortDRX_Cycle_enum2value_81,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_shortDRX_Cycle_tags_81[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortDRX_Cycle_81 = {
	"shortDRX-Cycle",
	"shortDRX-Cycle",
	&asn_OP_NativeEnumerated,
	asn_DEF_shortDRX_Cycle_tags_81,
	sizeof(asn_DEF_shortDRX_Cycle_tags_81)
		/sizeof(asn_DEF_shortDRX_Cycle_tags_81[0]) - 1, /* 1 */
	asn_DEF_shortDRX_Cycle_tags_81,	/* Same as above */
	sizeof(asn_DEF_shortDRX_Cycle_tags_81)
		/sizeof(asn_DEF_shortDRX_Cycle_tags_81[0]), /* 2 */
	{ &asn_OER_type_shortDRX_Cycle_constr_81, &asn_PER_type_shortDRX_Cycle_constr_81, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_shortDRX_Cycle_specs_81	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_shortDRX_80[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__shortDRX, shortDRX_Cycle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_shortDRX_Cycle_81,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortDRX-Cycle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup__shortDRX, drxShortCycleTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_drxShortCycleTimer_constr_98, &asn_PER_memb_drxShortCycleTimer_constr_98,  memb_drxShortCycleTimer_constraint_80 },
		0, 0, /* No default value */
		"drxShortCycleTimer"
		},
};
static const ber_tlv_tag_t asn_DEF_shortDRX_tags_80[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_shortDRX_tag2el_80[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* shortDRX-Cycle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drxShortCycleTimer */
};
static asn_SEQUENCE_specifics_t asn_SPC_shortDRX_specs_80 = {
	sizeof(struct DRX_Config__setup__shortDRX),
	offsetof(struct DRX_Config__setup__shortDRX, _asn_ctx),
	asn_MAP_shortDRX_tag2el_80,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortDRX_80 = {
	"shortDRX",
	"shortDRX",
	&asn_OP_SEQUENCE,
	asn_DEF_shortDRX_tags_80,
	sizeof(asn_DEF_shortDRX_tags_80)
		/sizeof(asn_DEF_shortDRX_tags_80[0]) - 1, /* 1 */
	asn_DEF_shortDRX_tags_80,	/* Same as above */
	sizeof(asn_DEF_shortDRX_tags_80)
		/sizeof(asn_DEF_shortDRX_tags_80[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_shortDRX_80,
	2,	/* Elements count */
	&asn_SPC_shortDRX_specs_80	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup, onDurationTimer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_onDurationTimer_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDurationTimer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup, drx_InactivityTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_InactivityTimer_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-InactivityTimer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup, drx_RetransmissionTimer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_RetransmissionTimer_54,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-RetransmissionTimer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config__setup, longDRX_CycleStartOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_longDRX_CycleStartOffset_63,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longDRX-CycleStartOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct DRX_Config__setup, shortDRX),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_shortDRX_80,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortDRX"
		},
};
static const int asn_MAP_setup_oms_3[] = { 4 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* onDurationTimer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-InactivityTimer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drx-RetransmissionTimer */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* longDRX-CycleStartOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* shortDRX */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct DRX_Config__setup),
	offsetof(struct DRX_Config__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	5,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	5,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRX_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DRX_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_DRX_Config_specs_1 = {
	sizeof(struct DRX_Config),
	offsetof(struct DRX_Config, _asn_ctx),
	offsetof(struct DRX_Config, present),
	sizeof(((struct DRX_Config *)0)->present),
	asn_MAP_DRX_Config_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DRX_Config = {
	"DRX-Config",
	"DRX-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_DRX_Config_constr_1, &asn_PER_type_DRX_Config_constr_1, CHOICE_constraint },
	asn_MBR_DRX_Config_1,
	2,	/* Elements count */
	&asn_SPC_DRX_Config_specs_1	/* Additional specs */
};

