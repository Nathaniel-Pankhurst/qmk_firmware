#ifndef SEBRIGHT_MK2_H
#define SEBRIGHT_MK2_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B,  \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19,      K1B,  \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,  \
         K31,      K33, K34,      K36,      K38, K39, K3A         \
) \
{ \
    { K00,  K01,  K02,  K03, K04, K05,  K06, K07,  K08, K09, K0A,  K0B }, \
    { K10,  K11,  K12,  K13, K14, K15,  K16, K17,  K18, K19, KC_NO,K1B }, \
    { K20,  KC_NO,K22,  K23, K24, K25,  K26, K27,  K28, K29, K2A,  K2B }, \
    { KC_NO,K31,  KC_NO,K33, K34, KC_NO,K36, KC_NO,K38, K39, K3A,  KC_NO    } \
}

#endif
