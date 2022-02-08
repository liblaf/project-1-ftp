#ifndef FTP_COMMAND_ARGUMENT_H_
#define FTP_COMMAND_ARGUMENT_H_

#include <string>

class FtpCommandArgument : public std::string {
 public:
  FtpCommandArgument();
  FtpCommandArgument(const std::string& new_argument);
  FtpCommandArgument(const char* new_argument);
  operator const char*() const;

 public:
  bool IsValid() const;

 private:
  bool is_valid_;
};

#endif  // FTP_COMMAND_ARGUMENT_H_
