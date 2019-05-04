/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/add_neighbors.h"
#include "cclient/serialization/proto/attach_to_tangle.h"
#include "cclient/serialization/proto/broadcast_transactions.h"
#include "cclient/serialization/proto/check_consistency.h"
#include "cclient/serialization/proto/error.h"
#include "cclient/serialization/proto/find_transactions.h"
#include "cclient/serialization/proto/get_balances.h"
#include "cclient/serialization/proto/get_inclusion_states.h"
#include "cclient/serialization/proto/get_missing_transactions.h"
#include "cclient/serialization/proto/get_neighbors.h"
#include "cclient/serialization/proto/get_node_info.h"
#include "cclient/serialization/proto/get_tips.h"
#include "cclient/serialization/proto/get_transactions_to_approve.h"
#include "cclient/serialization/proto/get_trytes.h"
#include "cclient/serialization/proto/remove_neighbors.h"
#include "cclient/serialization/proto/store_transactions.h"
#include "cclient/serialization/serializer.h"

static serializer_vtable proto_vtable = {
    .add_neighbors_serialize_request = NULL,
    .add_neighbors_serialize_response = proto_add_neighbors_serialize_response,
    .add_neighbors_deserialize_request = proto_add_neighbors_deserialize_request,
    .add_neighbors_deserialize_response = NULL,

    .attach_to_tangle_serialize_request = NULL,
    .attach_to_tangle_serialize_response = proto_attach_to_tangle_serialize_response,
    .attach_to_tangle_deserialize_request = proto_attach_to_tangle_deserialize_request,
    .attach_to_tangle_deserialize_response = NULL,

    .broadcast_transactions_serialize_request = NULL,
    .broadcast_transactions_deserialize_request = proto_broadcast_transactions_deserialize_request,

    .check_consistency_serialize_request = NULL,
    .check_consistency_serialize_response = proto_check_consistency_serialize_response,
    .check_consistency_deserialize_request = proto_check_consistency_deserialize_request,
    .check_consistency_deserialize_response = NULL,

    .error_serialize_response = proto_error_serialize_response,

    .find_transactions_serialize_request = NULL,
    .find_transactions_deserialize_request = proto_find_transactions_deserialize_request,
    .find_transactions_serialize_response = proto_find_transactions_serialize_response,
    .find_transactions_deserialize_response = NULL,

    .get_balances_serialize_request = NULL,
    .get_balances_deserialize_request = proto_get_balances_deserialize_request,
    .get_balances_serialize_response = proto_get_balances_serialize_response,
    .get_balances_deserialize_response = NULL,

    .get_inclusion_states_serialize_request = NULL,
    .get_inclusion_states_deserialize_request = proto_get_inclusion_states_deserialize_request,
    .get_inclusion_states_serialize_response = proto_get_inclusion_states_serialize_response,
    .get_inclusion_states_deserialize_response = NULL,

    .get_missing_transactions_serialize_response = proto_get_missing_transactions_serialize_response,

    .get_neighbors_serialize_request = NULL,
    .get_neighbors_serialize_response = proto_get_neighbors_serialize_response,
    .get_neighbors_deserialize_response = NULL,

    .get_node_info_serialize_request = NULL,
    .get_node_info_serialize_response = proto_get_node_info_serialize_response,
    .get_node_info_deserialize_response = NULL,

    .get_tips_serialize_request = NULL,
    .get_tips_serialize_response = proto_get_tips_serialize_response,
    .get_tips_deserialize_response = NULL,

    .get_transactions_to_approve_serialize_request = NULL,
    .get_transactions_to_approve_deserialize_request = proto_get_transactions_to_approve_deserialize_request,
    .get_transactions_to_approve_serialize_response = proto_get_transactions_to_approve_serialize_response,
    .get_transactions_to_approve_deserialize_response = NULL,

    .get_trytes_serialize_request = NULL,
    .get_trytes_deserialize_request = proto_get_trytes_deserialize_request,
    .get_trytes_serialize_response = proto_get_trytes_serialize_response,
    .get_trytes_deserialize_response = NULL,

    .remove_neighbors_serialize_request = NULL,
    .remove_neighbors_deserialize_request = proto_remove_neighbors_deserialize_request,
    .remove_neighbors_serialize_response = proto_remove_neighbors_serialize_response,
    .remove_neighbors_deserialize_response = NULL,

    .store_transactions_serialize_request = NULL,
    .store_transactions_deserialize_request = proto_store_transactions_deserialize_request,

};

void init_proto_serializer(serializer_t *serializer) { serializer->vtable = proto_vtable; }
