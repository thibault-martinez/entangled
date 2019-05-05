/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/error.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_error_serialize_response(error_res_t const* const res, void* const output) {
  // auto response = static_cast<API::RPC::errorResponse* const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
