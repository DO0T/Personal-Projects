#pragma once
#ifndef VENDOR_H
#define VENDOR_H

#include <string>

using namespace std;

class Vendor
{
private:

	string name;
	string email;
	string companyName;
	string phoneNumber;

	int employeeID{0}; // default value

public:
	//default constructors
	Vendor() = default;
	Vendor(string n, string e, string cn, string p, int id) : name{ n }, email{ e }, companyName{ cn }, phoneNumber{ p }, employeeID{ id } {}

	//Getters
	string getName() { return name; }
	string getEmail() { return email; }
	string getCompanyName() { return companyName; }
	string getPhoneNumber() { return phoneNumber; }
	int getEmployeeID() { return employeeID; }

	//Setters
	void setName(string n);
	void setEmail(string e);
	void setCompanyName(string cn);
	void setPhoneNumber(string p);
	void setEmployeeID(int id);
};
#endif