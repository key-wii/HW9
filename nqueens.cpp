// Participants: Christopher, Andrew
// Date: 04-23-21
// Description: nqueen implementation

#include "nqueens.h"
#include<iostream>
#include <vector>
using namespace std;
Nqueen::Nqueen():board{ board },size(0) {}

void Nqueen::setSize(int dimensions) {
	size = dimensions;
}

void Nqueen::printBoard() {
	for (int i = 0; i < size; i++) {
		cout << '|';
		for (int k = 0; k < size; k++)
			if (board[i][k] == 0)
				cout <<'_' << '|';
			else if (board[i][k] == 1)
				cout << 'Q' << '|';

		cout << endl;
	}
}
void Nqueen::initializeBoard() {
	vector<vector<int>> vec(size, vector<int>(size, 0));
	board = vec;
	
}
bool Nqueen::solve(int column) {
	if (column >= size)
		return true;
	for (int i = 0; i < size; i++) {
		if (isValid(i, column)) {
			board[i][column] = 1;
			if (solve(column + 1))
				return true;

			board[i][column]= 0;
		}
	}
	return false;
}

bool Nqueen::isConflict() {
	for (int i = 0; i < size; i++)
		for (int k = 0; k < size; k++)
			board[i][k] = 0;
	if (solve(0) == false) {
		cout << "Solution failed";
		return false;
	}
	printBoard();
	return true;
}

bool Nqueen::isValid(int row, int col) {
	for (int i = 0; i < col; i++)
		if (board[row][i])
			return false;
	for (int i = row, k = col; i >= 0 && k >= 0; i--, k--)
		if (board[i][k])
			return false;
	for (int i = row, k = col; k >= 0 && i < size; i++, k--)
		if (board[i][k])
			return false;
	return true;
}