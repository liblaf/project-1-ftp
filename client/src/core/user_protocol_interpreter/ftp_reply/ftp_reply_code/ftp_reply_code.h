#ifndef FTP_REPLY_CODE_H_
#define FTP_REPLY_CODE_H_

#include <string>

class FtpReplyCode {
 public:
  enum Enum { kUnknownCode = -1 };

 public:
  FtpReplyCode(const int new_code = kUnknownCode);
  FtpReplyCode(const std::string& new_code);
  operator int() const;
  operator std::string() const;

 public:
  bool IsValid() const;

  int GetCode() const;
  std::string GetExplanation() const;
  std::string GetString() const;

 private:
  int code_;
  std::string explanation_;
};

#endif  // FTP_REPLY_CODE_H_
