#include "ftp_command.h"

#include <regex>

FtpCommand::FtpCommand(const FtpCommand::CodeType &new_code,
                       const FtpCommand::ArgumentType &new_argument)
    : code_(new_code), argument_(new_argument) {}

FtpCommand::FtpCommand(const std::string &new_command) {
  auto pattern = std::regex("(\\w+) (.*)\r\n");
  std::smatch match;
  std::regex_match(new_command, match, pattern);
  if (match.ready()) {
    this->code_ = match[1].str();
    this->argument_ = match[2].str();
  } else {
    this->code_ = FtpCommand::CodeType::kUnknownFtpCommandCode;
    this->argument_ = "";
  }
}

FtpCommand::operator std::string() const { return this->GetString(); }

bool FtpCommand::IsValid() const {
  return this->code_.IsValid() && this->argument_.IsValid();
}

FtpCommand::CodeType FtpCommand::GetCode() const { return this->code_; }

FtpCommand::ArgumentType FtpCommand::GetArgument() const {
  return this->argument_;
}

std::string FtpCommand::GetString() const {
  return this->IsValid()
             ? this->code_.GetString() + " " + this->argument_ + "\r\n"
             : "";
}
