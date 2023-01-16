// Dawson Tomes CPSC 1021 Lab 5 Parking Permits
#include <iostream>
#include <string>

// Header Files
#include "Car.h"
#include "LowEmissionVehicle.h"
#include "Motorcycle.h"
#include "Moped.h"

#include "Employee.h"
#include "Student.h"
#include "Visitor.h"
#include "Vendor.h"

#include "permitType.h"
#include "Invoice.h"

using namespace std;

int main() 
{
	// Used for logic depending on user input
	char userChoice{};
	char vehicleChoice{};
	char permitChoice{};
	
	// Stores user data
	string name;
	string address;
	string email;
	string phoneNumber;
	string driverNumber;
	string companyName;

	string make;
	string model;
	string licensePlate;
	string color;

	int employeeID;
	int socialSecurity;
	int year;
	int CUID;

	// Objects
	Car car;
	LowEmissionVehicle lowEmissionVehicle;
	Motorcycle motorcyle;
	Moped moped;

	Employee employee;
	Student student;
	Visitor visitor;
	Vendor vendor;

	permitType permitType;
	Invoice invoice;

	cout << "What type of permit would you like to purchase? Employee (E), Student (S), Visitor (V), Vendor (D) ";
	cin >> userChoice;

	if (userChoice == 'E')  // if User is an employee
	{
		cout << "Please enter your name: ";
		cin.ignore(); 
		getline(cin, name); // Get line allows the user to input white space when entering a string
		employee.setName(name); // calls the setter function

		cout << "Please enter your employee ID (no spaces): ";
		cin >> employeeID;
		employee.setEmployeeID(employeeID); // calls the setter function

		cout << "Please enter your address: ";
		cin.ignore();
		getline(cin, address); // Allows spaces
		employee.setAddress(address);

		cout << "Please enter your social secruity number (no spaces): ";
		cin >> socialSecurity;
		employee.setSocialSecurity(socialSecurity);

		cout << "Please enter your phone number: ";
		cin >> phoneNumber;
		employee.setPhoneNumber(phoneNumber);

		cout << "Please enter your driver's license number: ";
		cin >> driverNumber;
		employee.setDriversLicenseNumber(driverNumber);

		cout << "Please choose a vehicle type: Car (C), Low-emission vehicle (L), Motorcycle (M), Moped (P) ";
		cin >> vehicleChoice;
	}

	if (userChoice == 'S') 
	{
		cout << "Please enter your name: ";
		cin.ignore();
		getline(cin, name);
		student.setName(name);

		cout << "Please enter your CUID: ";
		cin >> CUID;
		student.setCUID(CUID);

		cout << "Please enter your address: ";
		cin.ignore();
		getline(cin, address);
		student.setAddress(address);

		cout << "Please enter your student email address: ";
		cin >> email;
		student.setEmail(email);

		cout << "Please enter your phone number: ";
		cin >> phoneNumber;
		student.setPhoneNumber(phoneNumber);

		cout << "Please enter your driver's license number: ";
		cin >> driverNumber;
		student.setDriversLicenseNumber(driverNumber);

		cout << "Please choose a vehicle type: Car (C), Low-emission vehicle (L), Motorcycle (M), Moped (P) ";
		cin >> vehicleChoice;
	}

	if (userChoice == 'V') 
	{
		cout << "Please enter your name: ";
		cin.ignore();
		getline(cin, name);
		visitor.setName(name);

		cout << "Please enter your address: ";
		cin.ignore();
		getline(cin, address);
		visitor.setAddress(address);

		cout << "Please enter your personal email: ";
		cin >> email;
		visitor.setEmail(email);

		cout << "Please enter your phone number: ";
		cin >> phoneNumber;
		visitor.setPhoneNumber(phoneNumber);

		cout << "Please enter your driver's license number: ";
		cin >> driverNumber;
		visitor.setDriversLicenseNumber(driverNumber);

		cout << "Please choose a vehicle type: Car (C), Low-emission vehicle (L), Motorcycle (M), Moped (P) ";
		cin >> vehicleChoice;
	}

	if (userChoice == 'D') 
	{
		cout << "Please enter your name: ";
		cin.ignore();
		getline(cin, name);
		vendor.setName(name);

		cout << "Please enter your company name: ";
		cin.ignore();
		getline(cin, companyName);
		vendor.setCompanyName(companyName);

		cout << "Please enter your employee ID: ";
		cin >> employeeID;
		vendor.setEmployeeID(employeeID);

		cout << "Please enter your personal email: ";
		cin >> email;
		vendor.setEmail(email);

		cout << "Please enter your phone number: ";
		cin >> phoneNumber;
		vendor.setPhoneNumber(phoneNumber);

		cout << "Please choose a vehicle type: Car (C), Low-emission vehicle (L), Motorcycle (M), Moped (P) ";
		cin >> vehicleChoice;
	}


	if (vehicleChoice == 'C')
	{
		cout << "Please enter the make of your car (ex: Ford): ";
		cin >> make;
		car.setMake(make);

		cout << "Please enter the model of your car: ";
		cin.ignore();
		getline(cin, model);
		car.setModel(model);

		cout << "Please enter your license plate: ";
		cin.ignore();
		getline(cin, licensePlate);
		car.setPlate(licensePlate);

		cout << "Please enter the color of your car: ";
		cin >> color;
		car.setColor(color);

		cout << "Please enter the year of your car: ";
		cin >> year;
		car.setYear(year);

		cout << "What type of permit would you like? Annual (A), Semester (S), One Day (O), Park N Ride (P), Commuter (C): ";
		cin >> permitChoice;
	}

	if (vehicleChoice == 'L') 
	{
		cout << "Please enter the make of your low-emission vehicle (ex: Ford): ";
		cin >> make;
		lowEmissionVehicle.setMake(make);

		cout << "Please enter the model of your low-emission vehicle : ";
		cin.ignore();
		getline(cin, model);
		lowEmissionVehicle.setModel(model);

		cout << "Please enter your license plate: ";
		cin.ignore();
		getline(cin, licensePlate);
		lowEmissionVehicle.setPlate(licensePlate);

		cout << "Please enter the color of your low-emission vehicle: ";
		cin >> color;
		lowEmissionVehicle.setColor(color);

		cout << "Please enter the year of your low-emission vehicle : ";
		cin >> year;
		lowEmissionVehicle.setYear(year);

		cout << "What type of permit would you like? Annual (A), Semester (S), One Day (O), Park N Ride (P), Commuter (C): ";
		cin >> permitChoice;
	}

	if (vehicleChoice == 'M') 
	{
		cout << "Please enter the make of your motorcycle (ex: Harley): ";
		cin >> make;
		motorcyle.setMake(make);

		cout << "Please enter the model of your motorcycle: ";
		cin.ignore();
		getline(cin, model);
		motorcyle.setModel(model);

		cout << "Please enter your license plate: ";
		cin.ignore();
		getline(cin, licensePlate);
		motorcyle.setPlate(licensePlate);

		cout << "Please enter the color of your motorcycle: ";
		cin >> color;
		motorcyle.setColor(color);

		cout << "Please enter the year of your motorcycle: ";
		cin >> year;
		motorcyle.setYear(year);

		cout << "What type of permit would you like? Annual (A), Semester (S), One Day (O), Park N Ride (P), Commuter (C): ";
		cin >> permitChoice;
	}

	if (vehicleChoice == 'P') 
	{
		cout << "Please enter the make of your moped: ";
		cin >> make;
		moped.setMake(make);

		cout << "Please enter the model of your moped: ";
		cin.ignore();
		getline(cin, model);
		moped.setModel(model);

		cout << "Please enter your license plate: ";
		cin.ignore();
		getline(cin, licensePlate);
		moped.setPlate(licensePlate);

		cout << "Please enter the color of your moped: ";
		cin >> color;
		moped.setColor(color);

		cout << "Please enter the year of your moped: ";
		cin >> year;
		moped.setYear(year);

		cout << "What type of permit would you like? Annual (A), Semester (S), One Day (O), Park N Ride (P), Commuter (C): ";
		cin >> permitChoice;
	}

	if (permitChoice == 'A')
	{
		permitType.setAnnual(permitChoice); // If permitChoice is = to a (annual) calls the permitType class and sets the permit type
	}

	if (permitChoice == 'S')
	{
		permitType.setSemester(permitChoice);
	}

	if (permitChoice == 'O')
	{
		permitType.setOneDay(permitChoice);
	}

	if (permitChoice == 'P')
	{
		permitType.setParkNRide(permitChoice);
	}

	if (permitChoice == 'C')
	{
		permitType.setCommuter(permitChoice);
	}


	//OUTPUT
	if (userChoice == 'E') 
	{
		if (vehicleChoice == 'C') 
		{
			invoice.ShowInvoice(employee, car, permitType); // calls the show-invoice functions and passes in the employee, car, and permitType objects
		}
		if (vehicleChoice == 'L') 
		{
			invoice.ShowInvoice(employee, lowEmissionVehicle, permitType);
		}
		if (vehicleChoice == 'M') 
		{
			invoice.ShowInvoice(employee, motorcyle, permitType);
		}
		if (vehicleChoice == 'P') 
		{
			invoice.ShowInvoice(employee, moped, permitType);
		}
	}
	else if (userChoice == 'S') 
	{
		if (vehicleChoice == 'C')
		{
			invoice.ShowInvoice(student, car, permitType);
		}
		if (vehicleChoice == 'L')
		{
			invoice.ShowInvoice(student, lowEmissionVehicle, permitType);
		}
		if (vehicleChoice == 'M')
		{
			invoice.ShowInvoice(student, motorcyle, permitType);
		}
		if (vehicleChoice == 'P')
		{
			invoice.ShowInvoice(student, moped, permitType);
		}
	}
	else if (userChoice == 'V') 
	{
		if (vehicleChoice == 'C')
		{
			invoice.ShowInvoice(visitor, car, permitType);
		}
		if (vehicleChoice == 'L')
		{
			invoice.ShowInvoice(visitor, lowEmissionVehicle, permitType);
		}
		if (vehicleChoice == 'M')
		{
			invoice.ShowInvoice(visitor, motorcyle, permitType);
		}
		if (vehicleChoice == 'P')
		{
			invoice.ShowInvoice(visitor, moped, permitType);
		}
	}
	else if (userChoice == 'D') 
	{
		if (vehicleChoice == 'C')
		{
			invoice.ShowInvoice(vendor, car, permitType);
		}
		if (vehicleChoice == 'L')
		{
			invoice.ShowInvoice(vendor, lowEmissionVehicle, permitType);
		}
		if (vehicleChoice == 'M')
		{
			invoice.ShowInvoice(vendor, motorcyle, permitType);
		}
		if (vehicleChoice == 'P')
		{
			invoice.ShowInvoice(vendor, moped, permitType);
		}
	}

}