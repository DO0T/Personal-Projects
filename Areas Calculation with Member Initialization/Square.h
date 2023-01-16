#pragma once

#ifndef SQUARE_H

#define SQUARE_H

class Square
{
private:
	double squareSide;

public:

	Square() // Default Constructor 
	{
		squareSide = 1.0; // In class member initilization
	}

	Square(double s) // User-provided values
	{
		squareSide = s;
	}

	bool setSide(double);

	double getSide();

	double calcArea();


};
#endif

