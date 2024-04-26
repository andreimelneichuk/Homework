/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_PhyLayerParameters_v1320_H_
#define	_PhyLayerParameters_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MIMO_UE_Parameters_r13;

/* PhyLayerParameters-v1320 */
typedef struct PhyLayerParameters_v1320 {
	struct MIMO_UE_Parameters_r13	*mimo_UE_Parameters_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1320_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-UE-Parameters-r13.h"

#endif	/* _PhyLayerParameters_v1320_H_ */
#include <asn_internal.h>
