//Name: Prof Q, Gabriela Lopez
//Date: 4/19/21
//Description: Guess number using Interation and Recursion Implementation

#include "guessNumber.h"
//Preconditions: N/A
//Postconditions:creates a default guessnumber object
GuessNumber::GuessNumber() : count(0)
{}
//Preconditions: a guessNumber object
//Postconditions: resets the count
void GuessNumber::resetCount()
{
	count = 0;
}
//Preconditions: a guessNumber object, the low and high ends
//Postconditions: runs class version of the iterative guessing game
void GuessNumber::InterativeGuess(int low, int high)
{
	int guessNumber = 0;
	do
	{
		string str = "YN";
		count++;
		guessNumber = (low + high) / 2;
		char answer = toupper(inputChar("\nIs your number " + to_string(guessNumber) + "? (Y-yes or N-no) ", str));
		if (answer == 'Y')
		{
			cout << "\nYour number has been guessed to be " << guessNumber << ".\n";
			cout << "Number guesses: " << count << "\n\n";
			return;
		}
		else
		{
			answer = toupper(inputChar("\nIs your number larger than " + to_string(guessNumber) + "? (Y-yes or N-no) ", str));
			if (answer == 'Y')
				low = guessNumber + 1;
			else
				high = guessNumber - 1;
		}
	} while (low <= high);
	cout << "\nYour number must be " << guessNumber << ".";
	cout << "\nNumber of guesses: " << count << "\n\n";
}
//Preconditions: a guessNumber object, the low and high ends
//Postconditions: runs class version of the recursive guessing game
void GuessNumber::RecursiveGuessing(int low, int high)
{
	count++;

	if (low >= high)			//base or stopping case
	{
		cout << "\n\tYour number must to be " << low << ".";
		cout << "\n\tNumber of guesses: " << count << "\n\n";
		return;
	}

	string str = "YN";
	int midpoint = (low + high) / 2;
	char answer = toupper(inputChar("\n\tIs your number " + to_string(midpoint) + "? (Y-yes or N-no) ", str));
	if (answer == 'Y')			//base or stopping case
	{
		cout << "\n\tYour number has been guessed to be " << midpoint << ".";
		cout << "\n\tNumber guesses: " << count << "\n\n";
		return;
	}
	else
	{
		answer = toupper(inputChar("\n\tIs your number larger than " + to_string(midpoint) + "? (Y-yes or N-no) ", str));
		if (answer == 'Y')
			RecursiveGuessing(midpoint + 1, high); //recursive call
		else
			RecursiveGuessing(low, midpoint - 1); //recursive call
	}
}