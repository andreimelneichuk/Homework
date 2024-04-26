/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_HandoverPreparationInformation_v920_IEs_H_
#define	_HandoverPreparationInformation_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9 {
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel9	= 0,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel10	= 1,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel11	= 2,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel12	= 3,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_v10j0	= 4,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_v11e0	= 5,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_v1280	= 6,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel13	= 7,
	/*
	 * Enumeration is extensible
	 */
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel14	= 8,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel15	= 9
} e_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9;

/* Forward declarations */
struct HandoverPreparationInformation_v9d0_IEs;

/* HandoverPreparationInformation-v920-IEs */
typedef struct HandoverPreparationInformation_v920_IEs {
	long	*ue_ConfigRelease_r9	/* OPTIONAL */;
	struct HandoverPreparationInformation_v9d0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_ConfigRelease_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v920_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HandoverPreparationInformation-v9d0-IEs.h"

#endif	/* _HandoverPreparationInformation_v920_IEs_H_ */
#include <asn_internal.h>
