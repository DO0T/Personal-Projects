//Dawson Tomes
// This program will calculate the interest on savings in an account over time.
#include <iostream>
#include "compoundCalc.h" // Header file reference
using namespace std;

int main() 
{
	double presentValue; // Current value of $
	double interestRate; // Interest rate of account
	double years; // Used to store the amount of years the $ is in the account

	cout << "Enter the present value: ";
	cin >> presentValue; // user input 
	cout << "Enter the interest rate: ";
	cin >> interestRate; // user input
	cout << "How many years will the money be in the account: ";
	cin >> years; // user input

	cout << "Your retirement savings will be $";
	cout << compoundCalc(presentValue, interestRate, years); // function call compoundCalc
}

