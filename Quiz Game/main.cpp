//Dawson Tomes CPSC 1020 Project #2
#include <iostream>
#include <string>
#include <algorithm> // used for random_shuffle
#include <vector>
#include <fstream> // used to read in from the text file
#include <ctime> // used for random_shuffle
#include <stdlib.h> // used for random_shuffle

#include "Quiz.h"
#include "printResult.h"

int main(int argc, char const* argv[]) 
{
	int howManyCorrect = 0; // tracks how many questions are correct
	int howManyWrong = 0; 

	std::vector<Quiz> quizVector; // quizVector stores the Q/A pairs

	std::string question;
	std::string correctAnswer;
	std::string userInput;

	std::ifstream databaseFile; 
	databaseFile.open(argv[1]); // opens database.txt NOTE: you can hardcode the .txt file by using "textfile_name.txt"

	if (databaseFile.is_open()) 
	{
		while (getline(databaseFile, question)) 
		{
			getline(databaseFile, correctAnswer);

			question.erase(0, 3); // removes the Q:
			correctAnswer.erase(0, 3); // removes the A:

			Quiz quizObject(question, correctAnswer); // passes in the question and answer into quizObject
			quizVector.push_back(quizObject); // stores quizObject inside of quizVector
		}

		// Random shuffle algorithm
		srand(unsigned(time(0))); // used to seed the random_shuffle
		random_shuffle(quizVector.begin(), quizVector.end()); // randomizes the questions

		for (auto& quizObject : quizVector) 
		{
			std::cout << quizObject.getQuestion() << "\n"; // Prompts the user a question
			std::cout << "Type in your answer: ";
			getline(std::cin, userInput); // user input

			if (userInput == quizObject.getAnswer())  // If the answer is correct
			{
				std::cout << "Correct!" << std::endl;

				howManyCorrect++; // updates score
				Quiz::updateScore(1); // calls the static method updateScore (and adds 1 to score)

				std::cout << "Current score: " << Quiz::getScore() << std::endl; // Quiz::getScore returns the total score
			}
			else 
			{
				std::cout << "Wrong! Correct answer: " << quizObject.getAnswer() << std::endl; // the quizObject gets the correct answer 

				howManyWrong++;
				Quiz::updateScore(-1); // calls the static method updateScore (and subtracts 1 to score)

				std::cout << "Current score: " << Quiz::getScore() << std::endl;
			}
			
			std::cout << "\n"; // new line to separate questions

		}

		std::cout << printResult(quizVector.size(), howManyCorrect, howManyWrong); // passes in the # of correct answers and # of incorrect answers to get the total score

	}
	else 
	{
		std::cout << "Error! Unable to locate file!";
	}

	databaseFile.close(); // closes the file
	return 0;
}