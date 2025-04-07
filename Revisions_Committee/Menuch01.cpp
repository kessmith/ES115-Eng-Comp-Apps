/*
James McCoy ES115
This program calls the individual menus for each chapter which then calls the seperate examples from each chapter.
*/
#include <iostream> // The libraries in use for this menu program 
#include <string> // Another library in use for this program

using namespace std; // name space standard is in use
int mainDate(); // displays the name and date at the top of the program 
int main0101(); // initializes the program so it can be used in the menu
/*
This is the menu code for Chapter 1 example codes.
*/
int menuch01() // main part of menu program begins for Chapt. 1
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window
		cout << "\n C++ Chapter 01 Examples \n \n"; //display text title


		printf("1. Chapter01 Example 01 \n"); //display text as option
		

		cout << "Enter a number: 1 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0101(); //call indiviual example program function
		}
	}
	 
	return 0; //wipes the screen and ends the program 
}