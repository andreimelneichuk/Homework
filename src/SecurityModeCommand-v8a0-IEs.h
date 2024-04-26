/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SecurityModeCommand_v8a0_IEs_H_
#define	_SecurityModeCommand_v8a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecurityModeCommand-v8a0-IEs */
typedef struct SecurityModeCommand_v8a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct SecurityModeCommand_v8a0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeCommand_v8a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeCommand_v8a0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeCommand_v8a0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeCommand_v8a0_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeCommand_v8a0_IEs_H_ */
#include <asn_internal.h>
