package(default_visibility = ["//visibility:public"])

cc_library(
    name = "grpc",
    srcs = ["grpc.cpp"],
    hdrs = ["grpc.h"],
    deps = [
        "//cclient/request:requests",
        "//cclient/response:responses",
        "//cclient/serialization:serializer",
        "//ciri/api",
        "//common:errors",
        "//utils:logger_helper",
        "@com_github_grpc_grpc//:grpc++",
    ],
)
