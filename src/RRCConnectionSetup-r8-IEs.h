/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_RRCConnectionSetup_r8_IEs_H_
#define	_RRCConnectionSetup_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigDedicated.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionSetup_v8a0_IEs;

/* RRCConnectionSetup-r8-IEs */
typedef struct RRCConnectionSetup_r8_IEs {
	RadioResourceConfigDedicated_t	 radioResourceConfigDedicated;
	struct RRCConnectionSetup_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetup_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetup_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionSetup-v8a0-IEs.h"

#endif	/* _RRCConnectionSetup_r8_IEs_H_ */
#include <asn_internal.h>
