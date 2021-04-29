// Participant(s): Thien Vu
// Date: 04-29-21
// Description: Algorithm using recursion to solve the tower of Hanoi game (header)
#pragma once
#include <iostream>
#include <stack>

using namespace std;

//Precondition: 0 < numberOfRings < 64
//Postcondition: prints towerA, towerB, and towerC with game graphics
void printTowers(int numberOfRings, stack <int>& towerA, stack <int>& towerB, stack <int>& towerC);

//Precondition: moveFrom and moveTo are 'A', 'B' or 'C'. moveTo is different from moveFrom
//Postcondition: moves a ring from moveFrom to moveTo
void moveRing(char moveFrom, char moveTo, stack <int>& towerA, stack <int>& towerB, stack <int>& towerC);

//Precondition:  0 < numberOfRings = Rings < 64, Source = 'A', Auxiliary = 'B', Destination = 'C'
//Postcondition: solve the tower of Hanoi game using recursion
void towerOfHanoi(int numberOfRings, int Rings, char Source, char Auxiliary, char Destination, stack <int>& towerA, stack <int>& towerB, stack <int>& towerC, int& count);


