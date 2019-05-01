package(default_visibility = ["//visibility:public"])

cc_library(
    name = "grpc",
    srcs = ["grpc.c"],
    hdrs = ["grpc.h"],
    deps = [
        "//cclient/request:requests",
        "//cclient/response:responses",
        "//cclient/serialization:serializer",
        "//ciri/api",
        "//common:errors",
        "//utils:logger_helper",
    ],
)
