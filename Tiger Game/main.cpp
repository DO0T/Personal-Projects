// Dawson Tomes CPSC 1020 Project 3 Tiger Game: This program is a card game where a player plays against the computer 
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {

  // 1. Create a deck of cards and shuffle it.
  // 2. Create two players, each one with 5 cards in their hand.
  // 3. Play five rounds. In each round:
  //    - Have computer deal a card from their hand.
  //    - Show human their hand of cards so that they can make a selection.
  //    - Have human deal their card. 
  //    - Determine who won the round and update points accordingly.
  //    - Print results for current round.
  // 4. Print final game results.  

  const int MAX_ROUNDS = 20; // used for input validation to ensure the player does not get more cards than the deck has

  int numPlayerWins = 0; // stores the number of player wins
  int overallScore = 0; // stores the overall (total) score of the game
  int howManyGames = 0; // stores the number of times the game was played
  int numRounds; // stores the number of rounds the player wants to play
  int userInput;

  char retry = 'Y'; // This character variable will check and see if the user wants to play the game again

    Deck deck; // creates the deck

  cout << "Welcome to TigerGame!" << endl;

  while(retry != 'N') 
  {
    howManyGames++; // increases the number of games per play

    deck.shuffle(); // shuffles the deck

    cout << "How many rounds would you like to play? ";
    cin >> numRounds;

    while ((numRounds * 2 ) > MAX_ROUNDS)  // Input validation
    {
        cout << "You entered an invalid number please enter an integer with a value of 10 or lower: ";
        cin >> numRounds;
    }

    cout << "The deck was shuffled to ensure fairness. Each player shuffled " << numRounds << " cards." << endl;

    Player player(deck, numRounds); // Player objects created after num rounds because the program needs to know how mnay cards need to be stored in each object
    Player computer(deck, numRounds);

    for (int r = 0; r < numRounds; r++) // A for loop is required to ensures the program goes through each round until all cards are played
    {
      cout << "\nRound " << r + 1 << endl;
      cout << "-------\n";

      //Computers turn
      Card computerTempCard = Card(computer.hand.dealCard(1)); // computer draws a card
      cout << "The computer plays: " << computerTempCard.printCard() << endl; // prints the card

      cout << "Your hand: " << player.hand.printHand() << endl; // shows the player their hand 

      // Players turn
      cout << "Which card do you want to play? ";
      cin >> userInput;

      while (userInput > player.hand.getHandSize() || userInput <= 0)  // Input validation
      {
        cout << "You have entered an invalid card. Please enter a valid input: ";
        cin >> userInput;
      }
      // switches the card to a temporary card and prints the temporary card
      Card userTempCard = Card(player.hand.dealCard(userInput));
      cout << "You played: " << userTempCard.printCard() << endl;

      // The following if statements compare the temp cards to see which one is greater
      if (userTempCard.getValue() > computerTempCard.getValue()) // if the user's card is greater
      {
        cout << "You win this round!\n\n"; // user wins the round
        player.score = player.score + (userTempCard.getValue() + computerTempCard.getValue()); // card values get added to score
      }
      else if (userTempCard.getValue() < computerTempCard.getValue()) 
      {
        cout << "The computer wins this round!\n\n";
        computer.score = computer.score + (userTempCard.getValue() + computerTempCard.getValue());
      }
      else // if the value of the cards are equal
      {
        cout << "Tie!\n\n";
      }

      // Outputs the end of round scores
      cout << "Current Scores:\n";
      cout << "Human: " << player.score << endl; // player score
      cout << "Computer: " << computer.score << endl; // computer score
    }

    // Outputs the final score after the game is finished
    cout << "\nFINAL SCORE:\n";
    cout << "Human: " << player.score << endl; // player final score
    cout << "Computer: " << computer.score << "\n\n"; //computer final score 2 \n are used for spacing clarity
    overallScore = overallScore + (player.score + computer.score); // adds both scores to the overall score

    // This if statement checks to see who won the game or if the game resulted in a tie
    if (player.score > computer.score)  // if the player score is greater
    {
        cout << "Player has won!\n";
        numPlayerWins++;
    }
    else if (player.score < computer.score) // if the computer score is higher
    {
        cout << "The computer has won!\n";
    }
    else // if the scores are =
    {
        cout << "The game has ended with a tie!\n";
    }

    cout << "Play again? (Y or N) "; // play again prompt
    cin >> retry;

    while(retry != 'Y' && retry != 'N') // Input validation for retry
    {
      cout << "Please enter the appropriate character. Y or N";
      cin >> retry;
    }
    cout << "\n";
  }

  cout << "Game Summary:\n";
  cout << "Rounds played: " << howManyGames << "\n";
  cout << "Number of rounds won by the player: " << numPlayerWins << "\n";
  cout << "Total score: " << overallScore << "\n";  

  return 0;
}
