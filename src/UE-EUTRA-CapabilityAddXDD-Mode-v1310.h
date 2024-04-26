/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1310;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1310 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1310 {
	struct PhyLayerParameters_v1310	*phyLayerParameters_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1310_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1310.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_ */
#include <asn_internal.h>
