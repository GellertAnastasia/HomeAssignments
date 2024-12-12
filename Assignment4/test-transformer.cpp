/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#include "gtest/gtest.h"
#include "transformer.h"

int main(int argc, char **argv) {    
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(transformer, output)
{
	Transformer transformer(1,1);
	std::ostringstream oss;
	oss << transformer;
	EXPECT_EQ(oss.str(),"Трансформер: уровень = 1, сила = 1");
}
TEST(transformer, less)
{
	Transformer transformer1(1,1);
	Transformer transformer2(1,2);
	EXPECT_TRUE(transformer1 < transformer2);
}
TEST(transformer, more)
{
	Transformer transformer1(1,2);
	Transformer transformer2(1,1);
	EXPECT_TRUE(transformer1 > transformer2);
}
TEST(transformer, equality)
{
	Transformer transformer1(1,1);
	Transformer transformer2(1,1);
	EXPECT_TRUE(transformer1 == transformer2);
}

TEST(transformer, fire)
{
	Transformer transformer;
	EXPECT_TRUE(transformer.fire());
}
TEST(transformer, ultimate)
{
	Transformer transformer;
	EXPECT_TRUE(transformer.ultimate());
}
TEST(transformer, jump)
{
	Transformer transformer;
	EXPECT_TRUE(transformer.jump());
}
TEST(transformer, move)
{
	Transformer transformer;
	EXPECT_TRUE(transformer.move());
}
TEST(transformer, strike)
{
	Sword sword;
	Transformer transformer;
	EXPECT_TRUE(transformer.strike(sword));
}


TEST(transformer, GetLevel)
{
	Transformer transformer(1,1);
	EXPECT_EQ(transformer.GetLevel(), 1);
}
TEST(transformer, GetStrength)
{
	Transformer transformer(1,1);
	EXPECT_EQ(transformer.GetStrength(), 1);
}


TEST(transformer, SetLevel)
{
	Transformer transformer(1,1);
	transformer.SetLevel(2);
	EXPECT_EQ(transformer.GetLevel(), 2);
}
TEST(transformer, SetStrength)
{
	Transformer transformer(1,1);
	transformer.SetStrength(2);
	EXPECT_EQ(transformer.GetStrength(), 2);
}


TEST(transformer, fuel)
{
	Transformer transformer;
	transformer.SetFuel(2);
	EXPECT_EQ(transformer.GetFuel(), 2);
}
TEST(transformer, ammo)
{
	Transformer transformer;
	transformer.SetAmmo(2);
	EXPECT_EQ(transformer.GetAmmo(), 2);
}
