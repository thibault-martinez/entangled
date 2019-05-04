/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_FIND_TRANSACTIONS_H
#define CCLIENT_SERIALIZATION_PROTO_FIND_TRANSACTIONS_H

#include "cclient/request/find_transactions.h"
#include "cclient/response/find_transactions.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_find_transactions_deserialize_request(void const* const input, find_transactions_req_t* const req);
retcode_t proto_find_transactions_serialize_response(find_transactions_res_t const* const res, void* const output);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_FIND_TRANSACTIONS_H
