/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

/**
 * @ingroup serialization
 *
 * @{
 *
 * @file
 * @brief
 *
 */
#ifndef CCLIENT_SERIALIZATION_SERIALIZER_H
#define CCLIENT_SERIALIZATION_SERIALIZER_H

#include <stdlib.h>

#include "cclient/request/requests.h"
#include "cclient/response/responses.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief serializer type
 *
 */
typedef enum serializer_type_e {
  SR_JSON = 0,      /**< USE JSON serializer */
  SR_PROTO = 1,     /**< USE Protocol Buffers serializer */
  SR_UNIMPLEMENTED, /**< Unimplemented */
} serializer_type_t;

typedef struct serializer_base serializer_t;

typedef struct {
  retcode_t (*add_neighbors_serialize_request)(add_neighbors_req_t const* const req, char_buffer_t* const output);
  retcode_t (*add_neighbors_serialize_response)(add_neighbors_res_t const* const res, char_buffer_t* const output);
  retcode_t (*add_neighbors_deserialize_request)(char const* const input, add_neighbors_req_t* const req);
  retcode_t (*add_neighbors_deserialize_response)(char const* const input, add_neighbors_res_t* const res);

  retcode_t (*attach_to_tangle_serialize_request)(attach_to_tangle_req_t const* const req, char_buffer_t* const output);
  retcode_t (*attach_to_tangle_serialize_response)(attach_to_tangle_res_t const* const res,
                                                   char_buffer_t* const output);
  retcode_t (*attach_to_tangle_deserialize_request)(char const* const input, attach_to_tangle_req_t* const req);
  retcode_t (*attach_to_tangle_deserialize_response)(char const* const input, attach_to_tangle_res_t* const res);

  retcode_t (*broadcast_transactions_serialize_request)(broadcast_transactions_req_t const* const req,
                                                        char_buffer_t* const output);
  retcode_t (*broadcast_transactions_deserialize_request)(char const* const input,
                                                          broadcast_transactions_req_t* const out);

  retcode_t (*check_consistency_serialize_request)(check_consistency_req_t const* const req,
                                                   char_buffer_t* const output);
  retcode_t (*check_consistency_serialize_response)(check_consistency_res_t const* const res,
                                                    char_buffer_t* const output);
  retcode_t (*check_consistency_deserialize_request)(char const* const input, check_consistency_req_t* const req);
  retcode_t (*check_consistency_deserialize_response)(char const* const input, check_consistency_res_t* const res);

  retcode_t (*error_serialize_response)(error_res_t const* const res, char_buffer_t* const output);

  retcode_t (*find_transactions_serialize_request)(find_transactions_req_t const* const req,
                                                   char_buffer_t* const output);
  retcode_t (*find_transactions_deserialize_request)(char const* const input, find_transactions_req_t* const req);
  retcode_t (*find_transactions_serialize_response)(find_transactions_res_t const* const res,
                                                    char_buffer_t* const output);
  retcode_t (*find_transactions_deserialize_response)(char const* const input, find_transactions_res_t* const res);

  retcode_t (*get_balances_serialize_request)(get_balances_req_t const* const req, char_buffer_t* const output);
  retcode_t (*get_balances_deserialize_request)(char const* const input, get_balances_req_t* const out);
  retcode_t (*get_balances_serialize_response)(get_balances_res_t const* const res, char_buffer_t* const output);
  retcode_t (*get_balances_deserialize_response)(char const* const input, get_balances_res_t* const out);

  retcode_t (*get_inclusion_states_serialize_request)(get_inclusion_states_req_t const* const req,
                                                      char_buffer_t* const output);
  retcode_t (*get_inclusion_states_deserialize_request)(char const* const input, get_inclusion_states_req_t* const out);
  retcode_t (*get_inclusion_states_serialize_response)(get_inclusion_states_res_t const* const res,
                                                       char_buffer_t* const output);
  retcode_t (*get_inclusion_states_deserialize_response)(char const* const input,
                                                         get_inclusion_states_res_t* const out);

  retcode_t (*get_missing_transactions_serialize_response)(get_missing_transactions_res_t const* const res,
                                                           char_buffer_t* const output);

  retcode_t (*get_neighbors_serialize_request)(char_buffer_t* const output);
  retcode_t (*get_neighbors_serialize_response)(get_neighbors_res_t const* const res, char_buffer_t* const output);
  retcode_t (*get_neighbors_deserialize_response)(char const* const input, get_neighbors_res_t* const res);

  retcode_t (*get_node_info_serialize_request)(char_buffer_t* const output);
  retcode_t (*get_node_info_deserialize_response)(char const* const input, get_node_info_res_t* const res);
  retcode_t (*get_node_info_serialize_response)(get_node_info_res_t const* const res, char_buffer_t* const output);

  retcode_t (*get_tips_serialize_request)(char_buffer_t* const output);
  retcode_t (*get_tips_serialize_response)(get_tips_res_t const* const res, char_buffer_t* const output);
  retcode_t (*get_tips_deserialize_response)(char const* const input, get_tips_res_t* const res);

  retcode_t (*get_transactions_to_approve_serialize_request)(get_transactions_to_approve_req_t const* const req,
                                                             char_buffer_t* const output);
  retcode_t (*get_transactions_to_approve_deserialize_request)(char const* const input,
                                                               get_transactions_to_approve_req_t* const req);
  retcode_t (*get_transactions_to_approve_serialize_response)(get_transactions_to_approve_res_t const* const res,
                                                              char_buffer_t* const output);
  retcode_t (*get_transactions_to_approve_deserialize_response)(char const* const input,
                                                                get_transactions_to_approve_res_t* const res);

  retcode_t (*get_trytes_serialize_request)(get_trytes_req_t const* const req, char_buffer_t* const output);
  retcode_t (*get_trytes_deserialize_request)(char const* const input, get_trytes_req_t* const req);
  retcode_t (*get_trytes_serialize_response)(get_trytes_res_t const* const res, char_buffer_t* const output);
  retcode_t (*get_trytes_deserialize_response)(char const* const input, get_trytes_res_t* const res);

  retcode_t (*remove_neighbors_serialize_request)(remove_neighbors_req_t const* const req, char_buffer_t* const output);
  retcode_t (*remove_neighbors_deserialize_request)(char const* const input, remove_neighbors_req_t* const req);
  retcode_t (*remove_neighbors_serialize_response)(remove_neighbors_res_t const* const res,
                                                   char_buffer_t* const output);
  retcode_t (*remove_neighbors_deserialize_response)(char const* const input, remove_neighbors_res_t* const res);

  retcode_t (*store_transactions_serialize_request)(store_transactions_req_t const* const req,
                                                    char_buffer_t* const output);
  retcode_t (*store_transactions_deserialize_request)(char const* const input, store_transactions_req_t* const out);

} serializer_vtable;

typedef struct serializer_base {
  serializer_vtable vtable;
} serializer_base;

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_SERIALIZER_H

/** @} */
