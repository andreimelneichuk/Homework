/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_SC_MTCH_SchedulingInfo_BR_r14_H_
#define	_SC_MTCH_SchedulingInfo_BR_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14 {
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf300	= 0,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf400	= 1,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf500	= 2,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf600	= 3,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf800	= 4,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf1000	= 5,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf1200	= 6,
	SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14_psf1600	= 7
} e_SC_MTCH_SchedulingInfo_BR_r14__onDurationTimerSCPTM_r14;
typedef enum SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14 {
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf0	= 0,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf1	= 1,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf2	= 2,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf4	= 3,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf8	= 4,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf16	= 5,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf32	= 6,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf64	= 7,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf128	= 8,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf256	= 9,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_ps512	= 10,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf1024	= 11,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf2048	= 12,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf4096	= 13,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf8192	= 14,
	SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14_psf16384	= 15
} e_SC_MTCH_SchedulingInfo_BR_r14__drx_InactivityTimerSCPTM_r14;
typedef enum SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR {
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_NOTHING,	/* No components present */
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf10,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf20,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf32,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf40,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf64,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf80,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf128,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf160,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf256,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf320,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf512,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf640,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf1024,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf2048,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf4096,
	SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf8192
} SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR;

/* SC-MTCH-SchedulingInfo-BR-r14 */
typedef struct SC_MTCH_SchedulingInfo_BR_r14 {
	long	 onDurationTimerSCPTM_r14;
	long	 drx_InactivityTimerSCPTM_r14;
	struct SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14 {
		SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_PR present;
		union SC_MTCH_SchedulingInfo_BR_r14__schedulingPeriodStartOffsetSCPTM_r14_u {
			long	 sf10;
			long	 sf20;
			long	 sf32;
			long	 sf40;
			long	 sf64;
			long	 sf80;
			long	 sf128;
			long	 sf160;
			long	 sf256;
			long	 sf320;
			long	 sf512;
			long	 sf640;
			long	 sf1024;
			long	 sf2048;
			long	 sf4096;
			long	 sf8192;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingPeriodStartOffsetSCPTM_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SC_MTCH_SchedulingInfo_BR_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_onDurationTimerSCPTM_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimerSCPTM_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SC_MTCH_SchedulingInfo_BR_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SC_MTCH_SchedulingInfo_BR_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SC_MTCH_SchedulingInfo_BR_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SC_MTCH_SchedulingInfo_BR_r14_H_ */
#include <asn_internal.h>
