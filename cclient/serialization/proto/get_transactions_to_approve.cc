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
  retcode_t ret = RC_OK;
  auto request = static_cast<API::RPC::getTransactionsToApproveRequest const *const>(input);

  return ret;
}

retcode_t proto_get_transactions_to_approve_serialize_response(get_transactions_to_approve_res_t const *const res,
                                                               void *const output) {
  retcode_t ret = RC_OK;
  auto response = static_cast<API::RPC::getTransactionsToApproveResponse *const>(output);

  return ret;
}
