/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program takes the inputted number and puts it into words
*/

#include <iostream> // using iostream library

using namespace std; // standard configuration for C++

/**
Withdraws the amount from the given balance, or withdraws
a penalty if the balance is insufficient.
@param balance the balance from which to make the withdrawal
@param amount the amount to withdraw
*/

void withdraw(double& balance, double amount) // withdraw is a function of reference balance and amount
{
	const double PENALTY = 10; // penalty is always 10
	if (balance >= amount) // if babalnce is greater than or equal to amount the following happens
		{
		balance = balance - amount; // balance is now babalnce minus amount
		}
	else // if the balance is less than the amount the following happens
		{
		balance = balance - PENALTY; // balance is now balance minus penalty
		}
	}

int main0503() // start of function main
{
	double harrys_account = 1000; // harrys account is 1000
	double sallys_account = 500; // sallys account is 500
	withdraw(harrys_account, 100); // calls dunction withdraw for harrys account and 100
	// Now harrys_account is 900
		withdraw(harrys_account, 1000); // Insufficient funds 
	// Now harrys_account is 890
		withdraw(sallys_account, 150); // calls function withdraw for sallys account and 150
	cout << "Harry's account: " << harrys_account << endl; // prints out the value in harrys account
	cout << "Sally's account: " << sallys_account << endl; // prints out the value in sallys account
	system("Pause"); // pasues window to see the full code

	return 0; // return has no value
} // end of function main