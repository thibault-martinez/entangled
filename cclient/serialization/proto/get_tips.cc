/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_tips.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_tips_serialize_response(get_tips_res_t const* const res, void* const output) {
  retcode_t ret = RC_OK;
  auto response = static_cast<API::RPC::getTipsResponse* const>(output);

  return ret;
}
