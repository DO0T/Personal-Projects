#include "Quiz.h"

//Getters
std::string Quiz::getAnswer() 
{
	return answer;
}

std::string Quiz::getQuestion() 
{
	return question;
}

int Quiz::score = 0; // initilizes score to 0

int Quiz::getScore() 
{
	return score;
}

void Quiz::updateScore(int val) 
{
	score = score + val;

	if (!(score > 0)) // resets score if it goes below 0
	{
		score = 0;
	}

}


