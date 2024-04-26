/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UE_EUTRA_Capability_v1560_IEs_H_
#define	_UE_EUTRA_Capability_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDCP-ParametersNR-v1560.h"
#include "IRAT-ParametersNR-v1560.h"
#include <OCTET_STRING.h>
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1560.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-EUTRA-Capability-v1560-IEs */
typedef struct UE_EUTRA_Capability_v1560_IEs {
	PDCP_ParametersNR_v1560_t	 pdcp_ParametersNR_v1560;
	IRAT_ParametersNR_v1560_t	 irat_ParametersNR_v1560;
	OCTET_STRING_t	*appliedCapabilityFilterCommon_r15	/* OPTIONAL */;
	UE_EUTRA_CapabilityAddXDD_Mode_v1560_t	 fdd_Add_UE_EUTRA_Capabilities_v1560;
	UE_EUTRA_CapabilityAddXDD_Mode_v1560_t	 tdd_Add_UE_EUTRA_Capabilities_v1560;
	struct UE_EUTRA_Capability_v1560_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1560_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1560_IEs_H_ */
#include <asn_internal.h>
