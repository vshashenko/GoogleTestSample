#include "gmock/gmock.h"

class Suite1Tests : public ::testing::Test
{
public:
};

TEST_F(Suite1Tests, SuccessfulTest)
{
  ASSERT_TRUE(true);
}

TEST_F(Suite1Tests, SuccessfulTestWithPrintf)
{
  printf("some debug info\n");
  ASSERT_FALSE(false);
}

TEST_F(Suite1Tests, FailedTest)
{
  ASSERT_EQ(1, 2);
}

TEST_F(Suite1Tests, FailedTestWithPrintf)
{
  printf("some another debug info\n");
  ASSERT_EQ(1, 2);
}


TEST_F(Suite1Tests, TestWithTwoFailures)
{
  EXPECT_EQ(1, 2);
  EXPECT_STREQ("qwe", "123");
}

TEST_F(Suite1Tests, DISABLED_FailedTest)
{
  ASSERT_FALSE(false);
}

TEST_F(Suite1Tests, DISABLED_CrashedTest)
{
  int* p = NULL;
  *p = 5;

  ASSERT_FALSE(false);
}