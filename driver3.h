// Participants: Christopher
// Date: 04-23-21
// Description: file containing Drivers for option3(NQueens)
#pragma once
//#include <vector>
#include <iostream>
#include"input.h"
#include "nqueens.h"
using namespace std;

void option3();

//Precondition: N/A
//Postcondition: contains driver for NQueens
void option3()
{
	int dimensions = inputInteger("\nEnter the board's dimensions(1..100): ", 1, 100);
	Nqueen bboard;
	bboard.setSize(dimensions);
	bboard.initializeBoard();
	if (bboard.solve(0))
		bboard.printBoard();
	else
		cout << "\nThere is no solution with the input parameters!";
	
}