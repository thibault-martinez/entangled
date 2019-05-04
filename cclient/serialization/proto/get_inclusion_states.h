/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_GET_INCLUSION_STATES_H
#define CCLIENT_SERIALIZATION_PROTO_GET_INCLUSION_STATES_H

#include "cclient/request/get_inclusion_states.h"
#include "cclient/response/get_inclusion_states.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_get_inclusion_states_deserialize_request(char const* const obj, get_inclusion_states_req_t* const req);
retcode_t proto_get_inclusion_states_serialize_response(get_inclusion_states_res_t const* const res,
                                                        char_buffer_t* out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_GET_INCLUSION_STATES_H
