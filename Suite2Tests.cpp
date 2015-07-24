#include "gmock/gmock.h"

class Suite2Tests : public ::testing::Test
{
public:
};

TEST_F(Suite2Tests, SuccessfulTest2)
{
  ASSERT_TRUE(true);
}

TEST_F(Suite2Tests, SuccessfulTestWithPrintf2)
{
  printf("some different debug info\n");
  ASSERT_FALSE(false);
}

TEST_F(Suite2Tests, FailedTest)
{
  ASSERT_EQ(1, 2);
}

TEST_F(Suite2Tests, FailedTestWithPrintf2)
{
  printf("some more debug info\n");
  ASSERT_EQ(1, 2);
}

TEST_F(Suite2Tests, TestWithTwoFailures2)
{
  EXPECT_EQ(1, 2);
  EXPECT_STREQ("qwe", "123");
}

TEST_F(Suite2Tests, DISABLED_FailedTest2)
{
  ASSERT_FALSE(false);
}

TEST_F(Suite2Tests, DISABLED_CrashedTest2)
{
  int* p = NULL;
  *p = 5;

  ASSERT_FALSE(false);
}