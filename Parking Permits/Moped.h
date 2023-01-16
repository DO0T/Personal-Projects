#pragma once
#ifndef MOPED_H
#define MOPED_H

#include <iostream>
#include <string>

using namespace std;

class Moped
{
private:
	string make;
	string model;
	string licensePlate;
	string color;

	int year{2022}; // default value

public:
	//Default constructors
	Moped() = default;
	Moped(string m, string mm, string p, string c, int y) : make{ m }, model{ mm }, licensePlate{ p }, color{ c }, year{ y } {}
	
	//Getters
	string getMake() { return make; }
	string getModel() { return model; }
	string getPlate() { return licensePlate; }
	string getColor() { return color; }
	int getYear() { return year; }
	
	//Setters
	void setMake(string m);
	void setModel(string m);
	void setPlate(string p);
	void setColor(string c);
	void setYear(int y);


};
#endif