/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#include "gtest/gtest.h"
#include "airbot.h"

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

