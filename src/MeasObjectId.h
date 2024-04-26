/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_MeasObjectId_H_
#define	_MeasObjectId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasObjectId */
typedef long	 MeasObjectId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MeasObjectId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectId;
asn_struct_free_f MeasObjectId_free;
asn_struct_print_f MeasObjectId_print;
asn_constr_check_f MeasObjectId_constraint;
ber_type_decoder_f MeasObjectId_decode_ber;
der_type_encoder_f MeasObjectId_encode_der;
xer_type_decoder_f MeasObjectId_decode_xer;
xer_type_encoder_f MeasObjectId_encode_xer;
oer_type_decoder_f MeasObjectId_decode_oer;
oer_type_encoder_f MeasObjectId_encode_oer;
per_type_decoder_f MeasObjectId_decode_uper;
per_type_encoder_f MeasObjectId_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectId_H_ */
#include <asn_internal.h>
