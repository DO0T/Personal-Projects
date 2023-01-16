#pragma once
#ifndef QUIZ_H
#define QUIZ_H

#include <string>

class Quiz
{
private:
	std::string question{ "" };
	std::string answer{ "" };
	static int score;
public:
	//Constructor
	Quiz() = default; // default constructor
	Quiz(std::string q, std::string a) : question{ q }, answer{ a } {}

	//Getters
	std::string getAnswer();
	std::string getQuestion();
	static int getScore();

	//Mehtods
	static void updateScore(int val);
	friend std::string printResult(int questions, int correctAnswers, int wrongAnswers);

};
#endif

