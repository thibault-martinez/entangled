/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/attach_to_tangle.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_attach_to_tangle_serialize_response(attach_to_tangle_res_t const *const res, void *const output) {
  auto response = static_cast<API::RPC::attachToTangleResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}

retcode_t proto_attach_to_tangle_deserialize_request(void const *const input, attach_to_tangle_req_t *const req) {
  auto request = static_cast<API::RPC::attachToTangleRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
