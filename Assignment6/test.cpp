/* Anastasia Gellert st130144@student.spbu.ru
	assignment 6
*/

#include <gtest/gtest.h>
#include "class.h"
#include "obj.h"


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(specialization, testInt)
{
    Class<int> n(1, 1, {});
    EXPECT_TRUE(n.foo());
}
TEST(specialization, testDouble)
{
    Class<double> n(1.1, 1, {});
    EXPECT_FALSE(n.foo());
}


TEST(Class1, True)
{
    Class1 obj;
    Class<Class1> n(obj, 1, {});
    EXPECT_TRUE(n.foo());
}
TEST(Class1, False)
{
    Class1 obj;
    Class<Class1> n(obj, 0, {});
    EXPECT_FALSE(n.foo());
}

TEST(Class2, True)
{
    Class2 obj;
    Class<Class2> n(obj, 0, {1, 2});
    EXPECT_TRUE(n.foo());
}
TEST(Class2, False)
{
    Class2 obj;
    Class<Class2> n(obj, 0, {});
    EXPECT_FALSE(n.foo());
}

TEST(Class3, True)
{
    Class3 obj;
    Class<Class3> n(obj, -3, {1, 2, 3});
    EXPECT_TRUE(n.foo());
}
TEST(Class3, False)
{
    Class3 obj;
    Class<Class3> n(obj, -2, {1, 2, 3});
    EXPECT_FALSE(n.foo());
}

