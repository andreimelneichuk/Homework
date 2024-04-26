/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_WLAN_BandIndicator_r13_H_
#define	_WLAN_BandIndicator_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_BandIndicator_r13 {
	WLAN_BandIndicator_r13_band2dot4	= 0,
	WLAN_BandIndicator_r13_band5	= 1,
	WLAN_BandIndicator_r13_band60_v1430	= 2,
	WLAN_BandIndicator_r13_spare5	= 3,
	WLAN_BandIndicator_r13_spare4	= 4,
	WLAN_BandIndicator_r13_spare3	= 5,
	WLAN_BandIndicator_r13_spare2	= 6,
	WLAN_BandIndicator_r13_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_WLAN_BandIndicator_r13;

/* WLAN-BandIndicator-r13 */
typedef long	 WLAN_BandIndicator_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_WLAN_BandIndicator_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_WLAN_BandIndicator_r13;
extern const asn_INTEGER_specifics_t asn_SPC_WLAN_BandIndicator_r13_specs_1;
asn_struct_free_f WLAN_BandIndicator_r13_free;
asn_struct_print_f WLAN_BandIndicator_r13_print;
asn_constr_check_f WLAN_BandIndicator_r13_constraint;
ber_type_decoder_f WLAN_BandIndicator_r13_decode_ber;
der_type_encoder_f WLAN_BandIndicator_r13_encode_der;
xer_type_decoder_f WLAN_BandIndicator_r13_decode_xer;
xer_type_encoder_f WLAN_BandIndicator_r13_encode_xer;
oer_type_decoder_f WLAN_BandIndicator_r13_decode_oer;
oer_type_encoder_f WLAN_BandIndicator_r13_encode_oer;
per_type_decoder_f WLAN_BandIndicator_r13_decode_uper;
per_type_encoder_f WLAN_BandIndicator_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_BandIndicator_r13_H_ */
#include <asn_internal.h>
