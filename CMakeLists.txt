cmake_minimum_required(VERSION 3.14)
project(cmake_gtest VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(sample src/main.cpp src/add.cpp)
target_compile_features(sample PUBLIC cxx_std_17)
target_compile_options(sample PUBLIC -O2 -Wall -Wextra)
target_include_directories(sample PUBLIC src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(tests)
