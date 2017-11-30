
#pragma once
#include <string> 
using std::string;

//1
const int inch_in_foot = 12;
string height_in_feets_and_inches_to_str(int inches);

//2
const int foot_to_inch = 12;
const float inch_to_metres = 0.0254;
const float pound_to_kg_div = 2.2;
string bmi_to_str(int feet, int inches, int pounds);

//3
const float second_in_minute = 60;
const float minute_in_degree = 60;
string latitude_to_str(int degrees, int minutes, int seconds);

//4
const int seconds_in_minute = 60;
const int minutes_in_hour = 60;
const int hours_in_day = 24;
string time_to_str(long seconds);

//5
string population_percentage_to_str(long long world, long nation, int precision);

//6
float miles_per_gallon(float miles, float gallons);
float liters_per_100_kilometers(float kilometers, float liters);

//7
const float litres_in_gallon = 3.875;
const float miles_per_100km = 0.6214;
float liters_per_100_kilometers_to_miles_per_gallon(float liters_per_100_kilometers);
