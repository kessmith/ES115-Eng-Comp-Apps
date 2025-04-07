/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program prints a table with 1-10 to the first, second, thrid, and fourth power.
This table also include headers for each power being calculated.
*/

#include <iostream> // using iostream
#include <iomanip> // using iomanip
#include <cmath> // using cmath

using namespace std; // standard configuration for C++

int main0404() // start of function main
{  
   const int NMAX = 4; // initializes and assigns NMAX a value of 4
   const double XMAX = 10; // initializes and assigns XMAX a value of 10

   // Print table header

   for (int n = 1; n <= NMAX; n++) // sets condition for for the following
   {
      cout << setw(10) << n; // after 10 spaces print n
   }
   cout << endl; // starts a new row
   for (int n = 1; n <= NMAX; n++) // sets condition for for the following
   {
      cout << setw(10) << "x "; // after 10 spaces print x
   }
   cout << endl << endl; // makes an empty row and starts a new line

   // Print table body

   for (double x = 1; x <= XMAX; x++) // sets conditions for the following
   {
      // Print table row

      for (int n = 1; n <= NMAX; n++) // sets conditions ofr the following
      {
         cout << setw(10) << pow(x, n); // after 10 spaces calculate and print x^n
      }
      cout << endl; // start of a new row
   }
   system("Pause"); // pasues window to see the full code

   return 0; //  return code of zero
} // end of function main
