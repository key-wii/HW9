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
	bboard.solve(0);
	bboard.printBoard();

	/*int Q = 1;
	int NO_Q = 0;
	int INFLUENCE = -1;
	
	int dimensions = inputInteger("\nEnter the board's dimensions(1..100): ", 1, 100);
	vector<vector<int>> b1(dimensions, vector<int>(dimensions));
	for (int i = 0; i < dimensions; i++) 
	{
		for (int j = 0; j < dimensions; j++) 
		{
			b1[i][j] = NO_Q;
		}
	}
	int col = inputInteger("\nEnter the column to place the first queen: ", 1, dimensions);
	col = col - 1;
	b1[col][0] = Q;
	Nqueen q1(b1);
	cout << q1 << endl;

	bool found = q1.solve();
	if (!found) cout << "No solution" << endl;
	else cout << q1;*/
}