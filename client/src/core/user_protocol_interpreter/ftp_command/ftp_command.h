#ifndef FTP_COMMAND_H_
#define FTP_COMMAND_H_

#include <string>

#include "ftp_command_argument/ftp_command_argument.h"
#include "ftp_command_code/ftp_command_code.h"

class FtpCommand {
 public:
  using CodeType = FtpCommandCode;
  using ArgumentType = FtpCommandArgument;

 public:
  FtpCommand(const FtpCommand::CodeType& new_code =
                 FtpCommand::CodeType::kUnknownFtpCommandCode,
             const FtpCommand::ArgumentType& new_argument =
                 FtpCommand::ArgumentType());
  FtpCommand(const std::string& new_command);
  operator std::string() const;

 public:
  bool IsValid() const;

  FtpCommand::CodeType GetCode() const;
  FtpCommand::ArgumentType GetArgument() const;
  std::string GetString() const;

 private:
  FtpCommand::CodeType code_;
  FtpCommand::ArgumentType argument_;
};

#endif  // FTP_COMMAND_H_
