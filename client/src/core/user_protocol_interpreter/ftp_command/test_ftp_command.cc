#include <gtest/gtest.h>

#include "ftp_command.h"

using namespace testing;

TEST(TestFtpCommand, TestValidString) {
  auto command = FtpCommand("ABOR abcd\r\n");
  EXPECT_EQ(command.GetCode(), FtpCommand::CodeType::kAbor);
  EXPECT_EQ(command.GetArgument(), "abcd");
}

TEST(TestFtpCommand, TestValidEmptyArgument) {
  auto command = FtpCommand("ABOR \r\n");
  EXPECT_EQ(command.GetCode(), FtpCommand::CodeType::kAbor);
  EXPECT_EQ(command.GetArgument(), "");
}

TEST(TestFtpCommand, TestInvalidString) {
  auto command = FtpCommand("ABOR \r");
  EXPECT_FALSE(command.GetCode().IsValid());
  EXPECT_EQ(command.GetArgument(), "");
}

TEST(TestFtpCommand, TestValidToString) {
  auto command = FtpCommand(FtpCommand::CodeType::kAbor, "abcd");
  EXPECT_EQ(command.GetString(), "ABOR abcd\r\n");
}

TEST(TestFtpCommand, TestInvalidToString) {
  auto command = FtpCommand();
  EXPECT_EQ(command.GetString(), "");
}
