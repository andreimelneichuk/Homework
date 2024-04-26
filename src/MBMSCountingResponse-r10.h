/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_MBMSCountingResponse_r10_H_
#define	_MBMSCountingResponse_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMSCountingResponse-r10-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMSCountingResponse_r10__criticalExtensions_PR {
	MBMSCountingResponse_r10__criticalExtensions_PR_NOTHING,	/* No components present */
	MBMSCountingResponse_r10__criticalExtensions_PR_c1,
	MBMSCountingResponse_r10__criticalExtensions_PR_criticalExtensionsFuture
} MBMSCountingResponse_r10__criticalExtensions_PR;
typedef enum MBMSCountingResponse_r10__criticalExtensions__c1_PR {
	MBMSCountingResponse_r10__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	MBMSCountingResponse_r10__criticalExtensions__c1_PR_countingResponse_r10,
	MBMSCountingResponse_r10__criticalExtensions__c1_PR_spare3,
	MBMSCountingResponse_r10__criticalExtensions__c1_PR_spare2,
	MBMSCountingResponse_r10__criticalExtensions__c1_PR_spare1
} MBMSCountingResponse_r10__criticalExtensions__c1_PR;

/* MBMSCountingResponse-r10 */
typedef struct MBMSCountingResponse_r10 {
	struct MBMSCountingResponse_r10__criticalExtensions {
		MBMSCountingResponse_r10__criticalExtensions_PR present;
		union MBMSCountingResponse_r10__criticalExtensions_u {
			struct MBMSCountingResponse_r10__criticalExtensions__c1 {
				MBMSCountingResponse_r10__criticalExtensions__c1_PR present;
				union MBMSCountingResponse_r10__criticalExtensions__c1_u {
					MBMSCountingResponse_r10_IEs_t	 countingResponse_r10;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct MBMSCountingResponse_r10__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSCountingResponse_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSCountingResponse_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMSCountingResponse_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMSCountingResponse_r10_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMSCountingResponse_r10_H_ */
#include <asn_internal.h>
