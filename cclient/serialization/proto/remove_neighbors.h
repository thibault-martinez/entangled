/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_REMOVE_NEIGHBORS_H
#define CCLIENT_SERIALIZATION_PROTO_REMOVE_NEIGHBORS_H

#include "cclient/request/remove_neighbors.h"
#include "cclient/response/remove_neighbors.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_remove_neighbors_deserialize_request(char const* const obj, remove_neighbors_req_t* req);

retcode_t proto_remove_neighbors_serialize_response(remove_neighbors_res_t const* const res, char_buffer_t* out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_REMOVE_NEIGHBORS_H
