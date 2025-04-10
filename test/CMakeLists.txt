
cmake_minimum_required(VERSION 3.16)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}.test AllTests.cpp tests.cpp)

target_link_libraries(${PROJECT_NAME}.test
    ${PROJECT_NAME}
    gtest
    gtest_main
)
