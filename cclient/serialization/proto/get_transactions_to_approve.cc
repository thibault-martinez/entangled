/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_transactions_to_approve.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_transactions_to_approve_deserialize_request(void const *const input,
                                                                get_transactions_to_approve_req_t *const req) {
  auto request = static_cast<API::RPC::getTransactionsToApproveRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}

retcode_t proto_get_transactions_to_approve_serialize_response(get_transactions_to_approve_res_t const *const res,
                                                               void *const output) {
  auto response = static_cast<API::RPC::getTransactionsToApproveResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
