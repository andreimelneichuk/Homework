/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UL_CyclicPrefixLength_H_
#define	_UL_CyclicPrefixLength_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_CyclicPrefixLength {
	UL_CyclicPrefixLength_len1	= 0,
	UL_CyclicPrefixLength_len2	= 1
} e_UL_CyclicPrefixLength;

/* UL-CyclicPrefixLength */
typedef long	 UL_CyclicPrefixLength_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UL_CyclicPrefixLength_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UL_CyclicPrefixLength;
extern const asn_INTEGER_specifics_t asn_SPC_UL_CyclicPrefixLength_specs_1;
asn_struct_free_f UL_CyclicPrefixLength_free;
asn_struct_print_f UL_CyclicPrefixLength_print;
asn_constr_check_f UL_CyclicPrefixLength_constraint;
ber_type_decoder_f UL_CyclicPrefixLength_decode_ber;
der_type_encoder_f UL_CyclicPrefixLength_encode_der;
xer_type_decoder_f UL_CyclicPrefixLength_decode_xer;
xer_type_encoder_f UL_CyclicPrefixLength_encode_xer;
oer_type_decoder_f UL_CyclicPrefixLength_decode_oer;
oer_type_encoder_f UL_CyclicPrefixLength_encode_oer;
per_type_decoder_f UL_CyclicPrefixLength_decode_uper;
per_type_encoder_f UL_CyclicPrefixLength_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CyclicPrefixLength_H_ */
#include <asn_internal.h>
