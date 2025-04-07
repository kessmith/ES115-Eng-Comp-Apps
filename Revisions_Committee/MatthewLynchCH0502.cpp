/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program takes the inputted number and puts it into words
*/

#include <iostream> // using iostream library
#include <string> // using string library

using namespace std; // standard configuration for C++

/**
Turns a digit into its English name.
@param digit an integer between 1 and 9
@return the name of digit (“one” ... “nine”)
*/

string digit_name(int digit) // digit name is a function of digit
{
	if (digit == 1) return "one"; // when digit is 1 it returns one
	if (digit == 2) return "two"; // when digit is 2 it returns two
	if (digit == 3) return "three"; // when digit is 3 it returns three
	if (digit == 4) return "four"; // when digit is four it returns four
	if (digit == 5) return "five"; // when digit is 5 it returns five
	if (digit == 6) return "six"; // when digit is 6 it returns six
	if (digit == 7) return "seven"; // when digit is 7 it returns seven
	if (digit == 8) return "eight"; // when digit is 8 it returns eight
	if (digit == 9) return "nine"; // when digit is 9 it returns nine
	return ""; // returns a space
}

/**
Turns a number between 10 and 19 into its English name.
@param number an integer between 10 and 19
@return the name of the given number (“ten” ... “nineteen”)
*/

string teen_name(int number) // teen name is a function of number
{
	if (number == 10) return "ten"; // when number is 10 it returns ten
	if (number == 11) return "eleven"; // when number is 11 return eleven
	if (number == 12) return "twelve"; // when number is 12 it returns twelve
	if (number == 13) return "thirteen"; // when number is 13 it returns thirteen
	if (number == 14) return "fourteen"; // when number is 14 it returns fourteen
	if (number == 15) return "fifteen"; // when number is 15 it returns fifteen
	if (number == 16) return "sixteen"; // when number is 16 it returns sixteen
	if (number == 17) return "seventeen"; // when number is 17 it returns seventeen
	if (number == 18) return "eighteen"; // when number is 18 it returns eighteen
	if (number == 19) return "nineteen"; // when number is 19 it returns nineteen
	return ""; // return a space
	}

/**
Gives the name of the tens part of a number between 20 and 99.
@param number an integer between 20 and 99
@return the name of the tens part of the number (“twenty” ... “ninety”)
*/

string tens_name(int number) // tens name is a function of number
{
	if (number >= 90) return "ninety"; // when number is 90 it returns ninety
	if (number >= 80) return "eighty"; // when number is 80 it retunr eighty
	if (number >= 70) return "seventy"; // when number is 70 it returns seventy
	if (number >= 60) return "sixty"; // when number is 60 it returns sixty
	if (number >= 50) return "fifty"; // when number is 50 it returns fifty
	if (number >= 40) return "forty"; // when number is 40 it returns fourty
	if (number >= 30) return "thirty"; // when number is 30 it returns thrity
	if (number >= 20) return "twenty"; // when number is 20 it returns twenty
	return ""; // returns a space
	}

/**
Turns a number into its English name.
@param number a positive integer < 1,000
@return the name of the number (e.g. “two hundred seventy four”)
*/

string int_name(int number) // int name is a function of number
{
	int part = number; // The part that still needs to be converted
	string name; // The return value
		if (part >= 100) // if part is greater than or equal to 10 the following happens
		{
		name = digit_name(part / 100) + " hundred"; // name is digit name of number divided by 100 followed by hundred
		part = part % 100; // part now equals the remander of part divided by 100
		}
	
		if (part >= 20) // if part is greater than or equal to 20 the following happens
		{
		name = name + " " + tens_name(part); // name now is name, a space, plus the tens name of part
		part = part % 10; // part is now the remander of part divided by 10
		}
	else if (part >= 10) // if the previous isn't true then the following happens
		{
		name = name + " " + teen_name(part); // name is now name, a space, plus teen name of part
		part = 0; // part is now 0
		}
	
		if (part > 0) // if part is greater than o the following happens
		{
		name = name + " " + digit_name(part); // name is now name, a space, pluss digit name of part
		}
	
		return name; // returns name
	}

int main0502() // start of function main
{
	cout << "Please enter a positive integer: "; // prints out Please enter a positive integer: 
	int input; // defines input as a variable
	cin >> input; // users input is now assigned to input
	cout << int_name(input) << endl; // prints out int name of input
	system("Pause"); // pasues window to see the full code

	return 0; // returns a standard value
} // end of function main