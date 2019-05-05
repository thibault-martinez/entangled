/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_node_info.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_node_info_serialize_response(get_node_info_res_t const* const res, void* const output) {
  auto response = static_cast<API::RPC::getNodeInfoResponse* const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  return RC_OK;
}
