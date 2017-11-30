#include "prata-c1-04.h"
#include <sstream>
using std::ostringstream;

//1
string name_and_grade_to_str(string first_name, string last_name, char grade)
{
	ostringstream outstr;
	outstr<<first_name<<"\n"<<last_name<<"\n"<<char(grade+1);
	return outstr.str();
}
//2
string name_and_dessert_to_str(string name, string dessert)
{
	ostringstream outstr;
	outstr<<"I have some delicious "<<dessert<<" for you, "<<name;
	return outstr.str();
}
//3
string name_to_str(string first_name, string last_name)
{
	ostringstream outstr;
	outstr<<last_name<<", "<<first_name;
	return outstr.str();
}
//5
string func_return_struct(string brand, float weight, int calories)
{
	ostringstream outstr;
	outstr<<brand<<", "<<weight<<", "<<calories;
	return outstr.str();
}
//7
string pizza_info_to_str(Pizza pizza)
{
	ostringstream outstr;
	outstr<<pizza.company<<" diameter: "<<pizza.diameter<<" weight: "<<pizza.weight ;
	return outstr.str();
}
//8
string pizza_info_to_str_2(Pizza * pizza)
{
	ostringstream outstr;
	outstr<<pizza->company<<" diameter: "<<pizza->diameter<<" weight: "<<pizza->weight ;
	return outstr.str();
}
//9
string snacks_to_str(CandyBar * snacks, int size)
{
	ostringstream outstr;
	outstr<<snacks[0].brand<<", "<<snacks[1].brand<<", "<<snacks[2].brand<<", size="<<size;
	return outstr.str();
}
//10
//C++11 -std=c++11
string times_and_average_to_str(array<float, 3> ar)
//const char * times_and_average_to_str(int ar[], int size)
{
	float result = 0;
	int size = ar.size();
	for (int i = 0; i < size; i++)
	{
		result += ar[i];
	}
	result = result / size;
	ostringstream outstr;
	outstr.precision(3);
	outstr<<result;
	return outstr.str();
}
