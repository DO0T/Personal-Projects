#include "compoundCalc.h" // header file reference
#include <math.h> // used for the pow (power) function

double compoundCalc(double presentValue, double interestRate, double years) // Passes 3 doubles
{
	double retirementSavings; // stores the amount of savings the account will generate in (t) years

	retirementSavings = presentValue * pow((1 + interestRate), years); // Calculation

	return retirementSavings; // returns total value
}