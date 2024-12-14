/* Anastasia Gellert st130144@student.spbu.ru
	assignment 5
*/

#include "gtest/gtest.h"
#include "airbot.h"

TEST(airbot, output)
{
    Airbot airbot(1,1);
    std::ostringstream oss;
    oss << airbot;
    EXPECT_EQ(oss.str(),"Airbot: speed = 1, bravery = 1");
}
TEST(airbot, less)
{
    Airbot airbot1(1,1);
    Airbot airbot2(2,1);
    EXPECT_TRUE(airbot1 < airbot2);
}
TEST(airbot, more)
{
    Airbot airbot1(2,1);
    Airbot airbot2(1,1);
    EXPECT_TRUE(airbot1 > airbot2);
}
TEST(airbot, equality)
{
    Airbot airbot1(1,1);
    Airbot airbot2(1,1);
    EXPECT_TRUE(airbot1 == airbot2);
}

TEST(airbot, fly)
{
    Airbot airbot(1,1);
    EXPECT_TRUE(airbot.fly());
}

TEST(airbot, GetSpeed)
{
    Airbot airbot(1,1);
    EXPECT_EQ(airbot.GetSpeed(), 1);
}

TEST(airbot, GetBravery)
{
    Airbot airbot(1,1);
    EXPECT_EQ(airbot.GetBravery(), 1);
}

TEST(airbot, SetSpeed)
{
    Airbot airbot(1,1);
    airbot.SetSpeed(2);
    EXPECT_EQ(airbot.GetSpeed(), 2);
}
TEST(airbot, SetBravery)
{
    Airbot airbot(1,1);
    airbot.SetBravery(2);
    EXPECT_EQ(airbot.GetBravery(), 2);
}

