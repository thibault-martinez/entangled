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

        "@com_github_grpc_grpc//:grpc++",
    ],
)
