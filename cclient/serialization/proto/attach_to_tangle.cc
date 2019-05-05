/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/attach_to_tangle.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_attach_to_tangle_serialize_response(attach_to_tangle_res_t const *const res, void *const output) {
  retcode_t ret = RC_OK;
  auto response = static_cast<API::RPC::attachToTangleResponse *const>(output);

  return ret;
}

retcode_t proto_attach_to_tangle_deserialize_request(void const *const input, attach_to_tangle_req_t *const req) {
  retcode_t ret = RC_OK;
  auto request = static_cast<API::RPC::attachToTangleRequest const *const>(input);

  return ret;
}
