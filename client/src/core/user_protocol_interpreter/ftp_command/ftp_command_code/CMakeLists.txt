cmake_minimum_required(VERSION 3.10)

set(FTP_COMMAND_CODE_SOURCES
    ftp_command_code.h ftp_command_code.cc
    ftp_command_code_private_enum_to_description.h
    ftp_command_code_private_enum_to_description.cc
    ftp_command_code_private_enum_to_rfc.h
    ftp_command_code_private_enum_to_rfc.cc
    ftp_command_code_private_enum_to_string.h
    ftp_command_code_private_enum_to_string.cc
    ftp_command_code_private_string_to_enum.h
    ftp_command_code_private_string_to_enum.cc)

add_library(ftp_command_code ${FTP_COMMAND_CODE_SOURCES})

enable_testing()

add_executable(test_ftp_command_code test_ftp_command_code.cc)
target_link_libraries(test_ftp_command_code ftp_command_code)
target_link_libraries(test_ftp_command_code gtest_main)

include(GoogleTest)
gtest_discover_tests(test_ftp_command_code)
