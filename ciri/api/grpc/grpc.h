/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __CIRI_API_GRPC_GRPC_H__
#define __CIRI_API_GRPC_GRPC_H__

#include "cclient/serialization/serializer.h"
#include "ciri/api/api.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct iota_api_grpc_s {
  bool running;
  iota_api_t* api;
  serializer_t serializer;
  void* server;
} iota_api_grpc_t;

/**
 * Initializes a gRPC API
 *
 * @param grpc The gRPC API
 * @param api An API instance
 *
 * @return a status code
 */
retcode_t iota_api_grpc_init(iota_api_grpc_t* const grpc, iota_api_t* const api);

/**
 * Starts a gRPC API
 *
 * @param grpc The gRPC API
 *
 * @return a status code
 */
retcode_t iota_api_grpc_start(iota_api_grpc_t* const grpc);

/**
 * Stops a gRPC API
 *
 * @param grpc The gRPC API
 *
 * @return a status code
 */
retcode_t iota_api_grpc_stop(iota_api_grpc_t* const grpc);

/**
 * Destroys a gRPC API
 *
 * @param grpc The gRPC API
 *
 * @return a status code
 */
retcode_t iota_api_grpc_destroy(iota_api_grpc_t* const grpc);

#ifdef __cplusplus
}
#endif

#endif  // __CIRI_API_GRPC_GRPC_H__
