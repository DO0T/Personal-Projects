#include <string>
#pragma once
#ifndef CAR_H
#define CAR_H

using namespace std;


class Car
{
private:
	string make;
	string model;
	string licensePlate;
	string color;

	int year{2022};

public:
	
	Car() = default; // default constructors
	Car(string m, string mm, string p, string c, int y) : make{ m }, model{ mm }, licensePlate{ p }, color{ c }, year{ y } {}

	//Getters
	string getMake() { return make; }
	string getModel() { return model; }
	string getPlate() { return licensePlate; }
	string getColor() { return color; }

	int getYear() { return year; }

	//Setters
	void setMake(string m);
	void setModel(string mm);
	void setPlate(string p);
	void setColor(string c);
	void setYear(int y);
};
#endif
