#include "prata-c1-05.h"
#include "gtest/gtest.h"
#include <climits>

//1
TEST(SubBetweenTest, PositiveResult) 
{
	EXPECT_EQ(44, sub_between(2, 9));
	EXPECT_GT(INT_MAX, sub_between(20, 90)) << "Overflow int";//_GT par1 > par2
}
//2
TEST(FactorialToStrTest, StringTest) 
{
	EXPECT_EQ("1", factorial_to_str(0));
	EXPECT_EQ("1", factorial_to_str(1));
	EXPECT_EQ("6", factorial_to_str(3));
	EXPECT_EQ("479001600", factorial_to_str(12));
}
//4
TEST(ToStringTest, StringTest) 
{
	EXPECT_EQ("27", years_and_current_investments_to_str(100, 100));
}
//7
TEST(CarsToStrTest, StringTest)
{
	const int size = 2;
	Car * car = new Car [size];
	car[0].make = "Hudson Hornet";
	car[0].year =  1952;
	car[1].make = "Kaiser";
	car[1].year =  1951;

	EXPECT_EQ("1952 Hudson Hornet\n1951 Kaiser\n", cars_to_str(car, size));

	delete [] car;
}
//8
TEST(CountCharWordsTest, PositiveResult)
{
	const char * text = "anteater birthday category dumpster envy finagle geometry done for sure";

	EXPECT_EQ(7, sum_of_words(text));
}
//9
TEST(CountStringWordsTest, PositiveResult)
{
	string text = "anteater birthday category dumpster envy finagle geometry done for sure";

	EXPECT_EQ(7, sum_of_words(text));
}
//10
TEST(PrintSquareToStringTest, StringTest) 
{
	string test="....*\n...**\n..***\n.****\n*****\n";
	EXPECT_EQ(test, print_square_to_str(5));
}

int main(int argc, char **argv)
{
	printf("Running main() from prata-c1-02.cpp\n");

  	testing::InitGoogleTest(&argc, argv);

  	return RUN_ALL_TESTS();
}
