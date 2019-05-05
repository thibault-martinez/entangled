/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/broadcast_transactions.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_broadcast_transactions_deserialize_request(void const* const input,
                                                           broadcast_transactions_req_t* const req) {
  retcode_t ret = RC_OK;
  auto request = static_cast<API::RPC::broadcastTransactionsRequest const* const>(input);

  return ret;
}
