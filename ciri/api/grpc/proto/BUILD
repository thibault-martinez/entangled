package(default_visibility = ["//visibility:public"])

load("@com_github_grpc_grpc//:bazel/cc_grpc_library.bzl", "cc_grpc_library")

proto_library(
    name = "messages_proto",
    srcs = ["messages.proto"],
)

cc_grpc_library(
    name = "messages_cc_proto",
    srcs = ["messages.proto"],
    proto_only = True,
    well_known_protos = False,
    deps = [],
)

cc_grpc_library(
    name = "api_cc_grpc",
    srcs = ["api.proto"],
    generate_mocks = True,
    proto_only = False,
    well_known_protos = False,
    deps = [":messages_cc_proto"],
)
