/*
Name: Matthew Lynch
Date: 02/17/2024
ClasProject:  ES-115
This program 
*/

#include <iostream> //using iostream library
#include <iomanip> // using iomanip library
#include <string> // using string library

using namespace std; // standard configuration for C++

const int COLUMNS = 3; // columns is set to a constant 3

/**
Computes the total of a row in a table.
@param table a table with 3 columns
@param row the row that needs to be totaled
@return the sum of all elements in the given row
*/
double row_total(int table[][COLUMNS], int row) // row total is a function of matrix table and row
{
	int total = 0; // total is set to zero
	for (int j = 0; j < COLUMNS; j++) // does the following for all columns
	{
		total = total + table[row][j]; // computes the total for the given row
	}
	return total; // returns the value of total to function row total
} // end of function row total

int main0603() // start of function main
{
	const int COUNTRIES = 7; // countries is set to a constant 7
	const int MEDALS = 3; // medals is set to a constant 3
	
	string countries[] = // string array with the following strings
	{
		"Canada", // array position 0
		"China", // array position 1
		"Germany", // array position 2
		"Korea", // array position 3
		"Japan", // array position 4
		"Russia", // array position 5
		"United States" // array position 6
	};
	
	int counts[COUNTRIES][MEDALS] = // defines the matrix counts
	{
		{ 1, 0, 1 }, // matrix row 1
		{ 1, 1, 0 }, // matrix row 2
		{ 0, 0, 1 }, // matrix row 3
		{ 1, 0, 0 }, // matrix row 4
		{ 0, 1, 1 }, // matrix row 5
		{ 0, 1, 1 }, // matrix row 6
		{ 1, 1, 0 } // matrix row 7
	};
	
	cout << " Country Gold Silver Bronze Total" << endl; // prints out the labels for the columns
	
	// Print countries, counts, and row totals
	for (int i = 0; i < COUNTRIES; i++) // the following happens for all rows
	{
		cout << setw(15) << countries[i]; // after 15 spaces print the the ith conutry name
		// Process the ith row
		for (int j = 0; j < MEDALS; j++) // does the following for all columns
		{
			cout << setw(8) << counts[i][j]; // after 8 spaces prints out the values of the matrix
		}
		int total = row_total(counts, i); // runs function row total for all rows and puts it in variable total
		cout << setw(8) << total << endl; // after 8 spaces print total
		}
	system("Pause"); // pasues window to see the full code

	return 0; // returns the value zero to function main and ends the program
} // end of function main