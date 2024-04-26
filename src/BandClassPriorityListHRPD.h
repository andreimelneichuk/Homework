/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_BandClassPriorityListHRPD_H_
#define	_BandClassPriorityListHRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandClassPriorityHRPD;

/* BandClassPriorityListHRPD */
typedef struct BandClassPriorityListHRPD {
	A_SEQUENCE_OF(struct BandClassPriorityHRPD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassPriorityListHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassPriorityListHRPD;
extern asn_SET_OF_specifics_t asn_SPC_BandClassPriorityListHRPD_specs_1;
extern asn_TYPE_member_t asn_MBR_BandClassPriorityListHRPD_1[1];
extern asn_per_constraints_t asn_PER_type_BandClassPriorityListHRPD_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandClassPriorityHRPD.h"

#endif	/* _BandClassPriorityListHRPD_H_ */
#include <asn_internal.h>
