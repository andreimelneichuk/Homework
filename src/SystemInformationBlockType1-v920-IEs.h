/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SystemInformationBlockType1_v920_IEs_H_
#define	_SystemInformationBlockType1_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v920_IEs__ims_EmergencySupport_r9 {
	SystemInformationBlockType1_v920_IEs__ims_EmergencySupport_r9_true	= 0
} e_SystemInformationBlockType1_v920_IEs__ims_EmergencySupport_r9;

/* Forward declarations */
struct CellSelectionInfo_v920;
struct SystemInformationBlockType1_v1130_IEs;

/* SystemInformationBlockType1-v920-IEs */
typedef struct SystemInformationBlockType1_v920_IEs {
	long	*ims_EmergencySupport_r9	/* OPTIONAL */;
	struct CellSelectionInfo_v920	*cellSelectionInfo_v920	/* OPTIONAL */;
	struct SystemInformationBlockType1_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ims_EmergencySupport_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v920_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectionInfo-v920.h"
#include "SystemInformationBlockType1-v1130-IEs.h"

#endif	/* _SystemInformationBlockType1_v920_IEs_H_ */
#include <asn_internal.h>
