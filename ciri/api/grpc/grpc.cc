/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "ciri/api/grpc/grpc.h"
#include "cclient/serialization/proto/proto_serializer.h"
#include "ciri/api/grpc/server.h"
#include "utils/logger_helper.h"

#define GRPC_API_LOGGER_ID "grpc_api"

static logger_id_t logger_id;

retcode_t iota_api_grpc_init(iota_api_grpc_t* const grpc, iota_api_t* const api) {
  if (grpc == NULL || api == NULL) {
    return RC_NULL_PARAM;
  }

  logger_id = logger_helper_enable(GRPC_API_LOGGER_ID, LOGGER_DEBUG, true);

  grpc->running = false;
  grpc->api = api;
  grpc->server = new API::Server(grpc);
  init_proto_serializer(&grpc->serializer);

  return RC_OK;
}

retcode_t iota_api_grpc_start(iota_api_grpc_t* const grpc) {
  if (grpc == NULL) {
    return RC_NULL_PARAM;
  } else if (grpc->running == true) {
    return RC_OK;
  }

  grpc->running = true;
  static_cast<API::Server*>(grpc->server)->start();

  return RC_OK;
}

retcode_t iota_api_grpc_stop(iota_api_grpc_t* const grpc) {
  if (grpc == NULL) {
    return RC_NULL_PARAM;
  } else if (grpc->running == false) {
    return RC_OK;
  }

  grpc->running = false;
  static_cast<API::Server*>(grpc->server)->stop();

  return RC_OK;
}

retcode_t iota_api_grpc_destroy(iota_api_grpc_t* const grpc) {
  if (grpc == NULL) {
    return RC_NULL_PARAM;
  } else if (grpc->running) {
    return RC_STILL_RUNNING;
  }

  delete static_cast<API::Server*>(grpc->server);

  logger_helper_release(logger_id);

  return RC_OK;
}
