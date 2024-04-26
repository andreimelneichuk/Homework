/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_MAC_Parameters_v1530_H_
#define	_MAC_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ProcessingTimelineSet-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_Parameters_v1530__earlyData_UP_r15 {
	MAC_Parameters_v1530__earlyData_UP_r15_supported	= 0
} e_MAC_Parameters_v1530__earlyData_UP_r15;
typedef enum MAC_Parameters_v1530__dormantSCellState_r15 {
	MAC_Parameters_v1530__dormantSCellState_r15_supported	= 0
} e_MAC_Parameters_v1530__dormantSCellState_r15;
typedef enum MAC_Parameters_v1530__directSCellActivation_r15 {
	MAC_Parameters_v1530__directSCellActivation_r15_supported	= 0
} e_MAC_Parameters_v1530__directSCellActivation_r15;
typedef enum MAC_Parameters_v1530__directSCellHibernation_r15 {
	MAC_Parameters_v1530__directSCellHibernation_r15_supported	= 0
} e_MAC_Parameters_v1530__directSCellHibernation_r15;
typedef enum MAC_Parameters_v1530__extendedLCID_Duplication_r15 {
	MAC_Parameters_v1530__extendedLCID_Duplication_r15_supported	= 0
} e_MAC_Parameters_v1530__extendedLCID_Duplication_r15;
typedef enum MAC_Parameters_v1530__sps_ServingCell_r15 {
	MAC_Parameters_v1530__sps_ServingCell_r15_supported	= 0
} e_MAC_Parameters_v1530__sps_ServingCell_r15;

/* Forward declarations */
struct SkipSubframeProcessing_r15;

/* MAC-Parameters-v1530 */
typedef struct MAC_Parameters_v1530 {
	struct MAC_Parameters_v1530__min_Proc_TimelineSubslot_r15 {
		A_SEQUENCE_OF(ProcessingTimelineSet_r15_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *min_Proc_TimelineSubslot_r15;
	struct SkipSubframeProcessing_r15	*skipSubframeProcessing_r15	/* OPTIONAL */;
	long	*earlyData_UP_r15	/* OPTIONAL */;
	long	*dormantSCellState_r15	/* OPTIONAL */;
	long	*directSCellActivation_r15	/* OPTIONAL */;
	long	*directSCellHibernation_r15	/* OPTIONAL */;
	long	*extendedLCID_Duplication_r15	/* OPTIONAL */;
	long	*sps_ServingCell_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_earlyData_UP_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dormantSCellState_r15_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_directSCellActivation_r15_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_directSCellHibernation_r15_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedLCID_Duplication_r15_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sps_ServingCell_r15_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_Parameters_v1530_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SkipSubframeProcessing-r15.h"

#endif	/* _MAC_Parameters_v1530_H_ */
#include <asn_internal.h>
