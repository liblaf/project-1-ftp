#ifndef FTP_COMMAND_CODE_PRIVATE_STRING_TO_ENUM_H_
#define FTP_COMMAND_CODE_PRIVATE_STRING_TO_ENUM_H_

#include <string>
#include <unordered_map>

#include "ftp_command_code.h"

class FtpCommandCodePrivateStringToEnum
    : public std::unordered_map<std::string, int> {
 public:
  FtpCommandCodePrivateStringToEnum();
  int Value(
      const std::string &key,
      const int default_value = FtpCommandCode::kUnknownFtpCommandCode) const;
};

#endif  // FTP_COMMAND_CODE_PRIVATE_STRING_TO_ENUM_H_
