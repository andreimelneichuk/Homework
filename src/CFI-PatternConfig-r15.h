/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_CFI_PatternConfig_r15_H_
#define	_CFI_PatternConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CFI-PatternConfig-r15 */
typedef struct CFI_PatternConfig_r15 {
	struct CFI_PatternConfig_r15__cfi_PatternSubframe_r15 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cfi_PatternSubframe_r15;
	struct CFI_PatternConfig_r15__cfi_PatternSlotSubslot_r15 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cfi_PatternSlotSubslot_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CFI_PatternConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CFI_PatternConfig_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CFI_PatternConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CFI_PatternConfig_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CFI_PatternConfig_r15_H_ */
#include <asn_internal.h>
