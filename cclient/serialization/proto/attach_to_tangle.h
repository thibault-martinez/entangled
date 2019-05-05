/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_ATTACH_TO_TANGLE_H
#define CCLIENT_SERIALIZATION_PROTO_ATTACH_TO_TANGLE_H

#include "cclient/request/attach_to_tangle.h"
#include "cclient/response/attach_to_tangle.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_attach_to_tangle_deserialize_request(void const *const input, attach_to_tangle_req_t *const req);
retcode_t proto_attach_to_tangle_serialize_response(attach_to_tangle_res_t const *const res, void *const output);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_ATTACH_TO_TANGLE_H
