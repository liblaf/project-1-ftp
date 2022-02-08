#ifndef FTP_REPLY_TEXT_H_
#define FTP_REPLY_TEXT_H_

#include <string>

class FtpReplyText : public std::string {
 public:
  FtpReplyText();
  FtpReplyText(const std::string& new_text);
  FtpReplyText(const char* new_text);
  operator const char*() const;

 public:
  bool IsValid() const;

 private:
  bool is_valid_;
};

#endif  // FTP_REPLY_TEXT_H_
