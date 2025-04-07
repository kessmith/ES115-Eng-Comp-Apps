/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program takes the input from the user to determine the amount of the balance after that amount of years
and prints those value out
*/

#include <iostream> // using iostream library
#include <iomanip> // using iomanip library

using namespace std; // standard configuration for C++

 int main0402() // start of function main
{
	const double RATE = 5; // set rate always equal to 5
	const double INITIAL_BALANCE = 10000; // set initial balance always equal to 10000
	double balance = INITIAL_BALANCE; // set balance equal to initial balance
	int nyears; // defines nyears as a variable
	cout << "Enter number of years: "; // print out Enter number of years:
	cin >> nyears; // user inputs number of years and assigns the value to nyears
	
	cout << fixed << setprecision(2); // // sets balance to display with only 2 decimal places
	for (int year = 1; year <= nyears; year++) // sets year to 1 and repeats until years is equal to nyears while increasing the year by 1 every time
	{
		balance = balance * (1 + RATE / 100); // sets the value of banalce equal to itself times 1 plus rate divided by 100
		cout << setw(4) << year << setw(10) << balance << endl; // after 4 spaces prints the value of year and after 10 spaces prints out value of balance
	}
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
	 } // end of function main