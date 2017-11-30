#include "prata-c1-03.h"
#include <sstream>
using std::ostringstream;
//1
string height_in_feets_and_inches_to_str(int inches)
{
	int foot = inches / inch_in_foot;
	int inch = inches % inch_in_foot;
	ostringstream outstr;
	outstr<<foot<<"."<<inch;
	return outstr.str();
}
//2
string bmi_to_str(int feet, int inches, int pounds)
{
	float metr = (feet * foot_to_inch + inches) * inch_to_metres;
	float kg = pounds / pound_to_kg_div;
	float BMI = kg / (metr * metr);
	ostringstream outstr;
	outstr<<BMI;
	return outstr.str();
}

//3
string latitude_to_str(int degrees, int minutes, int seconds)
{
	float minutes_all = minutes + seconds/second_in_minute;
	float degrees_all = degrees + minutes_all/minute_in_degree;
	ostringstream outstr;
	outstr<<degrees_all;
	return outstr.str();
}	
//4
string time_to_str(long seconds)
{
	long minutes_all = seconds / seconds_in_minute;
	long second = seconds % seconds_in_minute;
	long minutes = minutes_all % seconds_in_minute;
	long hours_all = minutes_all/minutes_in_hour;
	long hours = hours_all % minutes_in_hour;
	long days = hours_all / hours_in_day;
	ostringstream outstr;
	outstr<<seconds<<" seconds = "<<days<<" days, "<<hours<<" hours, "
		  <<minutes<<" minutes, "<<second<<" seconds";
	return outstr.str();	
}
//5
string population_percentage_to_str(long long world, long nation, int precision)
{
	double percent = double(nation) / double(world) * 100;
	ostringstream outstr;
	outstr.precision(precision);
	outstr<<percent<<"\%";
	return outstr.str();
}
//6
float miles_per_gallon(float miles, float gallons)
{
	return miles / gallons;
}
float liters_per_100_kilometers(float kilometers, float liters)
{
	return 100 * liters / kilometers;
}
//7
float liters_per_100_kilometers_to_miles_per_gallon(float liters_per_100_kilometers)
{
	return  (int)(100 * miles_per_100km) / (int)(liters_per_100_kilometers / litres_in_gallon);
}
