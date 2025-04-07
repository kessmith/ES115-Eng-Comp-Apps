/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program uses random numbers to help estimate the value of pi
*/

#include <iostream> // using iostream library
#include <cstdlib> // using cstdlib library
#include <cmath> // using cmath library
#include <ctime> // using ctime library

using namespace std; // standard configuration for C++

int main0407() // start of function main
{
	const int TRIES = 10000; // Tries is always 10000
	
	srand(time(0)); // generates a random seed to draw a random number from
	
	int hits = 0; // defines hits as a variable and assigns it a value of 0
	for (int i = 1; i <= TRIES; i++) // the following runs 10000 times
		{
		double r = rand() * 1.0 / RAND_MAX; // Between 0 and 1
		double x = -1 + 2 * r; // Between –1 and 1
		r = rand() * 1.0 / RAND_MAX; // assigns r a new number bewteen 0 and 1
		double y = -1 + 2 * r; // defines y as a variable and assigns it a value of -1 plus 2 times r
		if (x * x + y * y <= 1) { hits++; } // if the following is less than 1 then hits increases by 1
		}
	double pi_estimate = 4.0 * hits / TRIES; // defines pi estimate as a variable and assigns it a value of 4 times hits divided by tries
	cout << "Estimate for pi: " << pi_estimate << endl; // prints out the estimate of pi
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
	} // end of function main