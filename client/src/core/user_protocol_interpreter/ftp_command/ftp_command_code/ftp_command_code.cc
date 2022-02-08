#include "ftp_command_code.h"

#include <algorithm>
#include <cctype>

#include "ftp_command_code_private_enum_to_description.h"
#include "ftp_command_code_private_enum_to_rfc.h"
#include "ftp_command_code_private_enum_to_string.h"
#include "ftp_command_code_private_string_to_enum.h"

static auto StringToEnum() -> FtpCommandCodePrivateStringToEnum * {
  static FtpCommandCodePrivateStringToEnum string_to_enum;
  return &string_to_enum;
}

static auto EnumToString() -> FtpCommandCodePrivateEnumToString * {
  static FtpCommandCodePrivateEnumToString enum_to_string;
  return &enum_to_string;
}

static auto EnumToRfc() -> FtpCommandCodePrivateEnumToRfc * {
  static FtpCommandCodePrivateEnumToRfc enum_to_rfc;
  return &enum_to_rfc;
}

static auto EnumToDescription() -> FtpCommandCodePrivateEnumToDescription * {
  static FtpCommandCodePrivateEnumToDescription enum_to_description;
  return &enum_to_description;
}

FtpCommandCode::FtpCommandCode(const FtpCommandCode::Enum new_command) {
  auto iter = EnumToString()->find(new_command);
  this->enum_ = iter == EnumToString()->end()
                    ? FtpCommandCode::kUnknownFtpCommandCode
                    : new_command;
  this->string_ = EnumToString()->Value(this->enum_);
  this->rfc_ = EnumToRfc()->Value(this->enum_);
  this->description_ = EnumToDescription()->Value(this->enum_);
}

FtpCommandCode::FtpCommandCode(const std::string &new_command) {
  std::string new_command_upper;
  new_command_upper.resize(new_command.length());
  std::transform(new_command.begin(), new_command.end(),
                 new_command_upper.begin(),
                 [](const char ch) -> char { return toupper(ch); });
  this->enum_ = static_cast<FtpCommandCode::Enum>(
      StringToEnum()->Value(new_command_upper));
  this->string_ = EnumToString()->Value(this->enum_);
  this->rfc_ = EnumToRfc()->Value(this->enum_);
  this->description_ = EnumToDescription()->Value(this->enum_);
}

FtpCommandCode::operator FtpCommandCode::Enum() const { return this->ToEnum(); }

FtpCommandCode::operator std::string() const { return this->ToString(); }

bool FtpCommandCode::IsValid() const {
  return this->enum_ != FtpCommandCode::kUnknownFtpCommandCode;
}

FtpCommandCode::Enum FtpCommandCode::ToEnum() const { return this->enum_; }

std::string FtpCommandCode::ToString() const { return this->string_; }

std::string FtpCommandCode::Rfc() const { return this->rfc_; }

std::string FtpCommandCode::Description() const { return this->description_; }
