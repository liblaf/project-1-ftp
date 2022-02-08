cmake_minimum_required(VERSION 3.10)

set(FTP_COMMAND_ARGUMENT_SOURCES ftp_command_argument.h ftp_command_argument.cc)

add_library(ftp_command_argument ${FTP_COMMAND_ARGUMENT_SOURCES})
