add_subdirectory(ftp_command_code)
add_subdirectory(ftp_command_argument)

set(FTP_COMMAND_SOURCES ftp_command.h ftp_command.cc)

add_library(ftp_command ${FTP_COMMAND_SOURCES})
target_link_libraries(ftp_command ftp_command_code ftp_command_argument)

enable_testing()

add_executable(test_ftp_command test_ftp_command.cc)
target_link_libraries(test_ftp_command ftp_command)
target_link_libraries(test_ftp_command gtest_main)

include(GoogleTest)
gtest_discover_tests(test_ftp_command)
