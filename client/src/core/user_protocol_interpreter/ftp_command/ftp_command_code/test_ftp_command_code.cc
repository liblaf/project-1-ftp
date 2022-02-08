#include <gtest/gtest.h>

#include "ftp_command_code.h"

using namespace testing;

TEST(TestFtpCommandCode, TestValidEnum) {
  auto code = FtpCommandCode(FtpCommandCode::kAbor);
  EXPECT_TRUE(code.IsValid());
  EXPECT_EQ(code.GetEnum(), FtpCommandCode::kAbor);
  EXPECT_EQ(code.GetString(), "ABOR");
  EXPECT_EQ(code.GetRfc(), "");
  EXPECT_EQ(code.GetDescription(), "Abort an active file transfer.");
}

TEST(TestFtpCommandCode, TestValidLowerCase) {
  auto code = FtpCommandCode("abor");
  EXPECT_TRUE(code.IsValid());
  EXPECT_EQ(code.GetEnum(), FtpCommandCode::kAbor);
  EXPECT_EQ(code.GetString(), "ABOR");
  EXPECT_EQ(code.GetRfc(), "");
  EXPECT_EQ(code.GetDescription(), "Abort an active file transfer.");
}

TEST(TestFtpCommandCode, TestValidUpperCase) {
  auto code = FtpCommandCode("ABOR");
  EXPECT_TRUE(code.IsValid());
  EXPECT_EQ(code.GetEnum(), FtpCommandCode::kAbor);
  EXPECT_EQ(code.GetString(), "ABOR");
  EXPECT_EQ(code.GetRfc(), "");
  EXPECT_EQ(code.GetDescription(), "Abort an active file transfer.");
}

TEST(TestFtpCommandCode, TestInvalidEnum) {
  auto code = FtpCommandCode(static_cast<FtpCommandCode::Enum>(123456));
  EXPECT_FALSE(code.IsValid());
  EXPECT_EQ(code.GetEnum(), FtpCommandCode::kUnknownFtpCommandCode);
  EXPECT_EQ(code.GetString(), "");
  EXPECT_EQ(code.GetRfc(), "");
  EXPECT_EQ(code.GetDescription(), "");
}

TEST(TestFtpCommandCode, TestInvalidString) {
  auto code = FtpCommandCode("ABCD");
  EXPECT_FALSE(code.IsValid());
  EXPECT_EQ(code.GetEnum(), FtpCommandCode::kUnknownFtpCommandCode);
  EXPECT_EQ(code.GetString(), "");
  EXPECT_EQ(code.GetRfc(), "");
  EXPECT_EQ(code.GetDescription(), "");
}

// int main(int argc, char *argv[]) {
//   InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }
