#include "ftp_command_code_private_enum_to_string.h"

#include "ftp_command_code.h"

FtpCommandCodePrivateEnumToString::FtpCommandCodePrivateEnumToString() {
  this->operator[](FtpCommandCode::kAbor) = "ABOR";
  this->operator[](FtpCommandCode::kAcct) = "ACCT";
  this->operator[](FtpCommandCode::kAdat) = "ADAT";
  this->operator[](FtpCommandCode::kAllo) = "ALLO";
  this->operator[](FtpCommandCode::kAppe) = "APPE";
  this->operator[](FtpCommandCode::kAuth) = "AUTH";
  this->operator[](FtpCommandCode::kAvbl) = "AVBL";
  this->operator[](FtpCommandCode::kCcc) = "CCC";
  this->operator[](FtpCommandCode::kCdup) = "CDUP";
  this->operator[](FtpCommandCode::kConf) = "CONF";
  this->operator[](FtpCommandCode::kCsid) = "CSID";
  this->operator[](FtpCommandCode::kCwd) = "CWD";
  this->operator[](FtpCommandCode::kDele) = "DELE";
  this->operator[](FtpCommandCode::kDsiz) = "DSIZ";
  this->operator[](FtpCommandCode::kEnc) = "ENC";
  this->operator[](FtpCommandCode::kEprt) = "EPRT";
  this->operator[](FtpCommandCode::kEpsv) = "EPSV";
  this->operator[](FtpCommandCode::kFeat) = "FEAT";
  this->operator[](FtpCommandCode::kHelp) = "HELP";
  this->operator[](FtpCommandCode::kHost) = "HOST";
  this->operator[](FtpCommandCode::kLang) = "LANG";
  this->operator[](FtpCommandCode::kList) = "LIST";
  this->operator[](FtpCommandCode::kLprt) = "LPRT";
  this->operator[](FtpCommandCode::kLpsv) = "LPSV";
  this->operator[](FtpCommandCode::kMdtm) = "MDTM";
  this->operator[](FtpCommandCode::kMfct) = "MFCT";
  this->operator[](FtpCommandCode::kMff) = "MFF";
  this->operator[](FtpCommandCode::kMfmt) = "MFMT";
  this->operator[](FtpCommandCode::kMic) = "MIC";
  this->operator[](FtpCommandCode::kMkd) = "MKD";
  this->operator[](FtpCommandCode::kMlsd) = "MLSD";
  this->operator[](FtpCommandCode::kMlst) = "MLST";
  this->operator[](FtpCommandCode::kMode) = "MODE";
  this->operator[](FtpCommandCode::kNlst) = "NLST";
  this->operator[](FtpCommandCode::kNoop) = "NOOP";
  this->operator[](FtpCommandCode::kOpts) = "OPTS";
  this->operator[](FtpCommandCode::kPass) = "PASS";
  this->operator[](FtpCommandCode::kPasv) = "PASV";
  this->operator[](FtpCommandCode::kPbsz) = "PBSZ";
  this->operator[](FtpCommandCode::kPort) = "PORT";
  this->operator[](FtpCommandCode::kProt) = "PROT";
  this->operator[](FtpCommandCode::kPwd) = "PWD";
  this->operator[](FtpCommandCode::kQuit) = "QUIT";
  this->operator[](FtpCommandCode::kRein) = "REIN";
  this->operator[](FtpCommandCode::kRest) = "REST";
  this->operator[](FtpCommandCode::kRetr) = "RETR";
  this->operator[](FtpCommandCode::kRmd) = "RMD";
  this->operator[](FtpCommandCode::kRmda) = "RMDA";
  this->operator[](FtpCommandCode::kRnfr) = "RNFR";
  this->operator[](FtpCommandCode::kRnto) = "RNTO";
  this->operator[](FtpCommandCode::kSite) = "SITE";
  this->operator[](FtpCommandCode::kSize) = "SIZE";
  this->operator[](FtpCommandCode::kSmnt) = "SMNT";
  this->operator[](FtpCommandCode::kSpsv) = "SPSV";
  this->operator[](FtpCommandCode::kStat) = "STAT";
  this->operator[](FtpCommandCode::kStor) = "STOR";
  this->operator[](FtpCommandCode::kStou) = "STOU";
  this->operator[](FtpCommandCode::kStru) = "STRU";
  this->operator[](FtpCommandCode::kSyst) = "SYST";
  this->operator[](FtpCommandCode::kThmb) = "THMB";
  this->operator[](FtpCommandCode::kType) = "TYPE";
  this->operator[](FtpCommandCode::kUser) = "USER";
  this->operator[](FtpCommandCode::kXcup) = "XCUP";
  this->operator[](FtpCommandCode::kXmkd) = "XMKD";
  this->operator[](FtpCommandCode::kXpwd) = "XPWD";
  this->operator[](FtpCommandCode::kXrcp) = "XRCP";
  this->operator[](FtpCommandCode::kXrmd) = "XRMD";
  this->operator[](FtpCommandCode::kXrsq) = "XRSQ";
  this->operator[](FtpCommandCode::kXsem) = "XSEM";
  this->operator[](FtpCommandCode::kXsen) = "XSEN";
}

std::string FtpCommandCodePrivateEnumToString::Value(
    const int key, const std::string &default_value) const {
  auto iter = this->find(key);
  return iter == this->end() ? default_value : iter->second;
}
