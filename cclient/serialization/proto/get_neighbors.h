/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_GET_NEIGHBORS_H
#define CCLIENT_SERIALIZATION_PROTO_GET_NEIGHBORS_H

#include "cclient/response/get_neighbors.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_get_neighbors_serialize_response(get_neighbors_res_t const* const res, void* const output);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_GET_NEIGHBORS_H
