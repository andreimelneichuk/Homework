/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_RRCConnectionReestablishmentComplete_v1530_IEs_H_
#define	_RRCConnectionReestablishmentComplete_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentComplete_v1530_IEs__logMeasAvailableBT_r15 {
	RRCConnectionReestablishmentComplete_v1530_IEs__logMeasAvailableBT_r15_true	= 0
} e_RRCConnectionReestablishmentComplete_v1530_IEs__logMeasAvailableBT_r15;
typedef enum RRCConnectionReestablishmentComplete_v1530_IEs__logMeasAvailableWLAN_r15 {
	RRCConnectionReestablishmentComplete_v1530_IEs__logMeasAvailableWLAN_r15_true	= 0
} e_RRCConnectionReestablishmentComplete_v1530_IEs__logMeasAvailableWLAN_r15;
typedef enum RRCConnectionReestablishmentComplete_v1530_IEs__flightPathInfoAvailable_r15 {
	RRCConnectionReestablishmentComplete_v1530_IEs__flightPathInfoAvailable_r15_true	= 0
} e_RRCConnectionReestablishmentComplete_v1530_IEs__flightPathInfoAvailable_r15;

/* RRCConnectionReestablishmentComplete-v1530-IEs */
typedef struct RRCConnectionReestablishmentComplete_v1530_IEs {
	long	*logMeasAvailableBT_r15	/* OPTIONAL */;
	long	*logMeasAvailableWLAN_r15	/* OPTIONAL */;
	long	*flightPathInfoAvailable_r15	/* OPTIONAL */;
	struct RRCConnectionReestablishmentComplete_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableBT_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableWLAN_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_flightPathInfoAvailable_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentComplete_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentComplete_v1530_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentComplete_v1530_IEs_H_ */
#include <asn_internal.h>
