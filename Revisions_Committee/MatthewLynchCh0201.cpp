/*
Name: Matthew Lynch
Date: 02/04/2024
ClasProject:  ES-115
This program computes the volume (in liters) of a six-pack of soda
cans and the total volume of a six-pack and a two-liter bottle
*/

#include <iostream> //includes iostream library
using namespace std; // standard configuration for C++

int main0201() //start of function main
{
	int cans_per_pack = 6; // There are six cans in one pack
		const double CAN_VOLUME = 0.355; //Liter in a 12-ounce can
		double total_volume = cans_per_pack * CAN_VOLUME; // liters in all six cans

		cout << "A six-pack of 12 ounce cans contains "
			<< total_volume << " liters." << endl; // prints how many liters in 6 cans 

		const double BOTTLE_VOLUME = 2; // Two-Liter in a bottle

		total_volume = total_volume + BOTTLE_VOLUME; //total liters in a six-pack and two-liter bottle

		cout << "A six-pack and a two-liter bottle contain "
			<< total_volume << " liters." << endl; // prints how many liters in both a six-pack and a two-liter bottle
		system("Pause"); // pasues window to see the full code

		return 0; // return code of zero
} // end of function main