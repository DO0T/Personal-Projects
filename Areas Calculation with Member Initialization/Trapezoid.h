#pragma once

#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
private:
	
	double base1;

	double base2;

	double height;

public:

	Trapezoid() // Default Constructor 
	{
		base1 = 1.0; // In class member initilization
		base2 = 1.0;
		height = 1.0;
	}

	Trapezoid(double b1, double b2, double h) // User-provided values
	{
		base1 = b1;
		base2 = b2;
		height = h;
	}

	bool setBase1(double);

	bool setBase2(double);

	bool setHeight(double);

	double getBase1();

	double getBase2();

	double getHeight();

	double calcArea();


};
#endif

