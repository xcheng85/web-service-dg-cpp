# ioc/BUILD
load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "ioc",
    srcs = glob(["*.cpp"]),
    deps = [
        "//third_party/boost-ext-di",
        "//third_party/spdlog",
        "//ioc/service:service",
        "//ioc/lock:lock",
        "//ioc/middleware:middleware",
        "//ioc/mux:mux",
        "//ioc/config:config",
    ],
    copts = ["--std=c++23"],
)