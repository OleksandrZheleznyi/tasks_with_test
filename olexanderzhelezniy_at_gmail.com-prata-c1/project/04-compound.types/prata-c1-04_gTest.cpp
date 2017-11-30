#include "prata-c1-04.h"
#include "gtest/gtest.h"

//1 
TEST(StringNameAndGradeTest, OutString) 
{
	EXPECT_EQ("Betty Sue\nYewe\nC", name_and_grade_to_str("Betty Sue", "Yewe", 'B'));
}
//2
TEST(StringNameAndDessertTest, OutString) 
{
	EXPECT_EQ("I have some delicious Radish Torte for you, Dirk Hammernose",
				 name_and_dessert_to_str("Dirk Hammernose", "Radish Torte"));
}
//3
TEST(StringNameTest, OutString) 
{
	EXPECT_EQ("Flip, Fleming", name_to_str("Fleming", "Flip"));
}
//5
TEST(StringCandyStructTest, OutString)
{
	EXPECT_EQ("Mocha Munch, 2.3, 350", func_return_struct("Mocha Munch", 2.3, 350));
}
//7
TEST(StringPizzaStructTest, OutString)
{
	Pizza temp = {"Sasha Pizza", 14, 450};
	EXPECT_EQ("Sasha Pizza diameter: 14 weight: 450", pizza_info_to_str(temp));
}
//8
TEST(StringPizzaStructTest, OutStringPoint)
{
	Pizza * temp = new Pizza;
	temp->company = "Sasha Pizza";
	temp->diameter = 14;
	temp->weight = 450;
	EXPECT_EQ("Sasha Pizza diameter: 14 weight: 450", pizza_info_to_str_2(temp));
	delete temp;
}
//9
TEST(StringCandyStructTest, OutStringPoint)
{
	CandyBar * snack = new CandyBar [3];
	snack[0].brand = "Sasha Pizza";
	snack[0].weight =  14;
	snack[0].calories = 450;

	snack[1].brand = "Olya Pizza";
	snack[1].weight =  10;
	snack[1].calories = 200;

	snack[2].brand = "Kolya Pizza";
	snack[2].weight =  18;
	snack[2].calories = 800;

	EXPECT_EQ("Sasha Pizza, Olya Pizza, Kolya Pizza, size=3", snacks_to_str(snack, 3));

	delete [] snack;
}
//10
TEST(StringTimesAndAverageTest, PositiveResult) 
{
	array<float, 3> arr = {2.3, 3.8, 5.2};
	EXPECT_EQ("3.77", times_and_average_to_str(arr));
}

int main(int argc, char **argv)
{
	printf("Running main() from prata-c1-02.cpp\n");

  	testing::InitGoogleTest(&argc, argv);

  	return RUN_ALL_TESTS();
}