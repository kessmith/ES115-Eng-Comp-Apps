/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program calculates how long it takes to double your money in years
*/

#include <iostream> // using iostream library

using namespace std; // Standard configuration for C++

 int main0401() // start of function main
 {
	const double RATE = 5; // Rate is a constant 5
	const double INITIAL_BALANCE = 10000; // Initial balalance is a constant 10000
	const double TARGET = 2 * INITIAL_BALANCE; // target is a constant 2 time inital balance
	
	double balance = INITIAL_BALANCE; //initializes and sets the value of balance to initial balance
	int year = 0; // initializes and sets year equal to zero
	
	while (balance < TARGET) // while the balance is less than double the initial amount do the following
	{
		year++; // add 1 to the year
		double interest = balance * RATE / 100; // initializes interest and sets it equal balance times rate divided by 100
		balance = balance + interest; // sets balance equal to the balance plus the interest
	}
	
	cout << "The investment doubled after " // prints out The investment doubled after and print out the year 
	<< year << " years." << endl;
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
	 } // end of function main