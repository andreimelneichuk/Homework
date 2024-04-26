/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_DeltaTxD_OffsetListPUCCH_r10_H_
#define	_DeltaTxD_OffsetListPUCCH_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10 {
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10_dB0	= 0,
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10_dB_2	= 1
} e_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10;
typedef enum DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10 {
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10_dB0	= 0,
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10_dB_2	= 1
} e_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10;
typedef enum DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10 {
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10_dB0	= 0,
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10_dB_2	= 1
} e_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10;
typedef enum DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10 {
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10_dB0	= 0,
	DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10_dB_2	= 1
} e_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10;

/* DeltaTxD-OffsetListPUCCH-r10 */
typedef struct DeltaTxD_OffsetListPUCCH_r10 {
	long	 deltaTxD_OffsetPUCCH_Format1_r10;
	long	 deltaTxD_OffsetPUCCH_Format1a1b_r10;
	long	 deltaTxD_OffsetPUCCH_Format22a2b_r10;
	long	 deltaTxD_OffsetPUCCH_Format3_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaTxD_OffsetListPUCCH_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DeltaTxD_OffsetListPUCCH_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_DeltaTxD_OffsetListPUCCH_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_DeltaTxD_OffsetListPUCCH_r10_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaTxD_OffsetListPUCCH_r10_H_ */
#include <asn_internal.h>
