/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_Paging_v1530_IEs_H_
#define	_Paging_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Paging_v1530_IEs__accessType {
	Paging_v1530_IEs__accessType_non3GPP	= 0
} e_Paging_v1530_IEs__accessType;

/* Paging-v1530-IEs */
typedef struct Paging_v1530_IEs {
	long	*accessType	/* OPTIONAL */;
	struct Paging_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Paging_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_accessType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Paging_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Paging_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Paging_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Paging_v1530_IEs_H_ */
#include <asn_internal.h>
