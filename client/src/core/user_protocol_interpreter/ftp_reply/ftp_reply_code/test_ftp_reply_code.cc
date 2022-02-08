#include <gtest/gtest.h>

using namespace testing;

#include "ftp_reply_code.h"

TEST(TestFtpReplyCode, TestValidInt) {
  auto code = FtpReplyCode(110);
  EXPECT_EQ(code, 110);
  EXPECT_NE(code.GetExplanation(), "");
}

TEST(TestFtpReplyCode, TestValidString) {
  auto code = FtpReplyCode("110");
  EXPECT_EQ(code, 110);
  EXPECT_NE(code.GetExplanation(), "");
}

TEST(TestFtpReplyCode, TestInvalidInt) {
  auto code = FtpReplyCode(1000);
  EXPECT_EQ(code, -1);
  EXPECT_EQ(code.GetExplanation(), "");
}

TEST(TestFtpReplyCode, TestInvalidString) {
  auto code = FtpReplyCode("11");
  EXPECT_EQ(code, -1);
  EXPECT_EQ(code.GetExplanation(), "");
}

TEST(TestFtpReplyCode, TestOutOfRange) {
  auto code = FtpReplyCode("9999999999999999");
  EXPECT_EQ(code, -1);
  EXPECT_EQ(code.GetExplanation(), "");
}

TEST(TestFtpReplyCode, TestValidToString) {
  auto code = FtpReplyCode(110);
  EXPECT_EQ(code.GetString(), "110");
}

TEST(TestFtpReplyCode, TestInvalidToString) {
  auto code = FtpReplyCode(1);
  EXPECT_EQ(code.GetString(), "");
}
