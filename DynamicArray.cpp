// DynamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//variables.
int items = 0, num = 1;

int main()
{
	cout << "Enter how many items you wish to enter:";
	cin >> items;

	//Dynamic Array.
	int* DArray = new int[items];

	cout << endl << endl;

	cout << "Enter your items: " << endl;
	for (int i = 0; i < items; i++)
	{
		cout << "Item " << num++ << "): ";
		cin >> DArray[i];
	}

	cout << endl << endl;
	cout << "LIST OF ITEMS IN ARRAY: ";
	for (int x = 0; x < items; x++)
	{
		cout << DArray[x] << ", ";
	}

	if (cin.ignore())
	{
		delete[] DArray;
		DArray = NULL;
	}
}

