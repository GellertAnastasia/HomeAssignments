/* Anastasia Gellert st130144@student.spbu.ru
	assignment 5
*/

#include "gtest/gtest.h"
#include "autobot.h"

TEST(autobot, output)
{
    Autobot autobot(1,1);
    std::ostringstream oss;
    oss << autobot;
    EXPECT_EQ(oss.str(),"Autobot: wisdom = 1, luck = 1");
}
TEST(autobot, less)
{
    Autobot autobot1(1,1);
    Autobot autobot2(1,2);
    EXPECT_TRUE(autobot1 < autobot2);
}
TEST(autobot, more)
{
    Autobot autobot1(1,2);
    Autobot autobot2(1,1);
    EXPECT_TRUE(autobot1 > autobot2);
}
TEST(autobot, equality)
{
    Autobot autobot1(1,1);
    Autobot autobot2(1,1);
    EXPECT_TRUE(autobot1 == autobot2);
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
