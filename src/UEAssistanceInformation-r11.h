/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UEAssistanceInformation_r11_H_
#define	_UEAssistanceInformation_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UEAssistanceInformation-r11-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEAssistanceInformation_r11__criticalExtensions_PR {
	UEAssistanceInformation_r11__criticalExtensions_PR_NOTHING,	/* No components present */
	UEAssistanceInformation_r11__criticalExtensions_PR_c1,
	UEAssistanceInformation_r11__criticalExtensions_PR_criticalExtensionsFuture
} UEAssistanceInformation_r11__criticalExtensions_PR;
typedef enum UEAssistanceInformation_r11__criticalExtensions__c1_PR {
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_ueAssistanceInformation_r11,
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_spare3,
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_spare2,
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_spare1
} UEAssistanceInformation_r11__criticalExtensions__c1_PR;

/* UEAssistanceInformation-r11 */
typedef struct UEAssistanceInformation_r11 {
	struct UEAssistanceInformation_r11__criticalExtensions {
		UEAssistanceInformation_r11__criticalExtensions_PR present;
		union UEAssistanceInformation_r11__criticalExtensions_u {
			struct UEAssistanceInformation_r11__criticalExtensions__c1 {
				UEAssistanceInformation_r11__criticalExtensions__c1_PR present;
				union UEAssistanceInformation_r11__criticalExtensions__c1_u {
					UEAssistanceInformation_r11_IEs_t	 ueAssistanceInformation_r11;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UEAssistanceInformation_r11__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_r11_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UEAssistanceInformation_r11_H_ */
#include <asn_internal.h>
