load("//utils/containers:map_generator.bzl", "map_generate")

cc_library(
    name = "tangle",
    srcs = ["tangle.c"],
    hdrs = ["tangle.h"],
    visibility = ["//visibility:public"],
    deps = [
        ":flex_trit_t_to_iota_transaction_t_map",
        "//ciri/consensus/snapshot:state_delta",
        "//common:errors",
        "//common/model:bundle",
        "//common/model:transaction",
        "//common/storage",
        "//common/trinary:trit_array",
        "//utils:logger_helper",
        "//utils/containers/hash:hash243_queue",
        "//utils/containers/hash:hash243_set",
        "//utils/containers/hash:hash81_queue",
        "@com_github_uthash//:uthash",
    ],
)

cc_library(
    name = "traversal",
    srcs = ["traversal.c"],
    hdrs = ["traversal.h"],
    visibility = ["//visibility:public"],
    deps = [
        "//ciri/consensus/tangle",
        "//common/model:transaction",
        "//common/storage:pack",
        "//utils/containers/hash:hash243_set",
        "//utils/containers/hash:hash243_stack",
    ],
)

map_generate(
    additional_deps = ["//common/model:transaction"],
    additional_include_path = "common/model/transaction.h",
    key_type = "flex_trit_t",
    parent_directory = "ciri/consensus/tangle",
    value_type = "iota_transaction_t",
)
