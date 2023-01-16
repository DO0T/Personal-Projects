#pragma once
#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

using namespace std;

class Date
{
private: // default member initilization
	int month{1};
	int day{1};
	int year{1900};

public:

	Date() = default; // default constructor

	Date(int m, int d, int y) : month{ m }, day{ d }, year{ y } {} // constructor

	string static const MONTHS[12]; // const static array that will be used in print() to print out the months

	//Getters
	int getMonth() const { return month; }
	int getDay() const { return day; }
	int getYear() const { return year; }

	//Setters
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);

	//Methods
	string print();
	static bool compare(const Date& d1, const Date& d2);

};
#endif

