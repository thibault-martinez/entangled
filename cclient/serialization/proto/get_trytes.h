/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_GET_TRYTES_H
#define CCLIENT_SERIALIZATION_PROTO_GET_TRYTES_H

#include "cclient/request/get_trytes.h"
#include "cclient/response/get_trytes.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_get_trytes_deserialize_request(char const* const obj, get_trytes_req_t* const req);
retcode_t proto_get_trytes_serialize_response(get_trytes_res_t const* const res, char_buffer_t* out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_GET_TRYTES_H
