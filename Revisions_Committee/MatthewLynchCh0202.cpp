/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program takes the input of the price per six-pack and can volume
to determine the price per ounce 
*/
#include <iostream> // using iostream library
#include <iomanip> // using iomanip library

using namespace std; // Standard configuration for C++

int main0202() // start of function main
{
	// Read price per pack

	cout << "Please enter the price for a six-pack: "; // prints please enter the price for a six-pack
	double pack_price; //defines pack price
		cin >> pack_price; // assigns pack price

		// Read can volume

		cout << "Please enter the volume for each can (in ounces): "; // prints please neter the volume for each can (in ounces)
		double can_volume; // defines can volume
		cin >> can_volume; // assigns can volumee

		// Compute pack volume

		const double CANS_PER_PACK = 6; // ther are 6 cans in a six-pack
		double pack_volume = can_volume * CANS_PER_PACK; // finds a six-packs total volume

		// Compute and print price per ounce

		double price_per_ounce = pack_price / pack_volume; // calculates the price per ounce of a six-pack

		cout << fixed << setprecision(2); // sets the price per ounce to display with only 2 decimal places
		cout << "Price per ounce: " << price_per_ounce << endl; // Prints price per ounce and then prints the actual value
		system("Pause"); // pasues window to see the full code

		return 0; // return code of zero
}