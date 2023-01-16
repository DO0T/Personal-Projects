//Dawson Tomes CPSC 1021 10/24/2022
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

#include "Date.h"

using namespace std;

int main(int argc, char const* argv[])
{
	//Variables
	int month; // stores month
	int day; // stores day
	int year; // stores year
	int numDates = 0; // stores the # of dates (aka the first line in the .txt document)

	ifstream ifFile; //input  file stream
	ofstream ofFile; //output file stream
	Date date; // date object
	vector<Date> storeDate; // this vector will be used to store the dates

	//Used to open the file
	ifFile.open(argv[1]);
	ofFile.open(argv[2]);

	if (ifFile.is_open()) // if the text file is open
	{
		ifFile >> numDates; // Stores the number on the first line to  numDates

		for (int c = 0; c < numDates; c++) // This loop loops through the number of Dates and stores them in the vector and the Date object
		{
			ifFile >> month >> day >> year; // gets the input from the text file

			Date date{ month, day, year }; // Passes in the month, day, and year into the object Date
			storeDate.push_back(date); // Stores the date object in the back of the vector

		}
		ifFile.close(); // once the for loop finishes the program closes the file

		sort(storeDate.begin(), storeDate.end(), Date::compare); // sort is a part of the algorithm libary. It takes 3 arguements (beginning loc. ending loc. and a compare function)
		// ^^ Personal note* research the sort function more in-depth (know the specifics!)
		// Date::compare is the function that will help the sort algorithm sort the dates. storeDate.begin() is the beginning of the vector while .end if the end of the vector
		// The program will run through this vector with the aid of the funciton and sort the dates by comparing the months, days, and years

		for (auto& date : storeDate) // This loop prints the dates to the output file in the correct formatted and sorted order
		{
			ofFile << date.print() << "\n"; // line for output
		}
	}
	else 
	{
		cout << "Error: cannot find file"; // safety net if in the event the program cannot find the file
	}

	ofFile.close(); // closes the file after all Dates are properly outputted

	return 0;

}