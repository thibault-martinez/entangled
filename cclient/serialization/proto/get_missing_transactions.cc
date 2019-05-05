/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_missing_transactions.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_missing_transactions_serialize_response(get_missing_transactions_res_t const* const res,
                                                            void* const output) {
  hash243_stack_entry_t* iter = NULL;
  tryte_t missing_transaction[HASH_LENGTH_TRYTE + 1];
  auto response = static_cast<API::RPC::getMissingTransactionsResponse* const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  missing_transaction[HASH_LENGTH_TRYTE] = '\0';

  HASH_STACK_FOREACH(res->hashes, iter) {
    flex_trits_to_trytes(missing_transaction, HASH_LENGTH_TRYTE, iter->hash, HASH_LENGTH_TRIT, HASH_LENGTH_TRIT);
    response->add_hashes(reinterpret_cast<char*>(missing_transaction));
  }

  return RC_OK;
}
