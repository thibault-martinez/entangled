/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_GET_BALANCES_H
#define CCLIENT_SERIALIZATION_PROTO_GET_BALANCES_H

#include "cclient/request/get_balances.h"
#include "cclient/response/get_balances.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_get_balances_deserialize_request(char const* const obj, get_balances_req_t* const req);
retcode_t proto_get_balances_serialize_response(const get_balances_res_t* const res, char_buffer_t* out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_GET_BALANCES_H
