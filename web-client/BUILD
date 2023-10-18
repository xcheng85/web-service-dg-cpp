# web-client/BUILD
load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "web-client",
    srcs = glob(["*.cpp"]),
    deps = [
        "@cpr",
        "//third_party/spdlog",
    ],
)