cmake_minimum_required(VERSION 3.10)

project(
  client
  VERSION 0.1
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# googletest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(core)
# add_subdirectory(gui)
