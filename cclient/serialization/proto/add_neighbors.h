/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_ADD_NEIGHBORS_H
#define CCLIENT_SERIALIZATION_PROTO_ADD_NEIGHBORS_H

#include "cclient/request/add_neighbors.h"
#include "cclient/response/add_neighbors.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_add_neighbors_serialize_response(add_neighbors_res_t const* const res, void* const output);
retcode_t proto_add_neighbors_deserialize_request(void const* const input, add_neighbors_req_t* const req);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_ADD_NEIGHBORS_H
