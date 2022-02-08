#ifndef FTP_COMMAND_CODE_H_
#define FTP_COMMAND_CODE_H_

#include <string>

class FtpCommandCode {
 public:
  enum Enum {
    kUnknownFtpCommandCode = -1,
    kAbor,
    kAcct,
    kAdat,
    kAllo,
    kAppe,
    kAuth,
    kAvbl,
    kCcc,
    kCdup,
    kConf,
    kCsid,
    kCwd,
    kDele,
    kDsiz,
    kEnc,
    kEprt,
    kEpsv,
    kFeat,
    kHelp,
    kHost,
    kLang,
    kList,
    kLprt,
    kLpsv,
    kMdtm,
    kMfct,
    kMff,
    kMfmt,
    kMic,
    kMkd,
    kMlsd,
    kMlst,
    kMode,
    kNlst,
    kNoop,
    kOpts,
    kPass,
    kPasv,
    kPbsz,
    kPort,
    kProt,
    kPwd,
    kQuit,
    kRein,
    kRest,
    kRetr,
    kRmd,
    kRmda,
    kRnfr,
    kRnto,
    kSite,
    kSize,
    kSmnt,
    kSpsv,
    kStat,
    kStor,
    kStou,
    kStru,
    kSyst,
    kThmb,
    kType,
    kUser,
    kXcup,
    kXmkd,
    kXpwd,
    kXrcp,
    kXrmd,
    kXrsq,
    kXsem,
    kXsen,
  };

 public:
  FtpCommandCode(const FtpCommandCode::Enum new_command =
                     FtpCommandCode::kUnknownFtpCommandCode);
  FtpCommandCode(const std::string &new_command);
  operator FtpCommandCode::Enum() const;
  operator std::string() const;

 public:
  bool IsValid() const;

  FtpCommandCode::Enum GetEnum() const;
  std::string GetString() const;
  std::string GetRfc() const;
  std::string GetDescription() const;

 private:
  FtpCommandCode::Enum enum_;
  std::string string_;
  std::string rfc_;
  std::string description_;
};

#endif  // FTP_COMMAND_CODE_H_
