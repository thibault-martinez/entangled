/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/serialization/proto/get_transactions_to_approve.h"
#include "ciri/api/grpc/proto/messages.pb.h"

retcode_t proto_get_transactions_to_approve_deserialize_request(void const *const input,
                                                                get_transactions_to_approve_req_t *const req) {
  auto request = static_cast<API::RPC::getTransactionsToApproveRequest const *const>(input);

  if (input == NULL || req == NULL) {
    return RC_NULL_PARAM;
  }

  get_transactions_to_approve_req_set_depth(req, request->depth());
  if (!request->reference().empty()) {
    flex_trit_t reference[FLEX_TRIT_SIZE_243];

    flex_trits_from_trytes(reference, HASH_LENGTH_TRIT, reinterpret_cast<tryte_t const *>(request->reference().c_str()),
                           HASH_LENGTH_TRYTE, HASH_LENGTH_TRYTE);
    get_transactions_to_approve_req_set_reference(req, reference);
  }

  return RC_OK;
}

retcode_t proto_get_transactions_to_approve_serialize_response(get_transactions_to_approve_res_t const *const res,
                                                               void *const output) {
  tryte_t trunk[HASH_LENGTH_TRYTE + 1];
  tryte_t branch[HASH_LENGTH_TRYTE + 1];
  auto response = static_cast<API::RPC::getTransactionsToApproveResponse *const>(output);

  if (res == NULL || output == NULL) {
    return RC_NULL_PARAM;
  }

  trunk[HASH_LENGTH_TRYTE] = '\0';
  flex_trits_to_trytes(trunk, HASH_LENGTH_TRYTE, get_transactions_to_approve_res_trunk(res), HASH_LENGTH_TRIT,
                       HASH_LENGTH_TRIT);
  response->set_trunktransaction(reinterpret_cast<char *>(trunk));

  branch[HASH_LENGTH_TRYTE] = '\0';
  flex_trits_to_trytes(branch, HASH_LENGTH_TRYTE, get_transactions_to_approve_res_branch(res), HASH_LENGTH_TRIT,
                       HASH_LENGTH_TRIT);
  response->set_branchtransaction(reinterpret_cast<char *>(branch));

  return RC_OK;
}
