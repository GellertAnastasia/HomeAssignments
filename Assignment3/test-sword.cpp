#include "gtest/gtest.h"
#include "sword.h"

TEST(sword, strike)
{
	Sword sword;
	EXPECT_TRUE(sword.strike());
}
