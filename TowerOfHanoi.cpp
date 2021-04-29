// Participant(s): Thien Vu
// Date: 04-29-21
// Description: Algorithm using recursion to solve the tower of Hanoi game (Implementation)

#include "towerOfHanoi.h"
void printTowers(int numberOfRings, stack <int>& towerA, stack <int>& towerB, stack <int>& towerC)
{
	stack<int> tempTowerA = towerA;
	stack<int> tempTowerB = towerB;
	stack<int> tempTowerC = towerC;
	int countA = tempTowerA.size();
	int countB = tempTowerB.size();
	int countC = tempTowerC.size();

	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "\t";
		for (int i = 0; i < numberOfRings; i++)
		{
			cout << char(32);
		}
		cout << char(186);
		for (int i = 0; i < numberOfRings; i++)
		{
			cout << char(32);
		}
	}
	cout << "\n";


	for (int i = 0; i < numberOfRings; i++)
	{
		cout << '\t';
		if (countA < numberOfRings)
		{
			for (int i = 0; i < numberOfRings; i++)
			{
				cout << char(32);
			}
			cout << char(186);
			for (int i = 0; i < numberOfRings; i++)
			{
				cout << char(32);
			}
			countA++;
		}
		else
		{
			for (int i = numberOfRings; i > tempTowerA.top(); i--)
			{
				cout << char(32);
			}
			for (int i = 0; i < tempTowerA.top(); i++)
			{
				cout << char(223);
			}
			cout << tempTowerA.top();
			for (int i = 0; i < tempTowerA.top(); i++)
			{
				cout << char(223);
			}
			for (int i = numberOfRings; i > tempTowerA.top(); i--)
			{
				cout << char(32);
			}
			tempTowerA.pop();
		}

		cout << '\t';
		if (countB < numberOfRings)
		{
			for (int i = 0; i < numberOfRings; i++)
			{
				cout << char(32);
			}
			cout << char(186);
			for (int i = 0; i < numberOfRings; i++)
			{
				cout << char(32);
			}
			countB++;
		}
		else
		{
			for (int i = numberOfRings; i > tempTowerB.top(); i--)
			{
				cout << char(32);
			}
			for (int i = 0; i < tempTowerB.top(); i++)
			{
				cout << char(223);
			}
			cout << tempTowerB.top();
			for (int i = 0; i < tempTowerB.top(); i++)
			{
				cout << char(223);
			}
			for (int i = numberOfRings; i > tempTowerB.top(); i--)
			{
				cout << char(32);
			}
			tempTowerB.pop();
		}

		cout << '\t';
		if (countC < numberOfRings)
		{
			for (int i = 0; i < numberOfRings; i++)
			{
				cout << char(32);
			}
			cout << char(186);
			for (int i = 0; i < numberOfRings; i++)
			{
				cout << char(32);
			}
			countC++;
		}
		else
		{
			for (int i = numberOfRings; i > tempTowerC.top(); i--)
			{
				cout << char(32);
			}
			for (int i = 0; i < tempTowerC.top(); i++)
			{
				cout << char(223);
			}
			cout << tempTowerC.top();
			for (int i = 0; i < tempTowerC.top(); i++)
			{
				cout << char(223);
			}
			for (int i = numberOfRings; i > tempTowerC.top(); i--)
			{
				cout << char(32);
			}
			tempTowerC.pop();
		}
		cout << endl;

	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\t";
		for (int i = 0; i < numberOfRings; i++)
		{
			cout << char(205);
		}
		cout << char(202);
		for (int i = 0; i < numberOfRings; i++)
		{
			cout << char(205);
		}
	}
	cout << "\n";

	int count = 64;
	for (int i = 0; i < 3; i++)
	{
		cout << "\t";
		for (int i = 0; i < numberOfRings; i++)
		{
			cout << char(32);
		}
		count++;
		cout << char(count);
		for (int i = 0; i < numberOfRings; i++)
		{
			cout << char(32);
		}
	}
	cout << "\n";

}

void moveRing(char moveFrom, char moveTo, stack <int>& towerA, stack <int>& towerB, stack <int>& towerC)
{
	int ring;

	switch (toupper(moveFrom))
	{
	case 'A':
	{
		ring = towerA.top();
		towerA.pop();
		break;
	}
	case 'B':
	{
		ring = towerB.top();
		towerB.pop();
		break;
	}
	case 'C':
	{
		ring = towerC.top();
		towerC.pop();
		break;
	}
	default: break;
	}


	switch (toupper(moveTo))
	{
	case 'A':
	{
		towerA.push(ring); break;
	}
	case 'B':
	{
		towerB.push(ring); break;
	}
	case 'C':
	{
		towerC.push(ring); break;
	}
	default: break;
	}
}

void towerOfHanoi(int numberOfRings, int Rings, char Source, char Auxiliary, char Destination, stack <int>& towerA, stack <int>& towerB, stack <int>& towerC, int& count)
{
	if (numberOfRings == 1)
	{
		count++;
		cout << "\n\t" << "Move #" << count << ": move ring " << numberOfRings << " from " << Source << " to " << Destination << endl;
		moveRing(Source, Destination, towerA, towerB, towerC);
		printTowers(Rings, towerA, towerB, towerC);

		return;
	}

	towerOfHanoi(numberOfRings - 1, Rings, Source, Destination, Auxiliary, towerA, towerB, towerC, count);

	count++;
	cout << "\n\t" << "Move #" << count << ": move ring " << numberOfRings << " from " << Source << " to " << Destination << endl;
	moveRing(Source, Destination, towerA, towerB, towerC);
	printTowers(Rings, towerA, towerB, towerC);

	towerOfHanoi(numberOfRings - 1, Rings, Auxiliary, Source, Destination, towerA, towerB, towerC, count);
}