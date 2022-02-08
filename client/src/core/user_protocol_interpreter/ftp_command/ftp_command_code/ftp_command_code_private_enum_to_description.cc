#include "ftp_command_code_private_enum_to_description.h"

#include "ftp_command_code.h"

FtpCommandCodePrivateEnumToDescription::
    FtpCommandCodePrivateEnumToDescription() {
  this->operator[](FtpCommandCode::kAbor) = "Abort an active file transfer.";
  this->operator[](FtpCommandCode::kAcct) = "Account information.";
  this->operator[](FtpCommandCode::kAdat) = "Authentication/Security Data";
  this->operator[](FtpCommandCode::kAllo) =
      "Allocate sufficient disk space to receive a file.";
  this->operator[](FtpCommandCode::kAppe) = "Append (with create)";
  this->operator[](FtpCommandCode::kAuth) = "Authentication/Security Mechanism";
  this->operator[](FtpCommandCode::kAvbl) = "Get the available space";
  this->operator[](FtpCommandCode::kCcc) = "Clear Command Channel";
  this->operator[](FtpCommandCode::kCdup) = "Change to Parent Directory.";
  this->operator[](FtpCommandCode::kConf) =
      "Confidentiality Protection Command";
  this->operator[](FtpCommandCode::kCsid) = "Client / Server Identification";
  this->operator[](FtpCommandCode::kCwd) = "Change working directory.";
  this->operator[](FtpCommandCode::kDele) = "Delete file.";
  this->operator[](FtpCommandCode::kDsiz) = "Get the directory size";
  this->operator[](FtpCommandCode::kEnc) = "Privacy Protected Channel";
  this->operator[](FtpCommandCode::kEprt) =
      "Specifies an extended address and port to which the server should "
      "connect.";
  this->operator[](FtpCommandCode::kEpsv) = "Enter extended passive mode.";
  this->operator[](FtpCommandCode::kFeat) =
      "Get the feature list implemented by the server.";
  this->operator[](FtpCommandCode::kHelp) =
      "Returns usage documentation on a command if specified, else a general "
      "help document is returned.";
  this->operator[](FtpCommandCode::kHost) =
      "Identify desired virtual host on server, by name.";
  this->operator[](FtpCommandCode::kLang) = "Language Negotiation";
  this->operator[](FtpCommandCode::kList) =
      "Returns information of a file or directory if specified, else "
      "information of the current working directory is returned.";
  this->operator[](FtpCommandCode::kLprt) =
      "Specifies a long address and port to which the server should connect.";
  this->operator[](FtpCommandCode::kLpsv) = "Enter long passive mode.";
  this->operator[](FtpCommandCode::kMdtm) =
      "Return the last-modified time of a specified file.";
  this->operator[](FtpCommandCode::kMfct) =
      "Modify the creation time of a file.";
  this->operator[](FtpCommandCode::kMff) =
      "Modify fact (the last modification time, creation time, UNIX "
      "group/owner/mode of a file).";
  this->operator[](FtpCommandCode::kMfmt) =
      "Modify the last modification time of a file.";
  this->operator[](FtpCommandCode::kMic) = "Integrity Protected Command";
  this->operator[](FtpCommandCode::kMkd) = "Make directory.";
  this->operator[](FtpCommandCode::kMlsd) =
      "Lists the contents of a directory if a directory is named.";
  this->operator[](FtpCommandCode::kMlst) =
      "Provides data about exactly the object named on its command line, and "
      "no others.";
  this->operator[](FtpCommandCode::kMode) =
      "Sets the transfer mode (Stream, Block, or Compressed).";
  this->operator[](FtpCommandCode::kNlst) =
      "Returns a list of file names in a specified directory.";
  this->operator[](FtpCommandCode::kNoop) =
      "No operation (dummy packet; used mostly on keepalives).";
  this->operator[](FtpCommandCode::kOpts) =
      "Select options for a feature (for example OPTS UTF8 ON).";
  this->operator[](FtpCommandCode::kPass) = "Authentication password.";
  this->operator[](FtpCommandCode::kPasv) = "Enter passive mode.";
  this->operator[](FtpCommandCode::kPbsz) = "Protection Buffer Size";
  this->operator[](FtpCommandCode::kPort) =
      "Specifies an address and port to which the server should connect.";
  this->operator[](FtpCommandCode::kProt) = "Data Channel Protection Level.";
  this->operator[](FtpCommandCode::kPwd) =
      "Print working directory. Returns the current directory of the host.";
  this->operator[](FtpCommandCode::kQuit) = "Disconnect.";
  this->operator[](FtpCommandCode::kRein) = "Re initializes the connection.";
  this->operator[](FtpCommandCode::kRest) =
      "Restart transfer from the specified point.";
  this->operator[](FtpCommandCode::kRetr) = "Retrieve a copy of the file";
  this->operator[](FtpCommandCode::kRmd) = "Remove a directory.";
  this->operator[](FtpCommandCode::kRmda) = "Remove a directory tree";
  this->operator[](FtpCommandCode::kRnfr) = "Rename from.";
  this->operator[](FtpCommandCode::kRnto) = "Rename to.";
  this->operator[](FtpCommandCode::kSite) =
      "Sends site specific commands to remote server (like SITE IDLE 60 or "
      "SITE UMASK 002). Inspect SITE HELP output for complete list of "
      "supported commands.";
  this->operator[](FtpCommandCode::kSize) = "Return the size of a file.";
  this->operator[](FtpCommandCode::kSmnt) = "Mount file structure.";
  this->operator[](FtpCommandCode::kSpsv) =
      "Use single port passive mode (only one TCP port number for both control "
      "connections and passive-mode data connections)";
  this->operator[](FtpCommandCode::kStat) =
      "Returns information on the server status, including the status of the "
      "current connection";
  this->operator[](FtpCommandCode::kStor) =
      "Accept the data and to store the data as a file at the server site";
  this->operator[](FtpCommandCode::kStou) = "Store file uniquely.";
  this->operator[](FtpCommandCode::kStru) = "Set file transfer structure.";
  this->operator[](FtpCommandCode::kSyst) = "Return system type.";
  this->operator[](FtpCommandCode::kThmb) =
      "Get a thumbnail of a remote image file";
  this->operator[](FtpCommandCode::kType) =
      "Sets the transfer mode (ASCII/Binary).";
  this->operator[](FtpCommandCode::kUser) = "Authentication username.";
  this->operator[](FtpCommandCode::kXcup) =
      "Change to the parent of the current working directory";
  this->operator[](FtpCommandCode::kXmkd) = "Make a directory";
  this->operator[](FtpCommandCode::kXpwd) =
      "Print the current working directory";
  this->operator[](FtpCommandCode::kXrmd) = "Remove the directory";
  this->operator[](FtpCommandCode::kXsem) = "Send, mail if cannot";
  this->operator[](FtpCommandCode::kXsen) = "Send to terminal";
}

std::string FtpCommandCodePrivateEnumToDescription::Value(
    const int key, const std::string &default_value) const {
  auto iter = this->find(key);
  return iter == this->end() ? default_value : iter->second;
}
