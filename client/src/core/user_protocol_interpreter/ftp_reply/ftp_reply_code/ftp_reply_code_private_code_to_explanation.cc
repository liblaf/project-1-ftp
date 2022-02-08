#include "ftp_reply_code_private_code_to_explanation.h"

FtpReplyCodePrivateCodeToExplanation::FtpReplyCodePrivateCodeToExplanation() {
  this->operator[](110) =
      "Restart marker replay . In this case, the text is exact and not left to "
      "the particular implementation; it must read: MARK yyyy = mmmm where "
      "yyyy is User-process data stream marker, and mmmm server's equivalent "
      "marker (note the spaces between markers and \" = \").";
  this->operator[](120) = "Service ready in nnn minutes.";
  this->operator[](125) = "Data connection already open; transfer starting.";
  this->operator[](150) = "File status okay; about to open data connection.";
  this->operator[](202) = "Command not implemented, superfluous at this site.";
  this->operator[](211) = "System status, or system help reply.";
  this->operator[](212) = "Directory status.";
  this->operator[](213) = "File status.";
  this->operator[](214) =
      "Help message. Explains how to use the server or the meaning of a "
      "particular non-standard command. This reply is useful only to the human "
      "user.";
  this->operator[](215) =
      "NAME system type. Where NAME is an official system name from the "
      "registry kept by IANA.";
  this->operator[](220) = "Service ready for new user.";
  this->operator[](221) = "Service closing control connection.";
  this->operator[](225) = "Data connection open; no transfer in progress.";
  this->operator[](226) =
      "Closing data connection. Requested file action successful (for example, "
      "file transfer or file abort).";
  this->operator[](227) = "Entering Passive Mode (h1,h2,h3,h4,p1,p2).";
  this->operator[](228) = "Entering Long Passive Mode (long address, port).";
  this->operator[](229) = "Entering Extended Passive Mode (|||port|).";
  this->operator[](230) = "User logged in, proceed. Logged out if appropriate.";
  this->operator[](231) = "User logged out; service terminated.";
  this->operator[](232) =
      "Logout command noted, will complete when transfer done.";
  this->operator[](234) =
      "Specifies that the server accepts the authentication mechanism "
      "specified by the client, and the exchange of security data is complete. "
      "A higher level nonstandard code created by Microsoft.";
  this->operator[](250) = "Requested file action okay, completed.";
  this->operator[](257) = "\" PATHNAME \" created.";
  this->operator[](331) = "User name okay, need password.";
  this->operator[](332) = "Need account for login.";
  this->operator[](350) = "Requested file action pending further information";
  this->operator[](421) =
      "Service not available, closing control connection. This may be a reply "
      "to any command if the service knows it must shut down.";
  this->operator[](425) = "Can't open data connection.";
  this->operator[](426) = "Connection closed; transfer aborted.";
  this->operator[](430) = "Invalid username or password";
  this->operator[](434) = "Requested host unavailable.";
  this->operator[](450) = "Requested file action not taken.";
  this->operator[](451) =
      "Requested action aborted. Local error in processing.";
  this->operator[](452) =
      "Requested action not taken. Insufficient storage space in system. File "
      "unavailable (e.g., file busy).";
  this->operator[](501) = "Syntax error in parameters or arguments.";
  this->operator[](502) = "Command not implemented.";
  this->operator[](503) = "Bad sequence of commands.";
  this->operator[](504) = "Command not implemented for that parameter.";
  this->operator[](530) = "Not logged in.";
  this->operator[](532) = "Need account for storing files.";
  this->operator[](534) = "Could Not Connect to Server - Policy Requires SSL";
  this->operator[](550) =
      "Requested action not taken. File unavailable (e.g., file not found, no "
      "access).";
  this->operator[](551) = "Requested action aborted. Page type unknown.";
  this->operator[](552) =
      "Requested file action aborted. Exceeded storage allocation (for current "
      "directory or dataset).";
  this->operator[](553) = "Requested action not taken. File name not allowed.";
  this->operator[](631) = "Integrity protected reply.";
  this->operator[](632) = "Confidentiality and integrity protected reply.";
  this->operator[](633) = "Confidentiality protected reply.";
}

std::string FtpReplyCodePrivateCodeToExplanation::Value(
    const int key, const std::string& default_value) const {
  auto iter = this->find(key);
  return iter == this->end() ? default_value : iter->second;
}
