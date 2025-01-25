#include "leetcode/two_sum.hpp"

#include <gtest/gtest.h>

TEST(TmpAddTest, CheckValues)
{
  vector<int> nums {2,7,11,15};
  int target = 9;
  ASSERT_EQ(Solution::twoSum(&nums, target), {0, 1});
  EXPECT_TRUE(true);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
