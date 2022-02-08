#ifndef FTP_REPLY_CODE_PRIVATE_CODE_TO_EXPLANATION_H_
#define FTP_REPLY_CODE_PRIVATE_CODE_TO_EXPLANATION_H_

#include <string>
#include <unordered_map>

class FtpReplyCodePrivateCodeToExplanation
    : public std::unordered_map<int, std::string> {
 public:
  FtpReplyCodePrivateCodeToExplanation();
  std::string Value(const int key, const std::string& default_value = "") const;
};

#endif  // FTP_REPLY_CODE_PRIVATE_CODE_TO_EXPLANATION_H_
