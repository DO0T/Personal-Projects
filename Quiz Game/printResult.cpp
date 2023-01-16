#include "printResult.h"
#include "Quiz.h"

#include <iostream>
#include <sstream>

std::stringstream stringStream;

std::string printResult(int questions, int correctAnswers, int wrongAnswers) 
{
	stringStream << "Number of questions: " << questions << std::endl; // Prints out the number of questions asked

	stringStream << "Number correct answers: " << correctAnswers << std::endl; // prints out the number of correct answers

	stringStream << "Number wrong answers: " << wrongAnswers << std::endl; // prints out the number of wrong answers

	stringStream << "Final score: " << Quiz::getScore() << std::endl; // prints the final score

	return stringStream.str();
}
