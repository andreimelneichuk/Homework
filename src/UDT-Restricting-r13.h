/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UDT_Restricting_r13_H_
#define	_UDT_Restricting_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UDT_Restricting_r13__udt_Restricting_r13 {
	UDT_Restricting_r13__udt_Restricting_r13_true	= 0
} e_UDT_Restricting_r13__udt_Restricting_r13;
typedef enum UDT_Restricting_r13__udt_RestrictingTime_r13 {
	UDT_Restricting_r13__udt_RestrictingTime_r13_s4	= 0,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s8	= 1,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s16	= 2,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s32	= 3,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s64	= 4,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s128	= 5,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s256	= 6,
	UDT_Restricting_r13__udt_RestrictingTime_r13_s512	= 7
} e_UDT_Restricting_r13__udt_RestrictingTime_r13;

/* UDT-Restricting-r13 */
typedef struct UDT_Restricting_r13 {
	long	*udt_Restricting_r13	/* OPTIONAL */;
	long	*udt_RestrictingTime_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UDT_Restricting_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_udt_Restricting_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_udt_RestrictingTime_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UDT_Restricting_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_UDT_Restricting_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_UDT_Restricting_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UDT_Restricting_r13_H_ */
#include <asn_internal.h>
