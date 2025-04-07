/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program takes the users inputted income and marital status to 
calculate how much they have to pay in taxes
*/
#include <iostream> // using iostream library
#include <string> // using string library

using namespace std; // Standard configuration for C++

int main0302() // start of function main
{
	const double RATE1 = 0.10; // sets RATE1 at a constant 0.10
	const double RATE2 = 0.25; // sets RATE2 at a constant 0.25
	const double RATE1_SINGLE_LIMIT = 32000; // sets RATE1_SINGLE_LIMIT at a constant 32000
	const double RATE1_MARRIED_LIMIT = 64000; // sets RATE1_MARRIED_LIMIT AT A CONSTANT 64000

	double tax1 = 0; // defines tax1 as a variable and sets its value to 0
	double tax2 = 0; // defines tax2 as a variable and sets its value to 0

	double income; // defines income as a variable 
	cout << "Please enter your income: "; // prints out Please enter your income:
		cin >> income; // user inputs their income

	cout << "Please enter s for single, m for married: "; // prints out Please enter s for single, m for married:
	string marital_status; // defines marital status as a string of characters
	cin >> marital_status; // inputs their marital status

	if (marital_status == "s") // if user is single the following is used
	{
		if (income <= RATE1_SINGLE_LIMIT) // if income is less than or equal to 32000 the following happens
		{
			tax1 = RATE1 * income; // income is multiplied by 0.10 and put into tax1
		}
		else // if income is greater than 32000 the following happens
		{
			tax1 = RATE1 * RATE1_SINGLE_LIMIT; // 0.10 is multiplied by 32000 and put into tax1
			tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT); // multiplies RATE2 by how much more you make than 32000
		}
	}
	else // if user is married the following happens
	{
		if (income <= RATE1_MARRIED_LIMIT) // if income is less than 64000 the following happens
		{
			tax1 = RATE1 * income; // income is multiplied by the 0.10 and is put into tax1
		}
		else // if income is greater than 64000 the following happens
		{
			tax1 = RATE1 * RATE1_MARRIED_LIMIT; // 0.10 is multiplied by 64000 and put into tax1
			tax2 = RATE2 * (income - RATE1_MARRIED_LIMIT); // multiplies 0.25 by how much more you make than 64000
		}
	}

	double total_tax = tax1 + tax2; // adds tax 1 and 2 to get the toal amount of taxes to pay

	cout << "The tax is $" << total_tax << endl; // prints out how much the person needs to pay in taxes
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
} // end of function main