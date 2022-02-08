#include "ftp_reply_text.h"

FtpReplyText::FtpReplyText() : is_valid_(false) {}

FtpReplyText::FtpReplyText(const std::string& new_text)
    : std::string(new_text), is_valid_(true) {}

FtpReplyText::FtpReplyText(const char* new_text)
    : std::string(new_text), is_valid_(true) {}

FtpReplyText::operator const char*() const {
  return this->is_valid_ ? this->c_str() : nullptr;
}

bool FtpReplyText::IsValid() const { return this->is_valid_; }
