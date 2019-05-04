/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_BROADCAST_TRANSACTIONS_H
#define CCLIENT_SERIALIZATION_PROTO_BROADCAST_TRANSACTIONS_H

#include "cclient/request/broadcast_transactions.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_broadcast_transactions_serialize_request(broadcast_transactions_req_t const *const req,
                                                         char_buffer_t *out);
retcode_t proto_broadcast_transactions_deserialize_request(char const *const obj,
                                                           broadcast_transactions_req_t *const out);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_BROADCAST_TRANSACTIONS_H
