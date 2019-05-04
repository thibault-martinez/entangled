/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_GET_TRANSACTIONS_TO_APPROVE_H
#define CCLIENT_SERIALIZATION_PROTO_GET_TRANSACTIONS_TO_APPROVE_H

#include "cclient/request/get_transactions_to_approve.h"
#include "cclient/response/get_transactions_to_approve.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_get_transactions_to_approve_deserialize_request(char const* const obj,
                                                                get_transactions_to_approve_req_t* out);
retcode_t proto_get_transactions_to_approve_serialize_response(get_transactions_to_approve_res_t const* const obj,
                                                               char_buffer_t* out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_GET_TRANSACTIONS_TO_APPROVE_H
