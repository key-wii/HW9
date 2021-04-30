// Participants: Christopher, Andrew
// Date: 04-23-21
// Description: nqueen header

#pragma once

#include <vector>
#include <iostream>
using namespace std;

class Nqueen
{
public:

	//preconditions: n/a
	//postconditions: creates a Nqueens object
	Nqueen();
	//preconditions: a new size
	//postconditions: sets the size to dimensions
	void setSize(int dimensions);
	//preconditions: an nqueens object
	//postconditions: prints the board
	void printBoard();
	//preconditions: an nqueens object, a column(0)
	//postconditions: recursivly solves the nqueens problem. returns false if no solution
	bool solve(int col);
	//preconditions: an nqueens object and a row,rol to potentially place a queen in
	//postconditions: returns true if the queen can be placed, false if not
	bool isValid(int row, int col);
	//preconditions: An nqueens object
	//postconditions: will set the boards vector up equal to user input
	void initializeBoard();
private:
	std::vector<std::vector<int>> board;
	int size;
	int first;
	int queens;
};
