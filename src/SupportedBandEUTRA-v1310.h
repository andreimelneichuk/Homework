/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SupportedBandEUTRA_v1310_H_
#define	_SupportedBandEUTRA_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandEUTRA_v1310__ue_PowerClass_5_r13 {
	SupportedBandEUTRA_v1310__ue_PowerClass_5_r13_supported	= 0
} e_SupportedBandEUTRA_v1310__ue_PowerClass_5_r13;

/* SupportedBandEUTRA-v1310 */
typedef struct SupportedBandEUTRA_v1310 {
	long	*ue_PowerClass_5_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandEUTRA_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_PowerClass_5_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedBandEUTRA_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandEUTRA_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandEUTRA_v1310_H_ */
#include <asn_internal.h>
