#ifndef FTP_COMMAND_CODE_PRIVATE_ENUM_TO_STRING_H_
#define FTP_COMMAND_CODE_PRIVATE_ENUM_TO_STRING_H_

#include <string>
#include <unordered_map>

class FtpCommandCodePrivateEnumToString
    : public std::unordered_map<int, std::string> {
 public:
  FtpCommandCodePrivateEnumToString();
  std::string Value(const int key, const std::string &default_value = "") const;
};

#endif  // FTP_COMMAND_CODE_PRIVATE_ENUM_TO_STRING_H_
