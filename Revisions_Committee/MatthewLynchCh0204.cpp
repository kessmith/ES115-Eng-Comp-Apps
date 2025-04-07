/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program takes the input of a persons name and the name of their
significant other and displays their initials
*/
#include <iostream> // using iostream library
#include <string> // using string library

using namespace std; // Standard configuration for C++

int main0204() // start of function main
{
	cout << "Enter your first name: "; //prints Enter your first name
	string first; // initializes strinng first
	cin >> first; // assigns string first
	cout << "Enter your significant other's first name: "; // prints Enter your significant other's first name
	string second; // initializes string second
	cin >> second; // assigns string second
	string initials = first.substr(0, 1) 
		+ "&" + second.substr(0, 1); // defines string intials as the first letter from string first and second
	cout << initials << endl; // prints intials of you and your significant other
	system("Pause"); // pasues window to see the full code

	return 0; // retrun code of zero
}