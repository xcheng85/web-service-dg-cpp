load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "service",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.h"]),
    deps = [
        "//third_party/boost-ext-di",
        "//third_party/spdlog",
        "//ioc/config:config",
        "//ioc/client:client",
    ],
    visibility = ["//visibility:public"],
    copts = ["--std=c++23"],
)
