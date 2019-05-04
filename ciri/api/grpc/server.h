/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __CIRI_API_GRPC_SERVER_H__
#define __CIRI_API_GRPC_SERVER_H__

#include <thread>

#include "ciri/api/grpc/service.h"

namespace API {

class Server {
 public:
  Server(iota_api_grpc_t* const grpc) : _service(grpc) {
    // TODO conf port
    std::string server_address("0.0.0.0:50051");
    grpc::ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&_service);
    _server = std::unique_ptr<grpc::Server>(builder.BuildAndStart());
  }

  ~Server() {}

 public:
  void start() {
    _thread = std::thread([&]() { _server->Wait(); });
  }

  void stop() {
    _server->Shutdown();
    _thread.join();
  }

 private:
  std::unique_ptr<grpc::Server> _server;
  Service _service;
  std::thread _thread;
};

}  // namespace API

#endif  // __CIRI_API_GRPC_SERVER_H__
