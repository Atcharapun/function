#include <iostream>
#include <time.h>
using namespace std;


bool checkNum(int random, int enter);
void main()
{
	srand((unsigned int)time(NULL));

	int random = 1 + (rand() % 9);
	int value;
	int count = 0 ;
	cout << "======================================" << endl;
	cout << "Welcome to guessing number game" << endl;
	cout << "======================================" << endl;
	cout << "Secret number has been chosen" << endl;

	do
	{
		cout << "Guess the number (1 to 10) : ";
		cin >> value;
		count++;
	} while (!checkNum(random, value));

	cout << "The secret number is : " << random << endl;
	cout << "You made " << count << " guessing" << endl;

	system("PAUSE");
}


bool checkNum(int random, int enter)
{
	if (enter > random)
	{
		cout << "The secret number is lower." << endl;
		return false;
	}
	else if (enter < random)
	{
		cout << "The secret number is higher." << endl;
		return false;
	}
	else if (enter == random)
	{
		cout << "Congratulations!!!" << endl;
		return true;
	}
	return false;
}