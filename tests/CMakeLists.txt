FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.x
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM
)
FetchContent_MakeAvailable(googletest)

add_executable(square_test SquareTest.cpp)
target_link_libraries(square_test GTest::gtest_main square)

include(GoogleTest)
gtest_discover_tests(square_test EXTRA_ARGS --gtest_color=yes)


