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

genrule(
    name = "package",
    srcs = [":math_operations"],
    outs = ["bazelmath.tar.gz"],
    cmd = """
        mkdir -p bazelmath/lib bazelmath/include
        cp $(locations :math_operations) | grep '\.so$$' | xargs -I {} cp {} bazelmath/lib/
        cp src/main/cpp/math_operations.h bazelmath/include/
        tar -czf $@ bazelmath
    """,
)
