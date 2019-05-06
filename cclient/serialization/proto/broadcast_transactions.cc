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
  flex_trit_t flex_trytes[NUM_FLEX_TRITS_SERIALIZED_TRANSACTION];
  auto request = static_cast<API::RPC::broadcastTransactionsRequest const* const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  for (auto& raw_trytes : request->trytes()) {
    flex_trits_from_trytes(flex_trytes, NUM_TRITS_SERIALIZED_TRANSACTION,
                           reinterpret_cast<tryte_t const*>(raw_trytes.c_str()), NUM_TRYTES_SERIALIZED_TRANSACTION,
                           NUM_TRYTES_SERIALIZED_TRANSACTION);
    if ((ret = broadcast_transactions_req_trytes_add(req, flex_trytes)) != RC_OK) {
      return ret;
    }
  }

  return RC_OK;
}
