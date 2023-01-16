// Dawson Tomes CPSC 1021 9/28/22
#include <iostream>
#include "Patient.h" // Reference to Patient class
using namespace std;

int main()
{
    Patient patient;

    int numOfDays{};
    int num = -1; // ensures switch statement stays in the while loop

    double roomRate{};
    double hospitalServices;
    double medicationCharges;

    char userChoice;

    while (num < 0)
    {
        cout << "This program will calculate a patient's hospital charges.\n";

        cout << "Enter I for inpatient or O for out-patient: ";
        cin >> userChoice;
        patient.setPatientType(userChoice); // Passes user choice into the setPatientType method for input validation


        if (userChoice == 'I' || userChoice == 'O')
            switch (userChoice)
            {
            case 'I':
                cout << "Number of days in the hospital: ";
                cin >> numOfDays;
                patient.setDays(numOfDays);
                patient.getDays();

                while (patient.setDays(numOfDays) == false) // If the input validation fails reprompt the user
                {
                    cout << "Number of days in the hospital: "; // reprompt
                    cin >> numOfDays;
                }

                //Room Rate
                cout << "Daily room rate ($): ";
                cin >> roomRate;
                patient.setRate(roomRate);
                patient.getRate();

                while (patient.setRate(roomRate) == false) // validation
                {
                    cout << "Daily room rate ($): ";
                    cin >> roomRate;
                }

                //Lab Fees
                cout << "Lab fees and other service charges ($): ";
                cin >> hospitalServices;
                patient.setServices(hospitalServices);
                patient.getServices();

                while (patient.setServices(hospitalServices) == false) // validation
                {
                    cout << "Lab fees and other service charges ($): ";
                    cin >> hospitalServices;
                }

                //Medication
                cout << "Medication charges ($): ";
                cin >> medicationCharges;
                patient.setMedication(medicationCharges);
                patient.getMedication();

                while (patient.setMedication(medicationCharges) == false) // validation
                {
                    cout << "Medication charges ($): ";
                    cin >> medicationCharges;
                }

                cout << "Your total bill is: ($) " << patient.calcTotalCharges() << endl;

                num = 1; // setting num = 1 breaks out the loop
                break;

            case 'O':
                cout << "Lab fees and other service charges ($): ";
                cin >> hospitalServices;
                patient.setServices(hospitalServices);
                patient.getServices();

                while (patient.setServices(hospitalServices) == false) // validation
                {
                    cout << "Lab fees and other service charges ($): ";
                    cin >> hospitalServices;
                }

                cout << "Medication charges ($): ";
                cin >> medicationCharges;
                patient.setMedication(medicationCharges);
                patient.getMedication();

                while (patient.setMedication(medicationCharges) == false) // validation
                {
                    cout << "Medication charges ($): ";
                    cin >> medicationCharges;
                }

                num = 1;


                cout << "Your total bill is: ($) " << patient.calcTotalCharges() << endl;

            }
    }




}
