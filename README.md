# Dynamic-Array
This is a simple C++ program to demonstrate how to go about setting up and using a Dynamic Array.

WHAT IS A DYNAMIC ARRAY:

Dynamic array is a array where the value or size of that array can be defined by the user; syntax is int *MyArray = new int[SIZE], a dynamic array can also be resized 
but not directly, this could be done by calling a new dynamic array and move the old array items to that newly created array.  You must deallocate the 
memory manually for a Dynamic array by using delete[] MyArray;.

Static array is a array where the value has to be predifined at run-time, int MyArray[5] = {}.
