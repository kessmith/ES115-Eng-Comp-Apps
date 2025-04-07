/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program accpets the floor input from the user and determines 
the floor that they will actually be going to and prints out both the actual floor and the inputed floor
*/
#include <iostream> // using iostream

using namespace std; // standard configuration for C++

int main0301() // start of function main
{
	int floor; // defines floor as a variable
	cout << "Floor: "; // prints out Floor:
		cin >> floor; // input assigned as value of floor
		int actual_floor; // defines actual_floor as a variable
		if (floor > 13) // when the floor is greater than 13 the following will happen
		{
			actual_floor = floor - 1; // value of actual_floor is one less than floor input
		}
		else // when anything else is input the next occurs
		{
			actual_floor = floor; // actual_floor is the same as floor
		}

		cout << "The elevator will travel to the actual floor " // prints out everything in quotes
			<< actual_floor << endl; // prints out value of actual_floor
		system("Pause"); // pasues window to see the full code

		return 0; // return code of zero
} // end of function main