#ifndef FTP_COMMAND_CODE_PRIVATE_ENUM_TO_DESCRIPTION_H_
#define FTP_COMMAND_CODE_PRIVATE_ENUM_TO_DESCRIPTION_H_

#include <string>
#include <unordered_map>

class FtpCommandCodePrivateEnumToDescription
    : public std::unordered_map<int, std::string> {
 public:
  FtpCommandCodePrivateEnumToDescription();
  std::string Value(const int key, const std::string &default_value = "") const;
};

#endif  // FTP_COMMAND_CODE_PRIVATE_ENUM_TO_DESCRIPTION_H_
