/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UplinkPUSCH_LessPowerControlDedicated_v1430_H_
#define	_UplinkPUSCH_LessPowerControlDedicated_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPUSCH-LessPowerControlDedicated-v1430 */
typedef struct UplinkPUSCH_LessPowerControlDedicated_v1430 {
	long	*p0_UE_PeriodicSRS_r14	/* OPTIONAL */;
	long	*p0_UE_AperiodicSRS_r14	/* OPTIONAL */;
	BOOLEAN_t	 accumulationEnabled_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPUSCH_LessPowerControlDedicated_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPUSCH_LessPowerControlDedicated_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPUSCH_LessPowerControlDedicated_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPUSCH_LessPowerControlDedicated_v1430_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPUSCH_LessPowerControlDedicated_v1430_H_ */
#include <asn_internal.h>
