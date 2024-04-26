/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_MultiBandInfoList_v10l0_H_
#define	_MultiBandInfoList_v10l0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_v10l0;

/* MultiBandInfoList-v10l0 */
typedef struct MultiBandInfoList_v10l0 {
	A_SEQUENCE_OF(struct NS_PmaxList_v10l0) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiBandInfoList_v10l0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiBandInfoList_v10l0;
extern asn_SET_OF_specifics_t asn_SPC_MultiBandInfoList_v10l0_specs_1;
extern asn_TYPE_member_t asn_MBR_MultiBandInfoList_v10l0_1[1];
extern asn_per_constraints_t asn_PER_type_MultiBandInfoList_v10l0_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NS-PmaxList-v10l0.h"

#endif	/* _MultiBandInfoList_v10l0_H_ */
#include <asn_internal.h>
