// DynamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//We need a of variables of size int, one for holding the user input size of the array and another incrementing.
//initialized at size of 0 and incrementing starting at 1.
int items = 0, num = 1;

int main()
{
	//Ask the user their desired size.
	cout << "Enter how many items you wish to enter:";
	cin >> items;

	//Create a Dynamic Array by declaring an int pointer of name equal to the new int array of user defined size,
	//using the 'new' keyword to declare a new allocation of of memory of int(4 bytes).
	int* DArray = new int[items];

	cout << endl << endl;

	cout << "Enter your items: " << endl;
	
	//let the use enter the numbers to be stored in that created array.  Remember computers start counting
	//with zero.  A 'for loop' is one way we could achieve this by initializing 'i = 0' and increment until 'i' is
	//less than user define size.
	for (int i = 0; i < items; i++)
	{
		cout << "Item " << num++ << "): ";
		cin >> DArray[i];
	}

	cout << endl << endl;
	
	//let the use varify the numbers stored in that created array.  Remember computers start counting
	//with zero.  A 'for loop' is one way we could achieve this by initializing 'i = 0' and increment until 'i' is
	//less than user define size and display by index 'x'.
	cout << "LIST OF ITEMS IN ARRAY: ";
	for (int x = 0; x < items; x++)
	{
		cout << DArray[x] << ", ";
	}
	
	
	//if the user presses 'ENTER' after the program is finished, we deallocated the memory used for the dynamic array 
	//and set back equal to 'NULL' or zero.  con.ignore() function can be used the wait for the 'ENTER' key to be pressed
	//but you can also use cin.get().
	if (cin.ignore())
	{
		delete[] DArray;
		DArray = NULL;
	}
}

