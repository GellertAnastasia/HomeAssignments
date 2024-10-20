/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#include "gtest/gtest.h"
#include "sword.h"

TEST(sword, strike)
{
	Sword sword;
	EXPECT_TRUE(sword.strike());
}
