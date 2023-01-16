#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
private:

	string name;
	string address;
	string email;
	string phoneNumber;
	string driverNumber;

	int CUID{ 0 }; // default value

public:
	//default constructors
	Student() = default;
	Student(string n, string a, string e, string p, string dln, int id) : name{ n }, address{ a }, email{ e }, phoneNumber{ p }, driverNumber{ dln }, CUID{ id } {}

	//Getters
	string getName() { return name; }
	string getAddress() { return address; }
	string getEmail() { return email; }
	string getPhoneNumber() { return phoneNumber; }
	string getDriversLicenseNumber() { return driverNumber; }
	int getCUID() { return CUID; }

	//Setters
	void setName(string n);
	void setAddress(string a);
	void setEmail(string e);
	void setPhoneNumber(string p);
	void setDriversLicenseNumber(string dln);
	void setCUID(int id);

};
#endif

