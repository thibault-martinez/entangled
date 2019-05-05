/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/add_neighbors.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_add_neighbors_serialize_response(add_neighbors_res_t const *const res, void *const output) {
  auto response = static_cast<API::RPC::addNeighborsResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}

retcode_t proto_add_neighbors_deserialize_request(void const *const input, add_neighbors_req_t *const req) {
  auto request = static_cast<API::RPC::addNeighborsRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
