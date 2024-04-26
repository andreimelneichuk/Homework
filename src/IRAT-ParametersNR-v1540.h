/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_IRAT_ParametersNR_v1540_H_
#define	_IRAT_ParametersNR_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_FDD_FR1_r15 {
	IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_FDD_FR1_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_FDD_FR1_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_TDD_FR1_r15 {
	IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_TDD_FR1_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_TDD_FR1_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_FDD_FR2_r15 {
	IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_FDD_FR2_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_FDD_FR2_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_TDD_FR2_r15 {
	IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_TDD_FR2_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_5GC_HO_ToNR_TDD_FR2_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_FDD_FR1_r15 {
	IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_FDD_FR1_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_FDD_FR1_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_TDD_FR1_r15 {
	IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_TDD_FR1_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_TDD_FR1_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_FDD_FR2_r15 {
	IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_FDD_FR2_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_FDD_FR2_r15;
typedef enum IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_TDD_FR2_r15 {
	IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_TDD_FR2_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__eutra_EPC_HO_ToNR_TDD_FR2_r15;
typedef enum IRAT_ParametersNR_v1540__ims_VoiceOverNR_FR1_r15 {
	IRAT_ParametersNR_v1540__ims_VoiceOverNR_FR1_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__ims_VoiceOverNR_FR1_r15;
typedef enum IRAT_ParametersNR_v1540__ims_VoiceOverNR_FR2_r15 {
	IRAT_ParametersNR_v1540__ims_VoiceOverNR_FR2_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__ims_VoiceOverNR_FR2_r15;
typedef enum IRAT_ParametersNR_v1540__sa_NR_r15 {
	IRAT_ParametersNR_v1540__sa_NR_r15_supported	= 0
} e_IRAT_ParametersNR_v1540__sa_NR_r15;

/* Forward declarations */
struct SupportedBandListNR_r15;

/* IRAT-ParametersNR-v1540 */
typedef struct IRAT_ParametersNR_v1540 {
	long	*eutra_5GC_HO_ToNR_FDD_FR1_r15	/* OPTIONAL */;
	long	*eutra_5GC_HO_ToNR_TDD_FR1_r15	/* OPTIONAL */;
	long	*eutra_5GC_HO_ToNR_FDD_FR2_r15	/* OPTIONAL */;
	long	*eutra_5GC_HO_ToNR_TDD_FR2_r15	/* OPTIONAL */;
	long	*eutra_EPC_HO_ToNR_FDD_FR1_r15	/* OPTIONAL */;
	long	*eutra_EPC_HO_ToNR_TDD_FR1_r15	/* OPTIONAL */;
	long	*eutra_EPC_HO_ToNR_FDD_FR2_r15	/* OPTIONAL */;
	long	*eutra_EPC_HO_ToNR_TDD_FR2_r15	/* OPTIONAL */;
	long	*ims_VoiceOverNR_FR1_r15	/* OPTIONAL */;
	long	*ims_VoiceOverNR_FR2_r15	/* OPTIONAL */;
	long	*sa_NR_r15	/* OPTIONAL */;
	struct SupportedBandListNR_r15	*supportedBandListNR_SA_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersNR_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_5GC_HO_ToNR_FDD_FR1_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_5GC_HO_ToNR_TDD_FR1_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_5GC_HO_ToNR_FDD_FR2_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_5GC_HO_ToNR_TDD_FR2_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_EPC_HO_ToNR_FDD_FR1_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_EPC_HO_ToNR_TDD_FR1_r15_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_EPC_HO_ToNR_FDD_FR2_r15_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_EPC_HO_ToNR_TDD_FR2_r15_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ims_VoiceOverNR_FR1_r15_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ims_VoiceOverNR_FR2_r15_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sa_NR_r15_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersNR_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersNR_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersNR_v1540_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandListNR-r15.h"

#endif	/* _IRAT_ParametersNR_v1540_H_ */
#include <asn_internal.h>
