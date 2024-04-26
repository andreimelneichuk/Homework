/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_BCCH_Config_NB_r13_H_
#define	_BCCH_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_Config_NB_r13__modificationPeriodCoeff_r13 {
	BCCH_Config_NB_r13__modificationPeriodCoeff_r13_n16	= 0,
	BCCH_Config_NB_r13__modificationPeriodCoeff_r13_n32	= 1,
	BCCH_Config_NB_r13__modificationPeriodCoeff_r13_n64	= 2,
	BCCH_Config_NB_r13__modificationPeriodCoeff_r13_n128	= 3
} e_BCCH_Config_NB_r13__modificationPeriodCoeff_r13;

/* BCCH-Config-NB-r13 */
typedef struct BCCH_Config_NB_r13 {
	long	 modificationPeriodCoeff_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_Config_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_modificationPeriodCoeff_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_Config_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_BCCH_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BCCH_Config_NB_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_Config_NB_r13_H_ */
#include <asn_internal.h>
