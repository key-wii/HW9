// Participants: Gia Minh Hoang, Thien Vu
// Date: 04-23-21
// Description: file containing Drivers for option2(TowerOfHanoi)
#pragma once
#include <iostream>
#include "input.h"
#include <stack>
#include "TowerOfHanoi.h"

using namespace std;

//Precondition: N/A
//Postcondition: contains driver for TowerOfHanoi
void option2()
{
	stack <int> towerA, towerB, towerC;
	int count = 0;

	int input = inputInteger("\n\tEnter the number of rings (1..64): ", 1, 64);
	for (int i = input; i > 0; i--)
	{
		towerA.push(i);
	}

	cout << "\n\tTower of Hanoi\n";
	printTowers(input, towerA, towerB, towerC);

	towerOfHanoi(input, input, 'A', 'B', 'C', towerA, towerB, towerC, count);

	cout << "\n\tThe computer has solved the game in " << count << " moves\n";
}