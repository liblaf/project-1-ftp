#include <gtest/gtest.h>

#include "ftp_command.h"

using namespace testing;

TEST(TestFtpCommand, TestValidString) {
  char input[] = "ABOR ab12\0\r\n";
  char argument[] = "ab12\0";
  auto command = FtpCommand(std::string(input, sizeof(input) - sizeof(char)));
  EXPECT_TRUE(command.IsValid());
  EXPECT_EQ(command.GetCode(), FtpCommand::CodeType::kAbor);
  EXPECT_EQ(command.GetArgument(),
            std::string(argument, sizeof(argument) - sizeof(char)));
}

TEST(TestFtpCommand, TestValidEmptyArgument) {
  auto command = FtpCommand("ABOR \r\n");
  EXPECT_TRUE(command.IsValid());
  EXPECT_EQ(command.GetCode(), FtpCommand::CodeType::kAbor);
  EXPECT_EQ(command.GetArgument(), "");
}

TEST(TestFtpCommand, TestInvalidString) {
  auto command = FtpCommand("ABOR \r");
  EXPECT_FALSE(command.IsValid());
}

TEST(TestFtpCommand, TestValidToString) {
  char output[] = "ABOR ab12\0\r\n";
  char argument[] = "ab12\0";
  auto command = FtpCommand(
      FtpCommand::CodeType::kAbor,
      FtpCommand::ArgumentType(argument, sizeof(argument) - sizeof(char)));
  EXPECT_EQ(command.GetString(),
            std::string(output, sizeof(output) - sizeof(char)));
}

TEST(TestFtpCommand, TestInvalidToString) {
  auto command = FtpCommand();
  EXPECT_EQ(command.GetString(), "");
}
