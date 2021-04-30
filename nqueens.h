// Participants: Christopher
// Date: 04-23-21
// Description: nqueen header

#pragma once

#include <vector>
#include <iostream>
using namespace std;

class Nqueen
{
public:/*
	//preconditions: a Nqueens object, and a first move
	//postcondtions: returns true when a solution is found and false when it is not
	bool solve();
	//preconditions: an Nqueens object, and solve is running
	//postconditions: returns true if a generated queen conflicts with another, false if not	
	bool isConflict();
	//preconditions: an Nqueens object, and solve is running
	//postconditions: returns true if a generated queen conflicts with another, false if not, but faster
	bool isConflictFast(int col, int row, std::vector<std::vector<int>>& board);*/
	
	//preconditions: n/a
	//postconditions: creates a Nqueens object with its board as the passed in vector
	Nqueen();
	//preconditions: 
	//postconditions: 
	void setSize(int dimensions);
	//preconditions: 
	//postconditions: 
	void printBoard();
	//preconditions: 
	//postconditions: 
	bool solve(int col);
	//preconditions: 
	//postconditions: 
	bool isConflict();
	//preconditions: 
	//postconditions: 
	bool isValid(int row, int col);
	//preconditions: 
	//postconditions: 
	void initializeBoard();
private:
	std::vector<std::vector<int>> board;
	int size;
};
