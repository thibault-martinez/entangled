/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_trytes.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_trytes_deserialize_request(void const *const input, get_trytes_req_t *const req) {
  retcode_t ret = RC_OK;
  flex_trit_t flex_trytes[HASH_LENGTH_FLEX_TRIT];
  auto request = static_cast<API::RPC::getTrytesRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  for (auto &hash : request->hashes()) {
    flex_trits_from_trytes(flex_trytes, HASH_LENGTH_TRIT, reinterpret_cast<tryte_t const *>(hash.c_str()),
                           HASH_LENGTH_TRYTE, HASH_LENGTH_TRYTE);
    if ((ret = get_trytes_req_hash_add(req, flex_trytes)) != RC_OK) {
      return ret;
    }
  }

  return RC_OK;
}

retcode_t proto_get_trytes_serialize_response(get_trytes_res_t const *const res, void *const output) {
  auto response = static_cast<API::RPC::getTrytesResponse const *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
