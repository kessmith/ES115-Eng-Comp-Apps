/*
James McCoy ES115
This program calls the individual menus for each chapter which then calls the seperate examples from each chapter.
*/
#include <iostream> // iostream is in use for this program
#include <string> // string library is in use for this program

using namespace std; // workspace in use 
int mainDate(); // name and date diplayed
int main0601(); //individual example program function
int main0602(); //individual example program function
int main0603(); //individual example program function
int menuch06()
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window
		mainDate(); // name and date 
		cout << "\n C++ Chapter 06 Examples \n \n"; //display text title


		printf("1. Chapter06 Example 01 \n"); //display text as option
		printf("2. Chapter06 Example 02 \n"); //display text as option
		printf("3. Chapter06 Example 03 \n"); //display text as option

		cout << "Enter a number: 1-3 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses second option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0601(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0602(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
		     	mainDate(); //call name date function
				main0603(); //call indiviual example program function
		}
	}
	
	return 0; //return 0
}