#ifndef STATS_H
#define STATS_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

class Stats
{
private:

	string input;
	ifstream readFile;
	vector<int> numbers;

public:
	
	Stats() { vector<int> nullInt(100); string nullString = ""; }

	Stats(string input) 
	{
		readFile.open(input);
		
		if (readFile.is_open()) 
		{
			int num;

			while (readFile >> num) 
			{
				numbers.push_back(num);
			}
		}

	}

	//Methods
	int capacity();
	int count();
	int countEven();
	int countOdd();
	int countFib();
	float avgAll();
	int avgEven();
	int avgOdd();
	float avgFib();

};
#endif

