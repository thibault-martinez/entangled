/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/check_consistency.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_check_consistency_serialize_response(check_consistency_res_t const *const res, void *const output) {
  retcode_t ret = RC_OK;
  auto response = static_cast<API::RPC::checkConsistencyResponse *const>(output);

  return ret;
}

retcode_t proto_check_consistency_deserialize_request(void const *const input, check_consistency_req_t *const req) {
  retcode_t ret = RC_OK;
  auto request = static_cast<API::RPC::checkConsistencyRequest const *const>(input);

  return ret;
}
