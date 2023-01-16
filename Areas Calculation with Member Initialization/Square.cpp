#include "Square.h"

bool Square::setSide(double s) 
{
	bool validData = true;

	if (s >= 0) 
	{
		squareSide = s;
	}
	else 
	{
		validData = false;
	}

	return validData;
}

double Square::getSide() 
{
	return squareSide;
}

double Square::calcArea() 
{
	return squareSide * squareSide; // Calculation
}