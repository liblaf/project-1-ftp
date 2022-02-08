#ifndef FTP_COMMAND_CODE_PRIVATE_ENUM_TO_RFC_H_
#define FTP_COMMAND_CODE_PRIVATE_ENUM_TO_RFC_H_

#include <string>
#include <unordered_map>

class FtpCommandCodePrivateEnumToRfc
    : public std::unordered_map<int, std::string> {
 public:
  FtpCommandCodePrivateEnumToRfc();
  std::string Value(const int key, const std::string &default_value = "") const;
};

#endif  // FTP_COMMAND_CODE_PRIVATE_ENUM_TO_RFC_H_
