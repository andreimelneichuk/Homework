/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_RRCConnectionReconfiguration_v1020_IEs_H_
#define	_RRCConnectionReconfiguration_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToReleaseList_r10;
struct SCellToAddModList_r10;
struct RRCConnectionReconfiguration_v1130_IEs;

/* RRCConnectionReconfiguration-v1020-IEs */
typedef struct RRCConnectionReconfiguration_v1020_IEs {
	struct SCellToReleaseList_r10	*sCellToReleaseList_r10	/* OPTIONAL */;
	struct SCellToAddModList_r10	*sCellToAddModList_r10	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1020_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1020_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToReleaseList-r10.h"
#include "SCellToAddModList-r10.h"
#include "RRCConnectionReconfiguration-v1130-IEs.h"

#endif	/* _RRCConnectionReconfiguration_v1020_IEs_H_ */
#include <asn_internal.h>
