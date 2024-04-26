/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_PLMN_IdentityList2_H_
#define	_PLMN_IdentityList2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* PLMN-IdentityList2 */
typedef struct PLMN_IdentityList2 {
	A_SEQUENCE_OF(struct PLMN_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityList2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList2;
extern asn_SET_OF_specifics_t asn_SPC_PLMN_IdentityList2_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityList2_1[1];
extern asn_per_constraints_t asn_PER_type_PLMN_IdentityList2_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _PLMN_IdentityList2_H_ */
#include <asn_internal.h>
