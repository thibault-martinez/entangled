/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/check_consistency.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_check_consistency_deserialize_request(void const *const input, check_consistency_req_t *const req) {
  retcode_t ret = RC_OK;
  flex_trit_t flex_trytes[HASH_LENGTH_FLEX_TRIT];
  auto request = static_cast<API::RPC::checkConsistencyRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  for (auto &tail : request->tails()) {
    flex_trits_from_trytes(flex_trytes, HASH_LENGTH_TRIT, reinterpret_cast<tryte_t const *>(tail.c_str()),
                           HASH_LENGTH_TRYTE, HASH_LENGTH_TRYTE);
    if ((ret = check_consistency_req_tails_add(req, flex_trytes)) != RC_OK) {
      return ret;
    }
  }

  return RC_OK;
}

retcode_t proto_check_consistency_serialize_response(check_consistency_res_t const *const res, void *const output) {
  auto response = static_cast<API::RPC::checkConsistencyResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  response->set_state(res->state);
  response->set_info(res->info->data);

  return RC_OK;
}
