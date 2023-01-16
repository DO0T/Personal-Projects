// This program takes the sales from four quarters and prints the total gained/lost and
// total year sales.
// Dawson Tomes & Caleb Murphy
#include "DivSales.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

	// Creates vector of DivSales objects to store data for each division
	vector<DivSales> division(4);
	double q1, q2, q3, q4;

	// Prompts user to input the data based on the division and the quarter, then validates if user input is a positive integer.
	for (int i = 0; i < 4; i++) {
		cout << "Enter sales data for Division " << (i + 1) << endl;
		cout << "Quarter 1: ";
		cin >> q1;
		while (q1 < 0) {
			cout << "Please enter 0 or greater: ";
			cin >> q1;
		}
		cout << "Quarter 2: ";
		cin >> q2;
		while (q2 < 0) {
			cout << "Please enter 0 or greater: ";
			cin >> q2;
		}
		cout << "Quarter 3: ";
		cin >> q3;
		while (q3 < 0) {
			cout << "Please enter 0 or greater: ";
			cin >> q3;
		}
		cout << "Quarter 4: ";
		cin >> q4;
		while (q4 < 0) {
			cout << "Please enter 0 or greater: ";
			cin >> q4;
		}

		// Takes user input from each quarter and sets the sales for that division accordingly.
		division[i].setSales(q1, q2, q3, q4);
	}

	// Prints out the total sales for each division using getDiveSales()
	for(int i = 0; i < 4; i++) {
		cout << "Total Sales for Division " << i << ": $" << fixed << setprecision(2) << division[i].getDivSales() << endl;
	}

	// Prints out the total sales by using the last divisions totalSales variable.
	cout << "Total Corporate Sales: $" << fixed << setprecision(2) << division[3].getCorpSales() << endl;

	return 0;
}