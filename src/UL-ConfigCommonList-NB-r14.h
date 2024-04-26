/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UL_ConfigCommonList_NB_r14_H_
#define	_UL_ConfigCommonList_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_ConfigCommon_NB_r14;

/* UL-ConfigCommonList-NB-r14 */
typedef struct UL_ConfigCommonList_NB_r14 {
	A_SEQUENCE_OF(struct UL_ConfigCommon_NB_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_ConfigCommonList_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_ConfigCommonList_NB_r14;
extern asn_SET_OF_specifics_t asn_SPC_UL_ConfigCommonList_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_ConfigCommonList_NB_r14_1[1];
extern asn_per_constraints_t asn_PER_type_UL_ConfigCommonList_NB_r14_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-ConfigCommon-NB-r14.h"

#endif	/* _UL_ConfigCommonList_NB_r14_H_ */
#include <asn_internal.h>
