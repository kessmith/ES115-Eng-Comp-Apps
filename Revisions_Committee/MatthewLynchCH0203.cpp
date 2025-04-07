/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program calculates the change a person chould get back
after inserting a certain bill
*/
#include <iostream> // using iostream library
#include <iomanip> // using iomanip library

using namespace std; // Standard configuration for C++

int main0203() // start of function main
{
	const int PENNIES_PER_DOLLAR = 100; // there are 100 pennies in a dollar
	const int PENNIES_PER_QUARTER = 25; // there are 25 pennies in a quarter

	cout << "Enter bill value (1= $1 bill, 5= $5 bille, etc.): "; // prints Enter bill value 
	int bill_value; // defines bill value
	cin >> bill_value; // assigns bill value
	cout << "Enter item price in pennies: "; // prints Enter item price in pennies
	int item_price; // defines item price
	cin >> item_price; // assigns item price

	int amount_due = PENNIES_PER_DOLLAR * bill_value - item_price; // defines amount due 
	int dollar_coins = amount_due / PENNIES_PER_DOLLAR; // defines how many dollars to give back
	amount_due = amount_due % PENNIES_PER_DOLLAR; // assigns the pennies left over to amount_due
	int quarters = amount_due / PENNIES_PER_QUARTER; // defines  how many quarts to give back

	cout << "Dollar coins: " << setw(6) << dollar_coins << endl // prints Dollar coins
	<< "Quarters:     " << setw(6) << quarters << endl; // prints quarters
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
}