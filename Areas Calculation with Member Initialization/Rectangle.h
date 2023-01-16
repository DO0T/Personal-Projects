#pragma once
//Rectangle.h is the Rectangle class specification file

#ifndef RECTANGLE_H // ifndef is called a include guard. It prevetns the header file from accidentally being inlcuded more than once.

#define RECTANGLE_H //Defines constant RECTANGLE_H

//Rectangle Class declaration (does not contain member functions or methods)

class Rectangle
{
private:

	double length;

	double width;

public:

	Rectangle() // Default Constructor 
	{
		length = 1.0; // In class member initilization
		width = 1.0;
	}

	Rectangle(double l, double w) // User-provided values
	{
		length = l;
		width = w;
	}

	bool setLength(double); // bool function that takes a double as a constructor

	bool setWidth(double);

	double getLength();

	double getWidth();

	double calcArea();


};


#endif
