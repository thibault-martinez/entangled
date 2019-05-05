/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/check_consistency.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_check_consistency_serialize_response(check_consistency_res_t const *const res, void *const output) {
  auto response = static_cast<API::RPC::checkConsistencyResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}

retcode_t proto_check_consistency_deserialize_request(void const *const input, check_consistency_req_t *const req) {
  auto request = static_cast<API::RPC::checkConsistencyRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
