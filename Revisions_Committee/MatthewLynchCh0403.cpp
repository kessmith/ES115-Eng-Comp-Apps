/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program takes the input from the user to determine the amount of the balance after that amount of years
and prints those value out
*/

#include <iostream> // using iostream library

using namespace std; // standard configuration for C++

int main0403() // start of function main
{
	double sum = 0; // sum is deinfed as a variable and is set to 0
	int count = 0; // count is defined as a variable and is set to 0
	double salary = 0; // salary is defined as a variable and is set to 0
	cout << "Enter salaries, -1 to finish: "; // prints out Enter salaries, -1 to finish:
	while (salary != -1) // when salary is any number but -1 the following happens
		{
			cin >> salary; // user inputs a value for salary
			if (salary != -1) // when salary is not -1 the following happens
			{
				sum = sum + salary; // sum now equal the sum plus the the salary
				count++; // 1 is added to count
			}
		}
	if (count > 0) // if count is above 0 the following happens
		{
			double average = sum / count; // average is defined as a variable and equals sum divided by count
			cout << "Average salary: " << average << endl; // prints out Average salary: 
		}
	else // if salary is -1 the following happens
		{
			cout << "No data" << endl; // prints out No data
		}
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
	
} // end of function main