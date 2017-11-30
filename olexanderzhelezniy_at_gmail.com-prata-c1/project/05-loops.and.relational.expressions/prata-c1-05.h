#pragma once
#include <string>
using std::string;

//1
int sub_between(int a, int b);

//2
string factorial_to_str(int i);

//4
const float daphne_interest = 0.1;
const float cleo_interest = 0.05;
string years_and_current_investments_to_str(float daphne_original_investment, float cleo_original_investment);

//7
struct Car
{
	string make;
	int year;
};
string cars_to_str(Car * car, int size);

//8
int sum_of_words(const char * text);

//9
int sum_of_words(string text);

//10
string print_square_to_str(int num);