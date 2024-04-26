/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SPS_Config_v1530_H_
#define	_SPS_Config_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include "C-RNTI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SPS_ConfigDL;
struct SPS_ConfigUL_STTI_ToAddModList_r15;
struct SPS_ConfigUL_STTI_ToReleaseList_r15;
struct SPS_ConfigUL_ToAddModList_r15;
struct SPS_ConfigUL_ToReleaseList_r15;

/* SPS-Config-v1530 */
typedef struct SPS_Config_v1530 {
	C_RNTI_t	*semiPersistSchedC_RNTI_r15	/* OPTIONAL */;
	struct SPS_ConfigDL	*sps_ConfigDL_r15	/* OPTIONAL */;
	struct SPS_ConfigUL_STTI_ToAddModList_r15	*sps_ConfigUL_STTI_ToAddModList_r15	/* OPTIONAL */;
	struct SPS_ConfigUL_STTI_ToReleaseList_r15	*sps_ConfigUL_STTI_ToReleaseList_r15	/* OPTIONAL */;
	struct SPS_ConfigUL_ToAddModList_r15	*sps_ConfigUL_ToAddModList_r15	/* OPTIONAL */;
	struct SPS_ConfigUL_ToReleaseList_r15	*sps_ConfigUL_ToReleaseList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_Config_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPS_Config_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_SPS_Config_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_Config_v1530_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SPS-ConfigDL.h"
#include "SPS-ConfigUL-STTI-ToAddModList-r15.h"
#include "SPS-ConfigUL-STTI-ToReleaseList-r15.h"
#include "SPS-ConfigUL-ToAddModList-r15.h"
#include "SPS-ConfigUL-ToReleaseList-r15.h"

#endif	/* _SPS_Config_v1530_H_ */
#include <asn_internal.h>
