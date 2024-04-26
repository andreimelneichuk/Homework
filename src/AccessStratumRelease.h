/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_AccessStratumRelease_H_
#define	_AccessStratumRelease_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessStratumRelease {
	AccessStratumRelease_rel8	= 0,
	AccessStratumRelease_rel9	= 1,
	AccessStratumRelease_rel10	= 2,
	AccessStratumRelease_rel11	= 3,
	AccessStratumRelease_rel12	= 4,
	AccessStratumRelease_rel13	= 5,
	AccessStratumRelease_rel14	= 6,
	AccessStratumRelease_rel15	= 7
	/*
	 * Enumeration is extensible
	 */
} e_AccessStratumRelease;

/* AccessStratumRelease */
typedef long	 AccessStratumRelease_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccessStratumRelease_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccessStratumRelease;
extern const asn_INTEGER_specifics_t asn_SPC_AccessStratumRelease_specs_1;
asn_struct_free_f AccessStratumRelease_free;
asn_struct_print_f AccessStratumRelease_print;
asn_constr_check_f AccessStratumRelease_constraint;
ber_type_decoder_f AccessStratumRelease_decode_ber;
der_type_encoder_f AccessStratumRelease_encode_der;
xer_type_decoder_f AccessStratumRelease_decode_xer;
xer_type_encoder_f AccessStratumRelease_encode_xer;
oer_type_decoder_f AccessStratumRelease_decode_oer;
oer_type_encoder_f AccessStratumRelease_encode_oer;
per_type_decoder_f AccessStratumRelease_decode_uper;
per_type_encoder_f AccessStratumRelease_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessStratumRelease_H_ */
#include <asn_internal.h>
