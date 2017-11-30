#pragma once
#include <string> 
#include <array> 
using std::string;
using std::array;

//1
string name_and_grade_to_str(string first_name, string last_name, char grade);

//2
string name_and_dessert_to_str(string name, string dessert);

//3
string name_to_str(string first_name, string last_name);

//5
struct CandyBar
{
	string brand;
	float weight;
	int calories;
};

string func_return_struct(string brand, float weight, int calories);

//7
struct Pizza
{
	string company;
	float diameter;
	float weight;
};

string pizza_info_to_str(Pizza pizza);

//8
string pizza_info_to_str_2(Pizza * pizza);

//9
string snacks_to_str(CandyBar * snacks, int size);

//10
string times_and_average_to_str(array<float, 3> ar);//C++11 -std=c++11