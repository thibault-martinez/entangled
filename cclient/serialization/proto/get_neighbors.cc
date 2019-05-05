/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_neighbors.h"
#include "ciri/api/grpc/proto/messages.pb.h"

// #include <iostream>

retcode_t proto_get_neighbors_serialize_response(get_neighbors_res_t const *const res, void *const output) {
  // neighbor_info_t *iter = NULL;
  auto response = static_cast<API::RPC::getNeighborsResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  // while ((iter = (neighbor_info_t *)utarray_next(res, iter))) {
  //   auto neighbor = response->add_neighbors();
  //   neighbor->set_address(iter->address->data);
  //   neighbor->set_numberofalltransactions(iter->all_trans_num);
  //   neighbor->set_numberofrandomtransactionrequests(iter->random_trans_req_num);
  //   neighbor->set_numberofnewtransactions(iter->new_trans_num);
  //   neighbor->set_numberofinvalidtransactions(iter->invalid_trans_num);
  //   neighbor->set_numberofstaletransactions(iter->stale_trans_num);
  //   neighbor->set_numberofsenttransactions(iter->sent_trans_num);
  //   neighbor->set_connectiontype(iter->connection_type->data);
  // }

  return RC_OK;
}
