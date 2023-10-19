load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "mux",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.h"]),
    deps = [
        "//third_party/spdlog",
        "//ioc/config:config",
    ],
    visibility = ["//visibility:public"],
    copts = ["--std=c++23"],
)
