#include "prata-c1-03.h"
#include "gtest/gtest.h"
//1
TEST(StringConversionTest, ToStringTest1) 
{
	EXPECT_EQ("2.1", height_in_feets_and_inches_to_str(25));
}
//2
TEST(StringConversionTest, ToStringTest2) 
{
	EXPECT_EQ("4.5091", bmi_to_str(10, 5, 100));
}
//3
TEST(StringConversionTest, ToStringTest3) 
{
	EXPECT_EQ("37.8553", latitude_to_str(37, 51, 19));
}
//4
TEST(StringConversionTest, ToStringTest4) 
{
	EXPECT_EQ("31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds", time_to_str(31600000));
}
//5
TEST(StringConversionTest, ToStringTest5) 
{
	EXPECT_EQ("4.50492\%", population_percentage_to_str(6898758899, 310783781, 6));
}
//6
TEST(MilesPerGallonTest, PositiveResult) 
{
	EXPECT_EQ(5, miles_per_gallon(100, 20));
	EXPECT_EQ(20, liters_per_100_kilometers(50, 10));
}
//7
TEST(LitersPer100KilometersToMilesPerGallon, PositiveResult) 
{
	EXPECT_EQ(20, liters_per_100_kilometers_to_miles_per_gallon(12.4));
	EXPECT_EQ(31, liters_per_100_kilometers_to_miles_per_gallon(8.7));
}

int main(int argc, char **argv)
{
	printf("Running main() from prata-c1-02.cpp\n");

  	testing::InitGoogleTest(&argc, argv);

  	return RUN_ALL_TESTS();
}