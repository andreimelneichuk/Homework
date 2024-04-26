/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_PhyLayerParameters_v1540_H_
#define	_PhyLayerParameters_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540__slotPDSCH_TxDiv_TM8_r15 {
	PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540__slotPDSCH_TxDiv_TM8_r15_supported	= 0
} e_PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540__slotPDSCH_TxDiv_TM8_r15;
typedef enum PhyLayerParameters_v1540__crs_IM_TM1_toTM9_OneRX_Port_v1540 {
	PhyLayerParameters_v1540__crs_IM_TM1_toTM9_OneRX_Port_v1540_supported	= 0
} e_PhyLayerParameters_v1540__crs_IM_TM1_toTM9_OneRX_Port_v1540;
typedef enum PhyLayerParameters_v1540__cch_IM_RefRecTypeA_OneRX_Port_v1540 {
	PhyLayerParameters_v1540__cch_IM_RefRecTypeA_OneRX_Port_v1540_supported	= 0
} e_PhyLayerParameters_v1540__cch_IM_RefRecTypeA_OneRX_Port_v1540;

/* PhyLayerParameters-v1540 */
typedef struct PhyLayerParameters_v1540 {
	struct PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540 {
		long	 slotPDSCH_TxDiv_TM8_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *stti_SPT_Capabilities_v1540;
	long	*crs_IM_TM1_toTM9_OneRX_Port_v1540	/* OPTIONAL */;
	long	*cch_IM_RefRecTypeA_OneRX_Port_v1540	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_slotPDSCH_TxDiv_TM8_r15_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IM_TM1_toTM9_OneRX_Port_v1540_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cch_IM_RefRecTypeA_OneRX_Port_v1540_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1540_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1540_H_ */
#include <asn_internal.h>
