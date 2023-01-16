#pragma once

#ifndef CIRCLE_H

#define CIRCLE_H

class Circle
{
private:

	double radius;

	const double PI = 3.14159; // constant pi

public:

	Circle() // Default Constructor 
	{
		radius = 1.0; // In class member initilization
	}

	Circle(double r) // User-provided values
	{
		radius = r;
	}
	
	bool setRadius(double); // bool function that has a double constructor

	double getRadius();

	double calcArea();

	
	
};
#endif
