/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_HighSpeedConfig_v1530_H_
#define	_HighSpeedConfig_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HighSpeedConfig_v1530__highSpeedMeasGapCE_ModeA_r15 {
	HighSpeedConfig_v1530__highSpeedMeasGapCE_ModeA_r15_true	= 0
} e_HighSpeedConfig_v1530__highSpeedMeasGapCE_ModeA_r15;

/* HighSpeedConfig-v1530 */
typedef struct HighSpeedConfig_v1530 {
	long	 highSpeedMeasGapCE_ModeA_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HighSpeedConfig_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_highSpeedMeasGapCE_ModeA_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HighSpeedConfig_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_HighSpeedConfig_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_HighSpeedConfig_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _HighSpeedConfig_v1530_H_ */
#include <asn_internal.h>
