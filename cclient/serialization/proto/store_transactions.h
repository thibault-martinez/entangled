/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_STORE_TRANSACTIONS_H
#define CCLIENT_SERIALIZATION_PROTO_STORE_TRANSACTIONS_H

#include "cclient/request/store_transactions.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_store_transactions_deserialize_request(void const* const input, store_transactions_req_t* const req);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_STORE_TRANSACTIONS_H
