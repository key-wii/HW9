// Participants: Gia Minh Hoang
// Date: 04-23-21
// Description: file containing Drivers for option2(TowerOfHanoi)
#pragma once
#include <iostream>
#include "input.h"


void theTower(int numberOfDisk, string postA, string postB, string sparePost);

//Precondition: N/A
//Postcondition: contains driver for TowerOfHanoi
void option2()
{
	int input = inputInteger("\Enter number of disk(s): ", true);

	theTower(input, "Post A", "Post B", "Spare Post");
}

void theTower(int numberOfDisk, string postA, string postB, string sparePost)
{
	if (numberOfDisk == 1)
		cout << "Disk " << numberOfDisk << " was moved from " << postA << " to " << postB << "\n";
	else
	{
		theTower(numberOfDisk - 1, postA, sparePost, postB);
		cout << "Disk " << numberOfDisk << " was moved from " << postA << " to " << postB << "\n";
		theTower(numberOfDisk - 1, sparePost, postA, postB);
	}
}