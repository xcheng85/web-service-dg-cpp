load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "middleware",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.h"]),
    deps = [
        "//third_party/spdlog",
    ],
    visibility = ["//visibility:public"],
    copts = ["--std=c++23"],
)
