/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_JSON_GET_TRYTES_H
#define CCLIENT_SERIALIZATION_JSON_GET_TRYTES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "common/errors.h"

#include "cclient/request/get_trytes.h"
#include "cclient/response/get_trytes.h"
#include "cclient/serialization/serializer.h"

retcode_t json_get_trytes_serialize_request(get_trytes_req_t const* const req, void* const output);
retcode_t json_get_trytes_deserialize_request(void const* const input, get_trytes_req_t* const req);
retcode_t json_get_trytes_serialize_response(get_trytes_res_t const* const res, void* const output);
retcode_t json_get_trytes_deserialize_response(void const* const input, get_trytes_res_t* const res);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_JSON_GET_TRYTES_H
