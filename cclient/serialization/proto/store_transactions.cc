/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/store_transactions.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_store_transactions_deserialize_request(void const* const input, store_transactions_req_t* const req) {
  auto request = static_cast<API::RPC::storeTransactionsRequest const* const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
