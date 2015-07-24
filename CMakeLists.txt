cmake_minimum_required(VERSION 3.2)
project(GoogleTestSample)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(SOURCE_FILES main.cpp Suite1Tests.cpp Suite2Tests.cpp)
add_executable(GoogleTestSample ${SOURCE_FILES})

add_subdirectory(gmock)

target_link_libraries(GoogleTestSample gmock)
