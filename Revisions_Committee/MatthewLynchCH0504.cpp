/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program takes the inputted number and puts it into words
*/

#include <iostream> // using iostream library

using namespace std; // standard configuration for C++

/**
Prints a triangle with a given side length.
@param side_length the side length (number of [] along the base)
*/

void print_triangle(int side_length) // print raingle is a function for side length
{
	if (side_length < 1) { return; } // if side length is less than one the function stops
	print_triangle(side_length - 1); // funtion print triangle is side length minus 1
	for (int i = 0; i < side_length; i++) // i is 0 and when i is less than side length the following happens and 1 is added to i
		{
		cout << "[]"; // prints []
		}
	cout << endl; // starts on a new line
	}

int main0504() // start of function main
{
	cout << "Enter the side length: "; // prints out Enter the side length:
	int input; // defines input as a variable
	cin >> input; // users input is assigned to input
	print_triangle(input); // runs function print triangle for the input
	system("Pause"); // pasues window to see the full code

	return 0; // stops function
} // end of function main