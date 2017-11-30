#include "prata-c1-05.h"
#include <sstream>
#include <cstring>
using std::ostringstream;
using std::to_string;

//1
int sub_between(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{	
		sum += i;
	}	
	return sum;
}
//2
string factorial_to_str(int i)
{
	if ( i==0 )
		return "1";
	long long result = 1;
	for (int k = 1; k <= i; k++)
	{	
		result *= k;
	}	
	ostringstream outstr;
	outstr<<result;
	return outstr.str();
}
//4
string years_and_current_investments_to_str(float daphne_original_investment, float cleo_original_investment)
{
	float money = 100;
	int i = 0;
	for ( i=1; cleo_original_investment <= daphne_original_investment; i++)
	{
		daphne_original_investment = daphne_original_investment + 0.1 * money; 
		cleo_original_investment = 	cleo_original_investment + 0.05 * cleo_original_investment;
	}
	ostringstream outstr;
	outstr<<--i;
	return outstr.str();
}
//7
string cars_to_str(Car * car, int size)
{
	string temp = "";
	for (int i = 0; i < size; i++)
	{
		temp += to_string(car[i].year) + " " + car[i].make + "\n";	
	}
	ostringstream outstr;
	outstr<<temp;
	return outstr.str();
}
//8
int sum_of_words(const char * text)
{
	int count=0;
	for ( int i=0 ; text[i]!='d' || text[i+1]!='o' || text[i+2]!='n' || text[i+3]!='e'; i++)
	{	
		if (isspace(text[i]))
		{
			count++;
		}
	}
	return count;
}
//9
int sum_of_words(string text)
{
	int count=0;
	for ( int i=0 ; text[i]!='d' || text[i+1]!='o' || text[i+2]!='n' || text[i+3]!='e'; i++)
	{	
		if (isspace(text[i]))
		{
			count++;
		}
	}
	return count;
}
//10
string print_square_to_str(int num)
{
	string temp = "";
	for (int i=1; i<=num; i++)
	{
		for (int j=0; j<num-i; j++)
		{
			temp += ".";
		}
		for (int k=0; k<i; k++)
		{
			temp += "*";
		}
		temp += "\n";
	}
	ostringstream outstr;
	outstr<<temp;
	return outstr.str();
}
