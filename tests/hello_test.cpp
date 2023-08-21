#include <gtest/gtest.h>

TEST(HelloTest, BasicHelloTest)
{
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}
