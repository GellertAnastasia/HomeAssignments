#include "gtest/gtest.h"
#include "autobot.h"

TEST(autobot, transform)
{
	Autobot autobot(1,1);
	EXPECT_TRUE(autobot.transform());
}

TEST(autobot, GetWisdom)
{
	Autobot autobot(1,1);
	EXPECT_EQ(autobot.GetWisdom(), 1);
}

TEST(autobot, GetLuck)
{
	Autobot autobot(1,1);
	EXPECT_EQ(autobot.GetLuck(), 1);
}

TEST(autobot, SetWisdom)
{
	Autobot autobot(1,1);
	autobot.SetWisdom(2);
	EXPECT_EQ(autobot.GetWisdom(), 2);
}
TEST(autobot, SetLuck)
{
	Autobot autobot(1,1);
	autobot.SetLuck(2);
	EXPECT_EQ(autobot.GetLuck(), 2);
}
