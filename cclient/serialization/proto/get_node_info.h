/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_PROTO_GET_NODE_INFO_H
#define CCLIENT_SERIALIZATION_PROTO_GET_NODE_INFO_H

#include "cclient/response/get_node_info.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

retcode_t proto_get_node_info_serialize_response(get_node_info_res_t const* const res, void* const output);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_PROTO_GET_NODE_INFO_H
