#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
private:
	int employeeID{0};
	int socialSecurity{0};
	string name;
	string address;
	string phoneNumber;
	string driverNumber;


public:
	//Default constructors
	Employee() = default;
	Employee(int id, int ss, string n, string a, string pn, string dln) : employeeID{ id }, socialSecurity{ ss }, name{ n }, address{ a }, phoneNumber{ pn }, driverNumber{ dln } {}

	
	//Getters
	int getEmployeeID() { return employeeID; }
	int getsocialSecurity() { return socialSecurity; }
	string getName() { return name; }
	string getAddress() { return address; }
	string getPhoneNumber() { return phoneNumber; }
	string getDriversLicenseNumber() { return driverNumber; }

	//Setters
	void setEmployeeID(int id);
	void setSocialSecurity(int ss);
	void setName(string n);
	void setAddress(string a);
	void setPhoneNumber(string pn);
	void setDriversLicenseNumber(string dln);
};
#endif