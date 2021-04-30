// Participants: Gabriela Lopez
// Date: 04-23-21
// Description: file containing Drivers for option1(GuessNumber)
#pragma once

#include <iostream>
#include <time.h>
using namespace std;

#include "input.h"
#include "guessNumber.h"
//Preconditions: the low and high range
//Postconditions: runs the iterative version of the guessing game
void IterativeGuessing(int low, int high);
//Preconditions: the low range, high range and count
//Postconditions: runs the recursive  version of the guessing game
void RecursiveGuessing(int low, int high, int& count);

//Precondition: N/A
//Postcondition: contains driver for GuessNumber
void option1()
{
	srand(time(0));
	int highRange = rand() % 100 + 1;
	cout << "\n\t1> Guess your number between 1 to " << highRange << ".\n\n";
	cout << "\n\tThink of a number from 1 to " << highRange << "...\n\n\t";
	system("pause");

	/*cout << "InterativeGuessing function...\n";
	IterativeGuessing(1, highRange);

	int count = 0;
	cout << "RecursiveGuessing function...\n";
	RecursiveGuessing(1, highRange, count);

	GuessNumber test;

	cout << "InterativeGuessing class function...\n";
	test.InterativeGuess(1, highRange);

	test.resetCount();*/

	GuessNumber test;

	cout << "\n\tRecursiveGuessing class function...\n";
	test.RecursiveGuessing(1, highRange);
}

void RecursiveGuessing(int low, int high, int& count)
{
	count++;

	if (low >= high)			//base or stopping case
	{
		cout << "\nYour number must to be " << low << ".";
		cout << "\nNumber of guesses: " << count << "\n\n";
		return;
	}

	int midpoint = (low + high) / 2;
	char answer = toupper(inputChar("\nIs your number " + to_string(midpoint) + "? (Y-yes or N-no) ", "YN"));
	if (answer == 'Y')			//base or stopping case
	{
		cout << "\nYour number has been guessed to be " << midpoint << ".";
		cout << "\nNumber guesses: " << count << "\n\n";
		return;
	}
	else
	{
		answer = toupper(inputChar("\nIs your number larger than " + to_string(midpoint) + "? (Y-yes or N-no) ", "YN"));
		if (answer == 'Y')
			RecursiveGuessing(midpoint + 1, high, count); //recursive call
		else
			RecursiveGuessing(low, midpoint - 1, count); //recursive call
	}
}


void IterativeGuessing(int low, int high)
{
	int guessNumber = 0;
	int count = 0;

	do
	{
		count++;
		guessNumber = (low + high) / 2;
		char answer = toupper(inputChar("\nIs your number " + to_string(guessNumber) + "? (Y-yes or N-no) ", "YN"));
		if (answer == 'Y')
		{
			cout << "\nYour number has been guessed to be " << guessNumber << ".\n";
			cout << "Number guesses: " << count << "\n\n";
			return;
		}
		else
		{
			answer = toupper(inputChar("\nIs your number larger than " + to_string(guessNumber) + "? (Y-yes or N-no) ", "YN"));
			if (answer == 'Y')
				low = guessNumber + 1;
			else
				high = guessNumber - 1;
		}
	} while (low <= high);
	cout << "\nYour number must be " << guessNumber << ".";
	cout << "\nNumber of guesses: " << count << "\n\n";
}