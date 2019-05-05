/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_inclusion_states.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_inclusion_states_deserialize_request(void const *const input,
                                                         get_inclusion_states_req_t *const req) {
  retcode_t ret = RC_OK;
  auto request = static_cast<API::RPC::getInclusionStatesRequest const *const>(input);

  return ret;
}

retcode_t proto_get_inclusion_states_serialize_response(get_inclusion_states_res_t const *const res,
                                                        void *const output) {
  retcode_t ret = RC_OK;
  auto response = static_cast<API::RPC::getInclusionStatesResponse *const>(output);

  return ret;
}
