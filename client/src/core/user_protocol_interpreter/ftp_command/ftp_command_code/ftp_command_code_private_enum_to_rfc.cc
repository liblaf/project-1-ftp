#include "ftp_command_code_private_enum_to_rfc.h"

#include "ftp_command_code.h"

FtpCommandCodePrivateEnumToRfc::FtpCommandCodePrivateEnumToRfc() {
  this->operator[](FtpCommandCode::kAdat) = "RFC 2228";
  this->operator[](FtpCommandCode::kAuth) = "RFC 2228";
  this->operator[](FtpCommandCode::kAvbl) =
      "Streamlined FTP Command Extensions";
  this->operator[](FtpCommandCode::kCcc) = "RFC 2228";
  this->operator[](FtpCommandCode::kConf) = "RFC 2228";
  this->operator[](FtpCommandCode::kCsid) =
      "Streamlined FTP Command Extensions";
  this->operator[](FtpCommandCode::kCwd) = "RFC 697";
  this->operator[](FtpCommandCode::kDsiz) =
      "Streamlined FTP Command Extensions";
  this->operator[](FtpCommandCode::kEnc) = "RFC 2228";
  this->operator[](FtpCommandCode::kEprt) = "RFC 2428";
  this->operator[](FtpCommandCode::kEpsv) = "RFC 2428";
  this->operator[](FtpCommandCode::kFeat) = "RFC 2389";
  this->operator[](FtpCommandCode::kHost) = "RFC 7151";
  this->operator[](FtpCommandCode::kLang) = "RFC 2640";
  this->operator[](FtpCommandCode::kLprt) = "RFC 1639";
  this->operator[](FtpCommandCode::kLpsv) = "RFC 1639";
  this->operator[](FtpCommandCode::kMdtm) = "RFC 3659";
  this->operator[](FtpCommandCode::kMfct) =
      "The 'MFMT', 'MFCT', and 'MFF' Command Extensions for FTP";
  this->operator[](FtpCommandCode::kMff) =
      "The 'MFMT', 'MFCT', and 'MFF' Command Extensions for FTP";
  this->operator[](FtpCommandCode::kMfmt) =
      "The 'MFMT', 'MFCT', and 'MFF' Command Extensions for FTP";
  this->operator[](FtpCommandCode::kMic) = "RFC 2228";
  this->operator[](FtpCommandCode::kMlsd) = "RFC 3659";
  this->operator[](FtpCommandCode::kMlst) = "RFC 3659";
  this->operator[](FtpCommandCode::kOpts) = "RFC 2389";
  this->operator[](FtpCommandCode::kPbsz) = "RFC 2228";
  this->operator[](FtpCommandCode::kProt) = "RFC 2228";
  this->operator[](FtpCommandCode::kRest) = "RFC 3659";
  this->operator[](FtpCommandCode::kRmda) =
      "Streamlined FTP Command Extensions";
  this->operator[](FtpCommandCode::kSize) = "RFC 3659";
  this->operator[](FtpCommandCode::kSpsv) =
      "FTP Extension Allowing IP Forwarding (NATs)";
  this->operator[](FtpCommandCode::kThmb) =
      "Streamlined FTP Command Extensions";
  this->operator[](FtpCommandCode::kXcup) = "RFC 775";
  this->operator[](FtpCommandCode::kXmkd) = "RFC 775";
  this->operator[](FtpCommandCode::kXpwd) = "RFC 775";
  this->operator[](FtpCommandCode::kXrcp) = "RFC 743";
  this->operator[](FtpCommandCode::kXrmd) = "RFC 775";
  this->operator[](FtpCommandCode::kXrsq) = "RFC 743";
  this->operator[](FtpCommandCode::kXsem) = "RFC 737";
  this->operator[](FtpCommandCode::kXsen) = "RFC 737";
}

std::string FtpCommandCodePrivateEnumToRfc::Value(
    const int key, const std::string &default_value) const {
  auto iter = this->find(key);
  return iter == this->end() ? default_value : iter->second;
}
