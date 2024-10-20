/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#include "gtest/gtest.h"
#include "wheels.h"

TEST(wheels, fight)
{
	Wheels wheels;
	EXPECT_TRUE(wheels.move());
}
