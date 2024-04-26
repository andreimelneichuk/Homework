/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_V2X_BandwidthClassSL_r14_H_
#define	_V2X_BandwidthClassSL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "V2X-BandwidthClass-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* V2X-BandwidthClassSL-r14 */
typedef struct V2X_BandwidthClassSL_r14 {
	A_SEQUENCE_OF(V2X_BandwidthClass_r14_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_BandwidthClassSL_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_BandwidthClassSL_r14;
extern asn_SET_OF_specifics_t asn_SPC_V2X_BandwidthClassSL_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_V2X_BandwidthClassSL_r14_1[1];
extern asn_per_constraints_t asn_PER_type_V2X_BandwidthClassSL_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_BandwidthClassSL_r14_H_ */
#include <asn_internal.h>
