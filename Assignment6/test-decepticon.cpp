/* Anastasia Gellert st130144@student.spbu.ru
	assignment 5
*/

#include "gtest/gtest.h"
#include "decepticon.h"

TEST(decepticon, output)
{
    Decepticon decepticon(1,1);
    std::ostringstream oss;
    oss << decepticon;
    EXPECT_EQ(oss.str(),"Decepticon: anger = 1, dexterity = 1");
}
TEST(decepticon, less)
{
    Decepticon decepticon1(1,1);
    Decepticon decepticon2(2,1);
    EXPECT_TRUE(decepticon1 < decepticon2);
}
TEST(decepticon, more)
{
    Decepticon decepticon1(2,1);
    Decepticon decepticon2(1,1);
    EXPECT_TRUE(decepticon1 > decepticon2);
}
TEST(decepticon, equality)
{
    Decepticon decepticon1(1,1);
    Decepticon decepticon2(1,1);
    EXPECT_TRUE(decepticon1 == decepticon2);
}

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
