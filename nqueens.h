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
	//preconditions: 
	//postconditions: 
	void printBoard();
	//preconditions: 
	//postconditions: 
	bool solve(int col);
	//preconditions: 
	//postconditions: 
	
	bool isValid(int row, int col);
	//preconditions: 
	//postconditions: 
	void initializeBoard();
private:
	std::vector<std::vector<int>> board;
	int size;
	int first;
	int queens;
};
