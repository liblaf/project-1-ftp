#include "ftp_command_code_private_string_to_enum.h"

FtpCommandCodePrivateStringToEnum::FtpCommandCodePrivateStringToEnum() {
  this->operator[]("ABOR") = FtpCommandCode::kAbor;
  this->operator[]("ACCT") = FtpCommandCode::kAcct;
  this->operator[]("ADAT") = FtpCommandCode::kAdat;
  this->operator[]("ALLO") = FtpCommandCode::kAllo;
  this->operator[]("APPE") = FtpCommandCode::kAppe;
  this->operator[]("AUTH") = FtpCommandCode::kAuth;
  this->operator[]("AVBL") = FtpCommandCode::kAvbl;
  this->operator[]("CCC") = FtpCommandCode::kCcc;
  this->operator[]("CDUP") = FtpCommandCode::kCdup;
  this->operator[]("CONF") = FtpCommandCode::kConf;
  this->operator[]("CSID") = FtpCommandCode::kCsid;
  this->operator[]("CWD") = FtpCommandCode::kCwd;
  this->operator[]("DELE") = FtpCommandCode::kDele;
  this->operator[]("DSIZ") = FtpCommandCode::kDsiz;
  this->operator[]("ENC") = FtpCommandCode::kEnc;
  this->operator[]("EPRT") = FtpCommandCode::kEprt;
  this->operator[]("EPSV") = FtpCommandCode::kEpsv;
  this->operator[]("FEAT") = FtpCommandCode::kFeat;
  this->operator[]("HELP") = FtpCommandCode::kHelp;
  this->operator[]("HOST") = FtpCommandCode::kHost;
  this->operator[]("LANG") = FtpCommandCode::kLang;
  this->operator[]("LIST") = FtpCommandCode::kList;
  this->operator[]("LPRT") = FtpCommandCode::kLprt;
  this->operator[]("LPSV") = FtpCommandCode::kLpsv;
  this->operator[]("MDTM") = FtpCommandCode::kMdtm;
  this->operator[]("MFCT") = FtpCommandCode::kMfct;
  this->operator[]("MFF") = FtpCommandCode::kMff;
  this->operator[]("MFMT") = FtpCommandCode::kMfmt;
  this->operator[]("MIC") = FtpCommandCode::kMic;
  this->operator[]("MKD") = FtpCommandCode::kMkd;
  this->operator[]("MLSD") = FtpCommandCode::kMlsd;
  this->operator[]("MLST") = FtpCommandCode::kMlst;
  this->operator[]("MODE") = FtpCommandCode::kMode;
  this->operator[]("NLST") = FtpCommandCode::kNlst;
  this->operator[]("NOOP") = FtpCommandCode::kNoop;
  this->operator[]("OPTS") = FtpCommandCode::kOpts;
  this->operator[]("PASS") = FtpCommandCode::kPass;
  this->operator[]("PASV") = FtpCommandCode::kPasv;
  this->operator[]("PBSZ") = FtpCommandCode::kPbsz;
  this->operator[]("PORT") = FtpCommandCode::kPort;
  this->operator[]("PROT") = FtpCommandCode::kProt;
  this->operator[]("PWD") = FtpCommandCode::kPwd;
  this->operator[]("QUIT") = FtpCommandCode::kQuit;
  this->operator[]("REIN") = FtpCommandCode::kRein;
  this->operator[]("REST") = FtpCommandCode::kRest;
  this->operator[]("RETR") = FtpCommandCode::kRetr;
  this->operator[]("RMD") = FtpCommandCode::kRmd;
  this->operator[]("RMDA") = FtpCommandCode::kRmda;
  this->operator[]("RNFR") = FtpCommandCode::kRnfr;
  this->operator[]("RNTO") = FtpCommandCode::kRnto;
  this->operator[]("SITE") = FtpCommandCode::kSite;
  this->operator[]("SIZE") = FtpCommandCode::kSize;
  this->operator[]("SMNT") = FtpCommandCode::kSmnt;
  this->operator[]("SPSV") = FtpCommandCode::kSpsv;
  this->operator[]("STAT") = FtpCommandCode::kStat;
  this->operator[]("STOR") = FtpCommandCode::kStor;
  this->operator[]("STOU") = FtpCommandCode::kStou;
  this->operator[]("STRU") = FtpCommandCode::kStru;
  this->operator[]("SYST") = FtpCommandCode::kSyst;
  this->operator[]("THMB") = FtpCommandCode::kThmb;
  this->operator[]("TYPE") = FtpCommandCode::kType;
  this->operator[]("USER") = FtpCommandCode::kUser;
  this->operator[]("XCUP") = FtpCommandCode::kXcup;
  this->operator[]("XMKD") = FtpCommandCode::kXmkd;
  this->operator[]("XPWD") = FtpCommandCode::kXpwd;
  this->operator[]("XRCP") = FtpCommandCode::kXrcp;
  this->operator[]("XRMD") = FtpCommandCode::kXrmd;
  this->operator[]("XRSQ") = FtpCommandCode::kXrsq;
  this->operator[]("XSEM") = FtpCommandCode::kXsem;
  this->operator[]("XSEN") = FtpCommandCode::kXsen;
}

int FtpCommandCodePrivateStringToEnum::Value(const std::string &key,
                                             const int default_value) const {
  auto iter = this->find(key);
  return iter == this->end() ? default_value : iter->second;
}
