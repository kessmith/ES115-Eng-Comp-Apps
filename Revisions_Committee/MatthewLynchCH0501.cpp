/*
Name: Matthew Lynch
Date: 02/11/2024
ClasProject:  ES-115
This program  uses a function set up before function mian 
to calculate the volumes of cubes with different side lengths
*/

#include <iostream> // using iostream library

using namespace std; // standard configuration of C++

/**
Computes the volume of a cube.
@param side_length the side length of the cube
@return the volume
*/
 double cube_volume(double side_length) // starts the cube volume function and defines side length
{
	double volume = side_length * side_length * side_length; // variable volume is equal to side length cubed
	return volume; // recalls the value stored in volume
}

int main0501() // start of function main
{
	double result1 = cube_volume(2); // calls function cube when side length is 2
	double result2 = cube_volume(10); // calls function cube when side length is 10
	cout << "A cube with side length 10 has volume " << result2 << endl; // prints out the value of cube volume when side length is 10
	system("Pause"); // pasues window to see the full code

	return 0; // return code of zero
} // end of function main