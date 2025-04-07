/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program prints 10 random numbers
*/

#include <iostream> // using iostream library
#include <cstdlib> // using cstdlib library

using namespace std; // standard configuration for C++

int main0405() // start of function main
{
	for (int i = 1; i <= 10; i++) // i=1 and when i is less tan or equal to 10 the following happens along with increasing by one
		{
			int r = rand(); // difines r and assigns it a random value
			cout << r << endl; // prints out the the value in r
		}
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
	} // end of function main