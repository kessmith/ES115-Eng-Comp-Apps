/*
Name: Matthew Lynch
Date: 02/17/2024
ClasProject:  ES-115
This program takes the inputs of the user and writes them all out
and determines the largest inputted value
*/

#include <iostream> // using iostream library

using namespace std; // standard configuration for C++

int main0601() // start of function main
{
	const int CAPACITY = 1000; // defines capacity as a constant 100
	double values[CAPACITY]; // sets array type double for values up to 100 
	int current_size = 0; // size of current array is zero
	
	cout << "Please enter values, Q to quit:" << endl; // prints out a message to inpu values
	double input; // defines input as a double variable
	while (cin >> input) // while the user is inputting values the following happens
		{
			if (current_size < CAPACITY) // when current size of array is less than 100 the following happens
			{
				values[current_size] = input; // the input of the user is stored in the array
				current_size++; // size of the current array grows by 1
			}
		}
	
	double largest = values[0]; // sets the largest value in the array
	for (int i = 1; i < current_size; i++) // looks at all array inputs and applies the following
	{
		if (values[i] > largest) // if the value in the array is greater than the previous largest value in the array the following happens
		{
			largest = values[i]; // that value is set to the largest value in the array
		}
	}
	
	for (int i = 0; i < current_size; i++) // looks at all values in the array and the following happens
	{
		cout << values[i]; // prints out the values in the array
		if (values[i] == largest) // if the value in array is the largest the following happens
		{
			cout << " <== largest value"; // labels the largest value in the array
		}
		cout << endl; // starts a new line
	}
	system("Pause"); // pasues window to see the full code

	return 0; // returns a value 0 to function main and stops the program
} // end of function main