#include "gtest/gtest.h"
#include "decepticon.h"

TEST(decepticon, fight)
{
	Decepticon decepticon(1,1);
	EXPECT_TRUE(decepticon.fight());
}

TEST(decepticon, GetAnger)
{
	Decepticon decepticon(1,1);
	EXPECT_EQ(decepticon.GetAnger(), 1);
}

TEST(decepticon, GetDexterity)
{
	Decepticon decepticon(1,1);
	EXPECT_EQ(decepticon.GetDexterity(), 1);
}

TEST(decepticon, SetAnger)
{
	Decepticon decepticon(1,1);
	decepticon.SetAnger(2);
	EXPECT_EQ(decepticon.GetAnger(), 2);
}
TEST(decepticon, SetDexterity)
{
	Decepticon decepticon(1,1);
	decepticon.SetDexterity(2);
	EXPECT_EQ(decepticon.GetDexterity(), 2);
}
