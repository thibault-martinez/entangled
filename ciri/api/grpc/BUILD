package(default_visibility = ["//visibility:public"])

cc_library(
    name = "grpc",
    srcs = ["grpc.cc"],
    deps = [
        ":grpc_shared",
        ":server",
        "//utils:logger_helper",
    ],
)

cc_library(
    name = "grpc_shared",
    hdrs = ["grpc.h"],
    deps = [
        "//cclient/serialization:serializer",
        "//ciri/api",
        "//common:errors",
    ],
)

cc_library(
    name = "server",
    hdrs = ["server.h"],
    deps = [
        ":service",
    ],
)

        "@com_github_grpc_grpc//:grpc++",
    ],
)
