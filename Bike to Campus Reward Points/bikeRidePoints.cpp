#include <iomanip>
#include <iostream>
using namespace std;

int main () 
{
    int userInput; // detects user input
    bool exitProgram = false; // determines who long the program will stay in the loop

    while (exitProgram == false) 
    {

        cout << "How many bike rides did you take to campus?\n";
        cin >> userInput; // user input

        if (userInput < 0) // checks if the user entered an invalid number
         {
             cout << "You entered an invalid number please try again.\n";
             exitProgram = false; // just a check to ensure exitProgram is set to false 
         }
        else if (userInput == 0)  // Checks 0-4 award points based on if the userInput is between 0-4
         {
             cout << "You earned 0 points this semester";
             exitProgram = true;
         }
        else if (userInput == 1) 
         {
             cout << "You earned 3 points this semester";
             exitProgram = true;
         }
         else if (userInput == 2) 
          {
             cout << "You earned 10 points this semester";
             exitProgram = true;
          }
        else if (userInput == 3) 
         {
            cout << "You earned 15 points this semester";
            exitProgram = true;
         }
        else if (userInput == 4) 
         {
            cout << "You earned 30 points this semester";
            exitProgram = true;
         }
        else // If userInput is greater than or equal to 5
         {
            cout << "You earned 50 points this semester";
            exitProgram = true; // exits the loops which end the program
         }

    }

    return 0;
}