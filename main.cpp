#include "gtest/gtest.h"

int main(int argc, char *argv[])
{
  for (int i = 1; i < argc; i++)
  {
    if (strcmp(argv[i], "--no-gtest") == 0)
    {
      printf("Non-gtest mode.\n");
      return 0;
    }
  }

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}