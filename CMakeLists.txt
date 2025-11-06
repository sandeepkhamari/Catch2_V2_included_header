cmake_minimum_required(VERSION 3.15)
project(test_included_header)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#find_package(Catch2 3 REQUIRED)
#find_package(Catch2 REQUIRED)
message(STATUS "Catch2 found at: ${Catch2_DIR}")

enable_testing()
include(CTest)

add_executable(test_included_header test_included_header.cpp)
#target_include_directories()
#target_link_libraries(test_included_header PRIVATE Catch2::Catch2WithMain)

include(Catch)
catch_discover_tests(test_included_header)
