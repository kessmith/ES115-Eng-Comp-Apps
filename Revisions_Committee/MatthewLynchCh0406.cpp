/*
Name: Matthew Lynch
Date: 02/08/2024
ClasProject:  ES-115
This program generates and prints random numbers 
bewteen 1 and 6 10 times 
*/

#include <iostream> // using iostream
#include <string> // using string
#include <cstdlib> // using cstdlib
#include <ctime> // using ctime

using namespace std; // standard configuration for C++

int main0406() // start of function main
{  
   srand(time(0)); // generates a random seed to draw the random number in less than a second

   for (int i = 1; i <= 10; i++) // run the following 10 times
   {  
      int d1 = rand() % 6 + 1; // d1 is the remander of a random number divided by 6 and adding 1 
      int d2 = rand() % 6 + 1; // d2 is the remander of a random number divided by 6 and adding 1
      cout << d1 << " " << d2 << endl; // prints value of d1 and d2 with a space between them and print a new line
   }
   cout << endl; // start a new line
   system("Pause"); // pasues window to see the full code

   return 0; // return code of zero
} // end of function main
