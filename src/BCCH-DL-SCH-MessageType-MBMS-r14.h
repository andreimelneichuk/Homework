/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_BCCH_DL_SCH_MessageType_MBMS_r14_H_
#define	_BCCH_DL_SCH_MessageType_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemInformation-MBMS-r14.h"
#include "SystemInformationBlockType1-MBMS-r14.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_DL_SCH_MessageType_MBMS_r14_PR {
	BCCH_DL_SCH_MessageType_MBMS_r14_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_MBMS_r14_PR_c1,
	BCCH_DL_SCH_MessageType_MBMS_r14_PR_messageClassExtension
} BCCH_DL_SCH_MessageType_MBMS_r14_PR;
typedef enum BCCH_DL_SCH_MessageType_MBMS_r14__c1_PR {
	BCCH_DL_SCH_MessageType_MBMS_r14__c1_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_MBMS_r14__c1_PR_systemInformation_MBMS_r14,
	BCCH_DL_SCH_MessageType_MBMS_r14__c1_PR_systemInformationBlockType1_MBMS_r14
} BCCH_DL_SCH_MessageType_MBMS_r14__c1_PR;

/* BCCH-DL-SCH-MessageType-MBMS-r14 */
typedef struct BCCH_DL_SCH_MessageType_MBMS_r14 {
	BCCH_DL_SCH_MessageType_MBMS_r14_PR present;
	union BCCH_DL_SCH_MessageType_MBMS_r14_u {
		struct BCCH_DL_SCH_MessageType_MBMS_r14__c1 {
			BCCH_DL_SCH_MessageType_MBMS_r14__c1_PR present;
			union BCCH_DL_SCH_MessageType_MBMS_r14__c1_u {
				SystemInformation_MBMS_r14_t	 systemInformation_MBMS_r14;
				SystemInformationBlockType1_MBMS_r14_t	 systemInformationBlockType1_MBMS_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct BCCH_DL_SCH_MessageType_MBMS_r14__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_MessageType_MBMS_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_MessageType_MBMS_r14;
extern asn_CHOICE_specifics_t asn_SPC_BCCH_DL_SCH_MessageType_MBMS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_BCCH_DL_SCH_MessageType_MBMS_r14_1[2];
extern asn_per_constraints_t asn_PER_type_BCCH_DL_SCH_MessageType_MBMS_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_MessageType_MBMS_r14_H_ */
#include <asn_internal.h>
