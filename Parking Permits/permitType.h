#pragma once
#ifndef PERMITTYPE_H
#define PERMITTYPE_H

#include <iostream>

using namespace std;

class permitType
{

private:

	string permit;


public:
	//default constructors
	permitType() = default;
	permitType(char a, char s, char od, char pr, char c) {}

	//Getters
	string getAnnual() { return permit; }
	string getSemster() { return permit; }
	string getOneDay() { return permit; }
	string getParkNRide() { return permit; }
	string getCommuter() { return permit; }

	//Setters
	void setAnnual(char a);
	void setSemester(char s);
	void setOneDay(char od);
	void setParkNRide(char pr);
	void setCommuter(char c);
};
#endif

