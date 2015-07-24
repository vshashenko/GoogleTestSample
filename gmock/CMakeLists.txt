cmake_minimum_required(VERSION 2.8.11.2)

# Vanilla gmock contains its own CMakeLists.txt. Let's process it.
add_subdirectory(gmock-1.7.0)

# But it's not a very proper one, so we fix it a little bit.
target_include_directories(gmock
  PUBLIC
    gmock-1.7.0/include
    gmock-1.7.0/gtest/include
)
