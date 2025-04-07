/*
James McCoy ES115
This program calls the individual menus for each chapter which then calls the seperate examples from each chapter.
*/
#include <iostream> // iostream library
#include <string> // string library

using namespace std; // namepsace standard is in use
int mainDate(); // name and date at the top of screen
int main0501(); //individual example program function
int main0502(); //individual example program function
int main0503(); //individual example program function
int main0504(); //individual example program function
int menuch05() // main body of code begins 
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window
		mainDate(); // name and date fxn
		cout << "\n C++ Chapter 05 Examples \n \n"; //display text title


		printf("1. Chapter05 Example 01 \n"); //display text as option
		printf("2. Chapter05 Example 02 \n"); //display text as option
		printf("3. Chapter05 Example 03 \n"); //display text as option
		printf("4. Chapter05 Example 04 \n"); //display text as option

		cout << "Enter a number: 1-4 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses second option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0501(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0502(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0503(); //call indiviual example program function
		}
		else if (selection == 4) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0504(); //call indiviual example program function
		}
	}
	return 0; //return 0
}