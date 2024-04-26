/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_AdditionalBandInfoList_NB_r14_H_
#define	_AdditionalBandInfoList_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-NB-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AdditionalBandInfoList-NB-r14 */
typedef struct AdditionalBandInfoList_NB_r14 {
	A_SEQUENCE_OF(FreqBandIndicator_NB_r13_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalBandInfoList_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalBandInfoList_NB_r14;
extern asn_SET_OF_specifics_t asn_SPC_AdditionalBandInfoList_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalBandInfoList_NB_r14_1[1];
extern asn_per_constraints_t asn_PER_type_AdditionalBandInfoList_NB_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalBandInfoList_NB_r14_H_ */
#include <asn_internal.h>
