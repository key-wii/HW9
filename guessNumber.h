//Name: Prof Q, Gabriela Lopez
//Date: 4/19/21
//Description: Guess number using Interation and Recursion Header

#pragma once

#include <iostream>
#include "input.h"
using namespace std;

class GuessNumber
{

private:
	int count;

public:
	//constructor
	GuessNumber();

	void resetCount();

	void InterativeGuess(int low, int high);

	void RecursiveGuessing(int low, int high);

};