
#include <iostream>
#ifndef PATIENT_H
#define PATIENT_H

class Patient
{
private:

    char patientType{ 'I' };
    int days{ 0 }; // default value(s)
    double rate{ 0.0 };
    double services{ 0.0 };
    double medication{ 0.0 };

    

    bool validateInput(double); // private validation funciton
    bool validateInput(int);

public:

    Patient() = default;
    Patient(char p, int d, double r, double s, double m) : patientType{ p }, days{ d }, rate{ r }, services{ s }, medication{ m } {};// default constructor
    Patient(char p, double s, double m) : patientType{ p }, services{ s }, medication{ m } {};

    bool setDays(int);
    int getDays();

    bool setRate(double);
    double getRate();

    bool setServices(double);
    double getServices();

    bool setMedication(double);
    double getMedication();

    bool setPatientType(char);
    char getPatientType();

    double calcTotalCharges();
};
#endif