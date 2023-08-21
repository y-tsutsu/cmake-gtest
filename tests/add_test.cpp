#include "add.h"

#include <gtest/gtest.h>

TEST(AddTest, BasicAddTest)
{
    EXPECT_EQ(add(42, 23), 65);
    EXPECT_NE(add(42, 23), 0);
}

TEST(AddTest, ZeroAddTest)
{
    EXPECT_EQ(add(42, 0), 42);
    EXPECT_EQ(add(0, 23), 23);
}
