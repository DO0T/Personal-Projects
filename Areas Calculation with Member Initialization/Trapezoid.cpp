#include "Trapezoid.h"


bool Trapezoid::setBase1(double b1) 
{
	bool validData = true;

	if (b1 >= 0) 
	{
		base1 = b1;
	}
	else 
	{
		validData = false;
	}

	return validData;
}

bool Trapezoid::setBase2(double b2) 
{
	bool validData = true;

	if (b2 >= 0) 
	{
		base2 = b2;
	}
	else 
	{
		validData = false;
	}

	return validData;
}

bool Trapezoid::setHeight(double h) 
{
	bool validData = true;

	if (h >= 0) 
	{
		height = h;
	}
	else 
	{
		validData = false;
	}
	
	return validData;
}

double Trapezoid::getBase1() 
{
	return base1;
}

double Trapezoid::getBase2() 
{
	return base2;
}

double Trapezoid::getHeight() 
{
	return height;
}

double Trapezoid::calcArea() 
{
	return ((base1 + base2) / 2) * height;
}
