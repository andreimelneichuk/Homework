/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_QuantityConfigRS_NR_r15_H_
#define	_QuantityConfigRS_NR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* QuantityConfigRS-NR-r15 */
typedef struct QuantityConfigRS_NR_r15 {
	FilterCoefficient_t	*filterCoeff_RSRP_r15	/* DEFAULT 4 */;
	FilterCoefficient_t	*filterCoeff_RSRQ_r15	/* DEFAULT 4 */;
	FilterCoefficient_t	*filterCoefficient_SINR_r13	/* DEFAULT 4 */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigRS_NR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigRS_NR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigRS_NR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigRS_NR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigRS_NR_r15_H_ */
#include <asn_internal.h>
