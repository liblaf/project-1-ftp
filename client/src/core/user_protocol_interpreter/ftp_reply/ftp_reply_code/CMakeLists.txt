cmake_minimum_required(VERSION 3.10)

set(FTP_REPLY_CODE_SOURCES
    ftp_reply_code.h ftp_reply_code.cc
    ftp_reply_code_private_code_to_explanation.h
    ftp_reply_code_private_code_to_explanation.cc)

add_library(ftp_reply_code ${FTP_REPLY_CODE_SOURCES})

enable_testing()

add_executable(test_ftp_reply_code test_ftp_reply_code.cc)
target_link_libraries(test_ftp_reply_code gtest_main)
target_link_libraries(test_ftp_reply_code ftp_reply_code)

include(GoogleTest)
gtest_discover_tests(test_ftp_reply_code)
