#include "Circle.h" // header file
#include <math.h> // used for pow

bool Circle::setRadius(double r) // Class Circle 
{
	double validData = true;

	if (r >= 0) // Validation to ensure the user entered a nubmer >= 0
	{
		radius = r;
	}
	else 
	{
		validData = false;
	}

	return validData;
}

double Circle::getRadius() 
{
	return radius;
}

double Circle::calcArea() 
{
	return PI * pow(radius, 2); // Math calculation
}
