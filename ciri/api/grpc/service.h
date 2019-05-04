/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __CIRI_API_GRPC_SERVICE_H__
#define __CIRI_API_GRPC_SERVICE_H__

#include <grpc++/grpc++.h>

#include "ciri/api/grpc/grpc.h"
#include "ciri/api/grpc/proto/api.grpc.pb.h"
#include "ciri/api/grpc/proto/api.pb.h"

namespace API {

class Service final : public RPC::API::Service {
 public:
  Service(iota_api_grpc_t* const grpc) : _grpc(grpc) {}

  ~Service() override {}

 public:
  grpc::Status addNeighbors(grpc::ServerContext* const context, RPC::addNeighborsRequest const* const request,
                            RPC::addNeighborsResponse* const response) override;

  grpc::Status attachToTangle(grpc::ServerContext* const context, RPC::attachToTangleRequest const* const request,
                              RPC::attachToTangleResponse* const response) override;

  grpc::Status broadcastTransactions(grpc::ServerContext* const context,
                                     RPC::broadcastTransactionsRequest const* const request,
                                     RPC::broadcastTransactionsResponse* const response) override;

  grpc::Status checkConsistency(grpc::ServerContext* const context, RPC::checkConsistencyRequest const* const request,
                                RPC::checkConsistencyResponse* const response) override;

  grpc::Status findTransactions(grpc::ServerContext* const context, RPC::findTransactionsRequest const* const request,
                                RPC::findTransactionsResponse* const response) override;

  grpc::Status getBalances(grpc::ServerContext* const context, RPC::getBalancesRequest const* const request,
                           RPC::getBalancesResponse* const response) override;

  grpc::Status getInclusionStates(grpc::ServerContext* const context,
                                  RPC::getInclusionStatesRequest const* const request,
                                  RPC::getInclusionStatesResponse* const response) override;

  grpc::Status getMissingTransactions(grpc::ServerContext* const context,
                                      RPC::getMissingTransactionsRequest const* const request,
                                      RPC::getMissingTransactionsResponse* const response) override;

  grpc::Status getNeighbors(grpc::ServerContext* const context, RPC::getNeighborsRequest const* const request,
                            RPC::getNeighborsResponse* const response) override;

  grpc::Status getNodeInfo(grpc::ServerContext* const context, RPC::getNodeInfoRequest const* const request,
                           RPC::getNodeInfoResponse* const response) override;

  grpc::Status getTips(grpc::ServerContext* const context, RPC::getTipsRequest const* const request,
                       RPC::getTipsResponse* const response) override;

  grpc::Status getTransactionsToApprove(grpc::ServerContext* const context,
                                        RPC::getTransactionsToApproveRequest const* const request,
                                        RPC::getTransactionsToApproveResponse* const response) override;

  grpc::Status getTrytes(grpc::ServerContext* const context, RPC::getTrytesRequest const* const request,
                         RPC::getTrytesResponse* const response) override;

  grpc::Status interruptAttachingToTangle(grpc::ServerContext* const context,
                                          RPC::interruptAttachingToTangleRequest const* const request,
                                          RPC::interruptAttachingToTangleResponse* const response) override;

  grpc::Status removeNeighbors(grpc::ServerContext* const context, RPC::removeNeighborsRequest const* const request,
                               RPC::removeNeighborsResponse* const response) override;

  grpc::Status storeTransactions(grpc::ServerContext* const context, RPC::storeTransactionsRequest const* const request,
                                 RPC::storeTransactionsResponse* const response) override;

  grpc::Status wereAddressesSpentFrom(grpc::ServerContext* const context,
                                      RPC::wereAddressesSpentFromRequest const* const request,
                                      RPC::wereAddressesSpentFromResponse* const response) override;

 private:
  iota_api_grpc_t* _grpc;
};

}  // namespace API

#endif  // __CIRI_API_GRPC_SERVICE_H__
