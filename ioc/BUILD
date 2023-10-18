# ioc/BUILD
load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "ioc",
    srcs = glob(["*.cpp"]),
    deps = [
        "//third_party/boost-ext-di",
        "//third_party/spdlog",
    ],
    copts = ["--std=c++23"],
)