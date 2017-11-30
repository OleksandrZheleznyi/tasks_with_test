#include "prata-c1-02.h"
#include "gtest/gtest.h"
#include <cfloat>
#include <climits>

//1
TEST(StringTest, GetNameAddress) 
{
	string temp = "Sasha Bulvarna street";
	EXPECT_EQ(temp, GetNameAddress());
}
//2
TEST(YardTest, PositiveResult) 
{
	EXPECT_EQ(220, yard(1));
	EXPECT_EQ(2200, yard(10));
	EXPECT_EQ(22000, yard(100));
	//Checking of incoming parameters
	EXPECT_LT(0, yard(1)) << "Input parametr < 0";//_LT par1 < par2
	EXPECT_GT(INT_MAX, yard(100000)) << "Overflow int";//_GT par1 > par2
}
//3
TEST(StrigFirstSecondTest, OutFirstSecond) 
{
	EXPECT_EQ("Three blind mice", first());
	EXPECT_EQ("See how they run", second());
}
//4
TEST(AgeInMonthsTest, PositiveResult) 
{
	EXPECT_EQ(120, age_in_months(10));
	EXPECT_EQ(240, age_in_months(20));
	EXPECT_EQ(600, age_in_months(50));
	//Checking of incoming parameters
	EXPECT_LT(0, age_in_months(1)) << "Input parametr < 0";//_LT par1 < par2
	EXPECT_GT(INT_MAX, age_in_months(100000)) << "Overflow int";//_GT par1 > par2
}
//5
TEST(ToFahrenheitTest, PositiveResult) 
{
	EXPECT_EQ(50, to_fahrenheit(10));
	EXPECT_EQ(68, to_fahrenheit(20));
	EXPECT_EQ(212, to_fahrenheit(100));
	//Checking of incoming parameters
	EXPECT_LT(0, to_fahrenheit(1)) << "Input parametr < 0";//_LT par1 < par2
	EXPECT_GT(DBL_MAX, to_fahrenheit(100000)) << "Overflow double";//_GT par1 > par2
}
//6
TEST(ToAstroUnitsTest, PositiveResult) 
{
	EXPECT_EQ(63240, to_astro_units(1));
	//Checking of incoming parameters
	EXPECT_LT(0, to_astro_units(1)) << "Input parametr < 0";//_LT par1 < par2
	EXPECT_GT(DBL_MAX, to_astro_units(100000)) << "Overflow double";//_GT par1 > par2
}
//7
TEST(StringTimeTest, StringToTime) 
{
	EXPECT_EQ("9:28", to_time(9, 28));
}

//
int main(int argc, char **argv)
{
	printf("Running main() from prata-c1-02.cpp\n");

  	testing::InitGoogleTest(&argc, argv);

  	return RUN_ALL_TESTS();
}