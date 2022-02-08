#include "ftp_command_argument.h"

FtpCommandArgument::FtpCommandArgument() : is_valid_(false) {}

FtpCommandArgument::FtpCommandArgument(const std::string &new_argument)
    : std::string(new_argument), is_valid_(true) {}

FtpCommandArgument::FtpCommandArgument(const char *new_argument,
                                       const int length)
    : is_valid_(true) {
  if (length < 0) {
    *this = std::string(new_argument);
  } else {
    *this = std::string(new_argument, length);
  }
}

FtpCommandArgument::operator const char *() const {
  return this->is_valid_ ? this->c_str() : nullptr;
}

bool FtpCommandArgument::IsValid() const { return this->is_valid_; }
