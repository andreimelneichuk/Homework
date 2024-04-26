/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SchedulingInfoList_H_
#define	_SchedulingInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedulingInfo;

/* SchedulingInfoList */
typedef struct SchedulingInfoList {
	A_SEQUENCE_OF(struct SchedulingInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfoList;
extern asn_SET_OF_specifics_t asn_SPC_SchedulingInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInfoList_1[1];
extern asn_per_constraints_t asn_PER_type_SchedulingInfoList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SchedulingInfo.h"

#endif	/* _SchedulingInfoList_H_ */
#include <asn_internal.h>
