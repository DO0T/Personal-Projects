#ifndef DIVSALES_H
#define DIVSALES_H
#include <vector>
using namespace std;

// Declaration and Initilization of the DivSales class.
class DivSales {
	private:
		// Holds the total sales for a division for the entire year
		double divSales = 0; 

		// Holds the total corporate sales for all divisions for the entire year
		static double totalSales; 
	public:
		// Will hold four elements o fsales figures for the division
		vector<double> sales; 

		// This function will copy the arguments into the vector and adds the total to divSales and totalSales
		void setSales(double q1, double q2, double q3, double q4); 
		
		// Getters
		double getDivSales() { return divSales; }
		double getCorpSales() { return totalSales; }
};

#endif // !DIVSALES_H