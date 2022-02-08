cmake_minimum_required(VERSION 3.10)

set(FTP_COMMAND_CODE_SOURCES
    ftp_command_code.h ftp_command_code.cc
    ftp_command_code_private_enum_to_string.h
    ftp_command_code_private_enum_to_string.cc
    ftp_command_code_private_enum_to_description.h
    ftp_command_code_private_enum_to_description.cc
    ftp_command_code_private_enum_to_rfc.h
    ftp_command_code_private_enum_to_rfc.cc
    ftp_command_code_private_string_to_enum.h
    ftp_command_code_private_string_to_enum.cc)

add_library(ftp_command_code ${FTP_COMMAND_CODE_SOURCES})

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(test_ftp_command_code test_ftp_command_code.cc)
target_link_libraries(test_ftp_command_code gtest_main)
target_link_libraries(test_ftp_command_code ftp_command_code)
include(GoogleTest)
gtest_discover_tests(test_ftp_command_code)
