/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_PLMN_Info_r15_H_
#define	_PLMN_Info_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_Info_r15__upperLayerIndication_r15 {
	PLMN_Info_r15__upperLayerIndication_r15_true	= 0
} e_PLMN_Info_r15__upperLayerIndication_r15;

/* PLMN-Info-r15 */
typedef struct PLMN_Info_r15 {
	long	*upperLayerIndication_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_Info_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_upperLayerIndication_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_Info_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_Info_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_Info_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_Info_r15_H_ */
#include <asn_internal.h>
