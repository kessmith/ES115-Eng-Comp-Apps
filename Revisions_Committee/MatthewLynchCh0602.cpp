/*
Name: Matthew Lynch
Date: 02/17/2024
ClasProject:  ES-115
This program reads the inputs in an array and multiplies them by two and prints the updated values 
*/

#include <iostream> // using iostream library

using namespace std; // standard configuration for C++
/**
Reads a sequence of floating-point numbers.
@param inputs an array containing the numbers
@param capacity the capacity of that array
@return the number of inputs stored in the array
*/
int read_inputs(double inputs[], int capacity) // read_inputs is a function of array inputs and capacity
{
	int current_size = 0; // current size of array is 0
	cout << "Please enter values, Q to quit:" << endl; // prints a message asking for inputs
	bool more = true; // more is set to true
	while (more) // while more is true the following happens
	{
		double input; // defiens input as variable type double
		cin >> input; // takes users inputs and puts it in variable input
		if (cin.fail()) // if the user inputs a variable that does not work the following happens
		{
			more = false; // more is set to false and the function stops
		}
		else if (current_size < capacity) // if the current ize is less than capacity the following happens
		{
			inputs[current_size] = input; // the input of the user is put into the arrays next available slot
			current_size++; // one is added to the current size of the array
		}
	}
	return current_size; // returns the current siz eof the array to function read_inputs
} // end of function read_inputs

/**
Multiplies all elements of an array by a factor.
@param values a partially filled array
@param size the number of elements in values
@param factor the value with which each element is multiplied
*/
void multiply(double values[], int size, double factor) // funtion multiply is a function oif array values size and factor
{
	for (int i = 0; i < size; i++) // goes throught all inputs in the array and does the following
	{
		values[i] = values[i] * factor; // the array value is multiplied by a factor
	}
} // end of function multiply

/**
Prints the elements of a vector, separated by commas.
@param values a partially filled array
@param size the number of elements in values
*/
void print(double values[], int size) // start of function print defined by array value and size
{
	for (int i = 0; i < size; i++) // goes through all array values and does the following
	{
		if (i > 0) { cout << ", "; } // if i is greater than 0 a comma is printed
		cout << values[i]; // prints out the array value
	}
	cout << endl; // starts a new line
} // end of function print

int main0602() // start of function main
{
	const int CAPACITY = 1000; // stes capacity to a constant 1000
	double values[CAPACITY]; // defines array with 1000 values
	int size = read_inputs(values, CAPACITY); // variable size is set the the returned value of read_inputs
	multiply(values, size, 2); // function multiply is run with values, size, and a factor of 2
	print(values, size); // function print is run with values and size
	system("Pause"); // pasues window to see the full code

	return 0; // 0 is returned to function main and the program stops
} // end of function main