#include "DivSales.h"
#include <iostream>
#include <vector>
using namespace std;

// Initilization of static member variable.
double DivSales::totalSales = 0;

void DivSales::setSales(double q1, double q2, double q3, double q4) {

	// Adds all four quarters to the vector
	sales.push_back(q1);
	sales.push_back(q2);
	sales.push_back(q3);
	sales.push_back(q4);

	// Computes the total division sales by adding each quarter.
	divSales = q1 + q2 + q3 + q4;

	// Adds each of the divisions sales to compute the overall total sales.
	totalSales += divSales;
}
