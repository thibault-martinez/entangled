/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/remove_neighbors.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_remove_neighbors_deserialize_request(void const *const input, remove_neighbors_req_t *const req) {
  retcode_t ret = RC_OK;
  auto request = static_cast<API::RPC::removeNeighborsRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  for (auto &uri : request->uris()) {
    if ((ret = remove_neighbors_req_add(req, uri.c_str())) != RC_OK) {
      return ret;
    }
  }

  return RC_OK;
}

retcode_t proto_remove_neighbors_serialize_response(remove_neighbors_res_t const *const res, void *const output) {
  auto response = static_cast<API::RPC::removeNeighborsResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  response->set_removedneighbors(res->removed_neighbors);

  return RC_OK;
}
