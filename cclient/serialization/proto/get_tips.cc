/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_tips.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_tips_serialize_response(get_tips_res_t const* const res, void* const output) {
  hash243_stack_entry_t* iter = NULL;
  tryte_t tip[HASH_LENGTH_TRYTE + 1];
  auto response = static_cast<API::RPC::getTipsResponse* const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  tip[HASH_LENGTH_TRYTE] = '\0';

  HASH_STACK_FOREACH(res->hashes, iter) {
    flex_trits_to_trytes(tip, HASH_LENGTH_TRYTE, iter->hash, HASH_LENGTH_TRIT, HASH_LENGTH_TRIT);
    response->add_hashes(reinterpret_cast<char*>(tip));
  }

  return RC_OK;
}
