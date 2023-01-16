#pragma once
#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

#include "Car.h"
#include "LowEmissionVehicle.h"
#include "Motorcycle.h"
#include "Moped.h"

#include "Employee.h"
#include "Student.h"
#include "Visitor.h"
#include "Vendor.h"
#include "permitType.h"

class Invoice
{
private:
	double price{0}; // default values
	double discount{0};
	double serviceFee{0};
	double totalPrice{0};

	Car car;
	Motorcycle motorcycle;
	Moped moped;
	LowEmissionVehicle lowEmissionVehicle;
	
	Employee employee;
	Student student;
	Visitor visitor;
	Vendor vendor;
	permitType permit;

public:
	// Default constructor
	Invoice() = default;
	Invoice(double p, double d, double s) : price{ p }, discount{ d }, serviceFee{ s } {}
	
	//Getters
	double getPrice() { return price; }
	double getDiscount(){ return discount; }
	double getServiceFee(){ return serviceFee; }
	double getTotalPrice() { return totalPrice; }

	//Setters
	void setPrice(double p);
	void setDiscount(double d);
	void setServiceFee(double f);
	void setTotalPrice(double t);


	//Overloaded the Show Invoice function for each variation of each class
	string ShowInvoice(Employee, Car, permitType);
	string ShowInvoice(Employee, LowEmissionVehicle, permitType);
	string ShowInvoice(Employee, Motorcycle, permitType);
	string ShowInvoice(Employee, Moped, permitType);
	string ShowInvoice(Student, Car, permitType);
	string ShowInvoice(Student, LowEmissionVehicle, permitType);
	string ShowInvoice(Student, Motorcycle, permitType);
	string ShowInvoice(Student, Moped, permitType);
	string ShowInvoice(Visitor, Car, permitType);
	string ShowInvoice(Visitor, LowEmissionVehicle, permitType);
	string ShowInvoice(Visitor, Motorcycle, permitType);
	string ShowInvoice(Visitor, Moped, permitType);
	string ShowInvoice(Vendor, Car, permitType);
	string ShowInvoice(Vendor, LowEmissionVehicle, permitType);
	string ShowInvoice(Vendor, Motorcycle, permitType);
	string ShowInvoice(Vendor, Moped, permitType);
};
#endif

