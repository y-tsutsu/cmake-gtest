cmake_minimum_required(VERSION 3.14)
project(unit_test VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(hello_test hello_test.cpp)
target_compile_features(hello_test PUBLIC cxx_std_17)
target_compile_options(sample PUBLIC -O2 -Wall -Wextra)
target_link_libraries(hello_test GTest::gtest_main)

add_executable(add_test add_test.cpp ../src/add.cpp)
target_compile_features(add_test PUBLIC cxx_std_17)
target_compile_options(sample PUBLIC -O2 -Wall -Wextra)
target_include_directories(add_test PUBLIC ../src)
target_link_libraries(add_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)
gtest_discover_tests(add_test)
