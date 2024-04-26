/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_EstablishmentCause_5GC_H_
#define	_EstablishmentCause_5GC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EstablishmentCause_5GC {
	EstablishmentCause_5GC_emergency	= 0,
	EstablishmentCause_5GC_highPriorityAccess	= 1,
	EstablishmentCause_5GC_mt_Access	= 2,
	EstablishmentCause_5GC_mo_Signalling	= 3,
	EstablishmentCause_5GC_mo_Data	= 4,
	EstablishmentCause_5GC_mo_VoiceCall	= 5,
	EstablishmentCause_5GC_spare2	= 6,
	EstablishmentCause_5GC_spare1	= 7
} e_EstablishmentCause_5GC;

/* EstablishmentCause-5GC */
typedef long	 EstablishmentCause_5GC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EstablishmentCause_5GC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EstablishmentCause_5GC;
extern const asn_INTEGER_specifics_t asn_SPC_EstablishmentCause_5GC_specs_1;
asn_struct_free_f EstablishmentCause_5GC_free;
asn_struct_print_f EstablishmentCause_5GC_print;
asn_constr_check_f EstablishmentCause_5GC_constraint;
ber_type_decoder_f EstablishmentCause_5GC_decode_ber;
der_type_encoder_f EstablishmentCause_5GC_encode_der;
xer_type_decoder_f EstablishmentCause_5GC_decode_xer;
xer_type_encoder_f EstablishmentCause_5GC_encode_xer;
oer_type_decoder_f EstablishmentCause_5GC_decode_oer;
oer_type_encoder_f EstablishmentCause_5GC_encode_oer;
per_type_decoder_f EstablishmentCause_5GC_decode_uper;
per_type_encoder_f EstablishmentCause_5GC_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EstablishmentCause_5GC_H_ */
#include <asn_internal.h>
