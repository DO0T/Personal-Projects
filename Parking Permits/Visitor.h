#pragma once
#ifndef VISITOR_H
#define VISITOR_H

#include <string>

using namespace std;

class Visitor
{
private:
	string name;
	string address;
	string phoneNumber;
	string email;
	string driverNumber;

public:
	//default constructors
	Visitor() = default;
	Visitor(string n, string a, string p, string e, string dln) : name{ n }, address{ a }, phoneNumber{ p }, email{ e }, driverNumber{ dln } {}

	//Getters
	string getName() { return name; }
	string getAddress() { return address; }
	string getPhoneNumber() { return phoneNumber; }
	string getEmail() { return email; }
	string getDriversLicenseNumber() { return driverNumber; }

	//Setters
	void setName(string n);
	void setAddress(string a);
	void setPhoneNumber(string p);
	void setEmail(string e);
	void setDriversLicenseNumber(string dln);



};
#endif