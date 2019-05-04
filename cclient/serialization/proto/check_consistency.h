/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_CHECK_CONSISTENCY_H
#define CCLIENT_SERIALIZATION_PROTO_CHECK_CONSISTENCY_H

#include "cclient/request/check_consistency.h"
#include "cclient/response/check_consistency.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_check_consistency_serialize_response(check_consistency_res_t const *const obj, char_buffer_t *out);
retcode_t proto_check_consistency_deserialize_request(char const *const obj, check_consistency_req_t *out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_CHECK_CONSISTENCY_H
