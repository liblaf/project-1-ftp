#include "ftp_command_argument.h"

#include <string>

FtpCommandArgument::FtpCommandArgument() : is_valid_(false) {}

FtpCommandArgument::FtpCommandArgument(const std::string &new_argument)
    : std::string(new_argument), is_valid_(true) {}

FtpCommandArgument::FtpCommandArgument(const char *new_argument)
    : std::string(new_argument), is_valid_(true) {}

FtpCommandArgument::FtpCommandArgument(const char *new_argument,
                                       const std::string::size_type length)
    : std::string(new_argument, length), is_valid_(true) {}

FtpCommandArgument::operator const char *() const {
  return this->is_valid_ ? this->c_str() : nullptr;
}

bool FtpCommandArgument::IsValid() const { return this->is_valid_; }
