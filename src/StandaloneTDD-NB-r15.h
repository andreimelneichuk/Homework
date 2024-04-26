/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_StandaloneTDD_NB_r15_H_
#define	_StandaloneTDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StandaloneTDD_NB_r15__sib_StandaloneLocation_r15 {
	StandaloneTDD_NB_r15__sib_StandaloneLocation_r15_lower	= 0,
	StandaloneTDD_NB_r15__sib_StandaloneLocation_r15_higher	= 1
} e_StandaloneTDD_NB_r15__sib_StandaloneLocation_r15;

/* StandaloneTDD-NB-r15 */
typedef struct StandaloneTDD_NB_r15 {
	long	 sib_StandaloneLocation_r15;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StandaloneTDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sib_StandaloneLocation_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_StandaloneTDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_StandaloneTDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_StandaloneTDD_NB_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _StandaloneTDD_NB_r15_H_ */
#include <asn_internal.h>
