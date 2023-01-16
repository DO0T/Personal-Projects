#include "stats.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <numeric>

using namespace std;

int Stats::capacity() {
	int cap = 0;
	if (numbers.size() == 0) {
		cap = 100;
	}
	if (numbers.size() == 1) {
		cap = 1;
	}
	if (numbers.size() == 2) {
		cap = 2;
	}
	if (numbers.size() > 2 && numbers.size() <= 4) {
		cap = 4;
	}
	if (numbers.size() > 4 && numbers.size() <= 8) {
		cap = 8;
	}
	if (numbers.size() > 8 && numbers.size() <= 16) {
		cap = 16;
	}
	if (numbers.size() > 16 && numbers.size() <= 32) {
		cap = 32;
	}
	if (numbers.size() > 32 && numbers.size() <= 64) {
		cap = 64;
	}
	if (numbers.size() > 64 && numbers.size() <= 128) {
		cap = 128;
	}
	if (numbers.size() > 128 && numbers.size() <= 256) {
		cap = 256;
	}
	if (numbers.size() > 256 && numbers.size() <= 512) {
		cap = 512;
	}
	if (numbers.size() > 512 && numbers.size() <= 1024) {
		cap = 1024;
	}
	if (numbers.size() > 1024 && numbers.size() <= 2048) {
		cap = 2048;
	}
	if (numbers.size() > 2048 && numbers.size() <= 4096) {
		cap = 4096;
	}
	if (numbers.size() > 4096 && numbers.size() <= 8192) {
		cap = 8192;
	}
	return cap;
}

int Stats::count() 
{
	int count = 0;

	for (auto i = numbers.begin(); i < numbers.end(); i++) 
	{
		count++;
	}
	if (numbers.size() == 0) 
	{
		count = 0;
	}
	return count;
}

int Stats::countEven() 
{
	int count = 0;
	for (auto i = numbers.begin(); i != numbers.end(); i++) 
	{
		if (*i % 2 == 0) 
		{
			count++;
		}
	}
	return count;
}

int Stats::countOdd() 
{
	int count = 0;

	for (auto j = numbers.begin(); j != numbers.end(); j++) 
	{
		if (*j % 2 == 0) 
		{
			count++;
		}
	}
	return count;
}

int Stats::countFib() {
	long long int n = 50, t1 = 0, t2 = 1, count = 0, nextTerm = 0;
	vector<long long int> floatVector;

	for (int i = 0; i < n; i++) {
		floatVector.push_back(t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}


	for (long long unsigned int i = 0; i < numbers.size(); i++) {
		for (long long unsigned int j = 0; j < floatVector.size(); j++) {
			if (numbers[i] == floatVector[j]) {
				count++;
			}
		}
	}

	for (long long unsigned int i = 0; i < numbers.size(); i++) {
		if (numbers[i] == 1) {
			count--;
		}
	}

	return count;
}

float Stats::avgAll() 
{
	vector<float> floatVector;

	for (unsigned int i = 0; i < numbers.size(); i++) 
	{
		float num = (float)numbers[i];
		floatVector.push_back(num);
	}

	float averageFloat = accumulate(floatVector.begin(), floatVector.end(), 0.0) / floatVector.size();
	return averageFloat;
}

int Stats::avgEven() 
{
	vector<float> floatVector;

	for (unsigned int i = 0; i < numbers.size(); i++) 
	{
		if (numbers[i] % 2 == 0) 
		{
			float num = (float)numbers[i];
			floatVector.push_back(num);
		}
	}

	float averageEven = accumulate(floatVector.begin(), floatVector.end(), 0.0) / floatVector.size();
	return averageEven;
}

int Stats::avgOdd() 
{
	vector<float> floatVector;

	for (unsigned int j = 0; j < numbers.size(); j++) 
	{
		if (numbers[j] % 2 != 0) 
		{
			float num = (float)numbers[j];
			floatVector.push_back(num);
		}
	}

	float averageOdd = accumulate(floatVector.begin(), floatVector.end(), 0.0) / floatVector.size();
	return averageOdd;
}

float Stats::avgFib() {
	vector<long long int> fibVector;
	vector<float> floatVector;

	int n = 50, t1 = 0, t2 = 1, nextTerm;

	for (int j = 0; j < n; j++) {
		fibVector.push_back(t1);

		nextTerm = t1 + t2;

		t1 = t2;

		t2 = nextTerm;
	}

	fibVector.erase(fibVector.begin() + 2);

	for (long long unsigned int i = 0; i < numbers.size(); i++) {

		for (long long unsigned int j = 0; j < fibVector.size(); j++) {
			if (numbers[i] == fibVector[j]) {

				float num = (float)numbers[i];

				floatVector.push_back(num);
			}
		}
	}

	float averageFib = accumulate(floatVector.begin(), floatVector.end(), 0.0) / floatVector.size();

	return averageFib;
}
