#include "gtest/gtest.h"
#include "transformer.h"

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
