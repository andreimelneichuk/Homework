/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_RRCConnectionReestablishment_H_
#define	_RRCConnectionReestablishment_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionReestablishment-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishment__criticalExtensions_PR {
	RRCConnectionReestablishment__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishment__criticalExtensions_PR_c1,
	RRCConnectionReestablishment__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishment__criticalExtensions_PR;
typedef enum RRCConnectionReestablishment__criticalExtensions__c1_PR {
	RRCConnectionReestablishment__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishment__criticalExtensions__c1_PR_rrcConnectionReestablishment_r8,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare7,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare6,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare5,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare4,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare3,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare2,
	RRCConnectionReestablishment__criticalExtensions__c1_PR_spare1
} RRCConnectionReestablishment__criticalExtensions__c1_PR;

/* RRCConnectionReestablishment */
typedef struct RRCConnectionReestablishment {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReestablishment__criticalExtensions {
		RRCConnectionReestablishment__criticalExtensions_PR present;
		union RRCConnectionReestablishment__criticalExtensions_u {
			struct RRCConnectionReestablishment__criticalExtensions__c1 {
				RRCConnectionReestablishment__criticalExtensions__c1_PR present;
				union RRCConnectionReestablishment__criticalExtensions__c1_u {
					RRCConnectionReestablishment_r8_IEs_t	 rrcConnectionReestablishment_r8;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionReestablishment__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishment;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishment_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishment_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishment_H_ */
#include <asn_internal.h>
