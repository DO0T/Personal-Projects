#include "Date.h"
#include <sstream> //string stream
#include<iomanip> // used to manipulate output

using namespace std;

// Sets each constant MONTHS element equal to the corresponding month ex: MONTHS[1] = "JANUARY"
const string Date::MONTHS[12] = { "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER" };

//Setters
void Date::setDay(int d) 
{
	day = d;
}

void Date::setMonth(int m) 
{
	month = m;
}

void Date::setYear(int y) 
{
	year = y;
}

string Date::print() 
{
	stringstream stringStream;

	stringStream << left << setw(10) << MONTHS[month - 1]; // prints the date justified to the left with setw = to the amount of pixels justified in said direciton
	stringStream << left << setw(3) << day; // justified to a width of 3 characters
	stringStream << left << setw(5) << year; // justified to a width of 5 characters
	
	return stringStream.str(); // returns the the reformatted date
}

bool Date::compare(const Date &d1, const Date& d2) 
{
	bool isEqual = false;

	if (d1.getYear() == d2.getYear()) 
	{
		if (d1.getMonth() == d2.getMonth()) 
		{
			if (d1.getDay() == d2.getDay()) 
			{
				isEqual = false;
			}
			else if (d1.getDay() > d2.getDay()) 
			{
				isEqual = false;
			}
			else if (d1.getDay() < d2.getDay()) 
			{
				isEqual = true;
			}
		}
		else if (d1.getMonth() > d2.getMonth()) 
		{
			isEqual = false;
		}
		else if (d1.getMonth() < d2.getMonth()) 
		{
			isEqual = true;
		}
	}
	else if (d1.getYear() > d2.getYear()) 
	{
		isEqual = false;
	}
	else if (d1.getYear() < d2.getYear()) 
	{
		isEqual = true;
	}

	if (d1.getYear() == d2.getYear()) 
	{
		if (d1.getMonth() == d2.getMonth()) 
		{
			if (d1.getDay() == d2.getDay()) 
			{
				isEqual = true;
			}
		}
	}
	return isEqual;
}
