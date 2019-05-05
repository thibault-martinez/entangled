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
  auto request = static_cast<API::RPC::getTrytesRequest const *const>(input);

  return ret;
}

retcode_t proto_get_trytes_serialize_response(get_trytes_res_t const *const res, void *const output) {
  retcode_t ret = RC_OK;
  auto response = static_cast<API::RPC::getTrytesResponse const *const>(output);

  return ret;
}
