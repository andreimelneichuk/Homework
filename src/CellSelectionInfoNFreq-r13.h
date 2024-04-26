/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_CellSelectionInfoNFreq_r13_H_
#define	_CellSelectionInfoNFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-RxLevMin.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "T-Reselection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellSelectionInfoNFreq_r13__q_Hyst_r13 {
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB0	= 0,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB1	= 1,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB2	= 2,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB3	= 3,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB4	= 4,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB5	= 5,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB6	= 6,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB8	= 7,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB10	= 8,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB12	= 9,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB14	= 10,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB16	= 11,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB18	= 12,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB20	= 13,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB22	= 14,
	CellSelectionInfoNFreq_r13__q_Hyst_r13_dB24	= 15
} e_CellSelectionInfoNFreq_r13__q_Hyst_r13;

/* CellSelectionInfoNFreq-r13 */
typedef struct CellSelectionInfoNFreq_r13 {
	Q_RxLevMin_t	 q_RxLevMin_r13;
	long	*q_RxLevMinOffset	/* OPTIONAL */;
	long	 q_Hyst_r13;
	Q_RxLevMin_t	 q_RxLevMinReselection_r13;
	T_Reselection_t	 t_ReselectionEUTRA_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfoNFreq_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_q_Hyst_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfoNFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfoNFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CellSelectionInfoNFreq_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfoNFreq_r13_H_ */
#include <asn_internal.h>
