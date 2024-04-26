/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_RRCConnectionSetupComplete_v1540_IEs_H_
#define	_RRCConnectionSetupComplete_v1540_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_v1540_IEs__gummei_Type_v1540 {
	RRCConnectionSetupComplete_v1540_IEs__gummei_Type_v1540_mappedFrom5G	= 0
} e_RRCConnectionSetupComplete_v1540_IEs__gummei_Type_v1540;
typedef enum RRCConnectionSetupComplete_v1540_IEs__guami_Type_r15 {
	RRCConnectionSetupComplete_v1540_IEs__guami_Type_r15_native	= 0,
	RRCConnectionSetupComplete_v1540_IEs__guami_Type_r15_mapped	= 1
} e_RRCConnectionSetupComplete_v1540_IEs__guami_Type_r15;

/* RRCConnectionSetupComplete-v1540-IEs */
typedef struct RRCConnectionSetupComplete_v1540_IEs {
	long	*gummei_Type_v1540	/* OPTIONAL */;
	long	*guami_Type_r15	/* OPTIONAL */;
	struct RRCConnectionSetupComplete_v1540_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v1540_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gummei_Type_v1540_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_guami_Type_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1540_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1540_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1540_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionSetupComplete_v1540_IEs_H_ */
#include <asn_internal.h>
