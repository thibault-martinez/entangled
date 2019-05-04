/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_SERIALIZER_H
#define CCLIENT_SERIALIZATION_PROTO_SERIALIZER_H

#include "cclient/serialization/serializer.h"

#ifdef __cplusplus
extern "C" {
#endif

void init_proto_serializer(serializer_t* const serializer);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_SERIALIZER_H
