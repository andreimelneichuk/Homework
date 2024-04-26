/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SystemInformationBlockType4_H_
#define	_SystemInformationBlockType4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqNeighCellList;
struct IntraFreqBlackCellList;
struct PhysCellIdRange;
struct IntraFreqNeighHSDN_CellList_r15;

/* SystemInformationBlockType4 */
typedef struct SystemInformationBlockType4 {
	struct IntraFreqNeighCellList	*intraFreqNeighCellList	/* OPTIONAL */;
	struct IntraFreqBlackCellList	*intraFreqBlackCellList	/* OPTIONAL */;
	struct PhysCellIdRange	*csg_PhysCellIdRange	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct IntraFreqNeighHSDN_CellList_r15	*intraFreqNeighHSDN_CellList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqNeighCellList.h"
#include "IntraFreqBlackCellList.h"
#include "PhysCellIdRange.h"
#include "IntraFreqNeighHSDN-CellList-r15.h"

#endif	/* _SystemInformationBlockType4_H_ */
#include <asn_internal.h>
