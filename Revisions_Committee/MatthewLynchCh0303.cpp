/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program checks for invalid inputs for the floor and gives the user an error message
if the input is inpossible. If there is no error with the input the code determines the
actual floor of the building the elevator will be traveling to. 
*/
#include <iostream> // using iostream library

using namespace std; // Standard configuration for C++

int main0303() // start of function main
{
	int floor; // initializes floor as a variable
	cout << "Floor: "; // prints Floor:
	cin >> floor; // input value for floor

	if (cin.fail()) // if there is no number entered as an input the following happens
	{
		cout << "Error: Not an integer." << endl; // prints error message for invalid input
		return 1; // exits function main
	}
	if (floor == 13) // if the floor input is 13 the following will happen
	{
		cout << "Error: There is no thirteenth floor." << endl; // prints an error message for not having a 13th floor
		return 1; // exits function main
	}
	if (floor <= 0 || floor > 20) // if the input is outside the acceptable range of values the following will happen
	{
		cout << "Error: The floor must be between 1 and 20." << endl; // prints an error message for the number falling out of the range
		return 1; // exits function main
	}

	int actual_floor; // initializes actual_floor as a variable
	if (floor > 13) // if the input for floor is above 13 the following will happen
	{
		actual_floor = floor - 1; // the value assigned to actual_floor will be one less than the input value
	}
	else // if the floor is bellow 13 the following happens
	{
		actual_floor = floor; // actual floor value will be the same as the floor value
	}

	cout << "The elevator will travel to the actual floor " // prints the floor the elevatoir will be traveling to
		<< actual_floor << endl; // prints the value for actual_floor
	system("Pause"); // pasues window to see the full code

	return 0; // return code of xero
} // end of function main