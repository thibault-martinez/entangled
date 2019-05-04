/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_ERROR_H
#define CCLIENT_SERIALIZATION_PROTO_ERROR_H

#include "cclient/response/error.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_error_serialize_response(error_res_t const *const obj, char_buffer_t *out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_ERROR_H
