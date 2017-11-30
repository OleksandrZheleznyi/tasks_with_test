#include "prata-c1-02.h"
#include <sstream>
using std::ostringstream;
//1
string GetNameAddress() 
{
	ostringstream outstr;
	outstr<<"Sasha Bulvarna street";
	return outstr.str();
}
//2
int yard(int farlong)
{
	return farlong * 220;
}
//3
void first_second()
{
	first();
	first();
	second();
	second();
}
string first()
{
	string stf = "Three blind mice";
	return stf;
}
string second()
{
	string sts = "See how they run";
	return sts;
}
//4
int age_in_months(int age)
{
	return age * 12;
}
//5
double to_fahrenheit(double celsius)
{
	return 1.8 * celsius + 32;
}
//6
double to_astro_units(double years)
{
	return years * 63240;
}
//7
string to_time(int h, int m)
{
	ostringstream outstr;
	outstr<<h<<":"<<m;
	return outstr.str();
}
