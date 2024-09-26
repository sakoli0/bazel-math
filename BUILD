cc_library(
    name = "math_operations",
    srcs = ["src/main/cpp/math_operations.cpp"],
    hdrs = ["src/main/cpp/math_operations.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "math_operations_test",
    srcs = ["src/test/cpp/math_operations_test.cpp"],
    deps = [
        ":math_operations",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_package(
}
