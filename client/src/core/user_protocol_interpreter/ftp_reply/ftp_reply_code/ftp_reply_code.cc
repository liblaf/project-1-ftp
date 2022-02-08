#include "ftp_reply_code.h"

#include <regex>

#include "ftp_reply_code_private_code_to_explanation.h"

static auto CodeToExplanation() -> FtpReplyCodePrivateCodeToExplanation* {
  static FtpReplyCodePrivateCodeToExplanation code_to_explanation;
  return &code_to_explanation;
}

FtpReplyCode::FtpReplyCode(const int new_code)
    : code_((new_code > 99 && new_code < 1000) ? new_code
                                               : FtpReplyCode::kUnknownCode) {
  this->explanation_ = CodeToExplanation()->Value(this->code_);
}

FtpReplyCode::FtpReplyCode(const std::string& new_code) {
  auto pattern = std::regex("(\\d{3})");
  std::smatch match;
  std::regex_match(new_code, match, pattern);
  if (match.ready()) {
    try {
      this->code_ = std::stoi(match[1].str());
    } catch (const std::exception& e) {
      this->code_ = FtpReplyCode::kUnknownCode;
    }
  } else {
    this->code_ = FtpReplyCode::kUnknownCode;
  }
  this->explanation_ = CodeToExplanation()->Value(this->code_);
}

FtpReplyCode::operator int() const { return this->GetCode(); }

FtpReplyCode::operator std::string() const { return this->GetString(); }

bool FtpReplyCode::IsValid() const {
  return this->code_ != FtpReplyCode::kUnknownCode;
}

int FtpReplyCode::GetCode() const { return this->code_; }

std::string FtpReplyCode::GetExplanation() const { return this->explanation_; }

std::string FtpReplyCode::GetString() const {
  return this->IsValid() ? std::to_string(this->code_) : "";
}
