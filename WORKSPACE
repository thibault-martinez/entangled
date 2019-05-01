workspace(name = "org_iota_entangled")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "ba8b08a697b66e14af35da07753583cf32ff3d14dcd768f91b1bbe2e6c07c349",
    strip_prefix = "grpc-1.20.1",
    url = "https://github.com/grpc/grpc/archive/v1.20.1.tar.gz",
)

http_archive(
    name = "com_google_protobuf",
    sha256 = "f1748989842b46fa208b2a6e4e2785133cfcc3e4d43c17fecb023733f0f5443f",
    strip_prefix = "protobuf-3.7.1",
    url = "https://github.com/protocolbuffers/protobuf/archive/v3.7.1.tar.gz",
)

git_repository(
    name = "rules_iota",
    commit = "4ea411a05b38633a8d6b13c2d4d520441aeda9dd",
    remote = "https://github.com/iotaledger/rules_iota.git",
)

git_repository(
    name = "iota_toolchains",
    commit = "8df84b381fcc3d87acd605d1053f307276db71df",
    remote = "https://github.com/iotaledger/toolchains.git",
)

git_repository(
    name = "bazel_toolchains",
    commit = "b6875a7bb09b4fa1db8ea347852c0dc9ccae74ab",
    remote = "https://github.com/th0br0/bazel-toolchains.git",
)

new_git_repository(
    name = "iota_lib_cpp",
    build_file = "//:third_party/iota_lib_cpp/BUILD.bzl",
    commit = "9971c832e6a38972803a4d1506a78c36451c3df3",
    remote = "https://github.com/th0br0/iota.lib.cpp.git",
)

android_sdk_repository(
    name = "androidsdk",
    api_level = 19,
)

android_ndk_repository(
    name = "androidndk",
    api_level = 19,
)

git_repository(
    name = "build_bazel_rules_apple",
    remote = "https://github.com/bazelbuild/rules_apple.git",
    tag = "0.13.0",
)

load(
    "@build_bazel_rules_apple//apple:repositories.bzl",
    "apple_rules_dependencies",
)

apple_rules_dependencies()

load("@rules_iota//:defs.bzl", "iota_deps")
load("@iota_toolchains//:toolchains.bzl", "setup_toolchains")
load("//tools:snapshot.bzl", "fetch_snapshot_files")
load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

iota_deps()

setup_toolchains()

fetch_snapshot_files()
