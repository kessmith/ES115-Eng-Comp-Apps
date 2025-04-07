/*
James McCoy ES115
This program calls the individual menus for each chapter which then calls the seperate examples from each chapter.
*/
#include <iostream> // include the iostream library
#include <string> // include string library

using namespace std; // use namespace standard
int mainDate(); // name date is displayed at the top of the program
int main0401(); //individual example program function
int main0402(); //individual example program function
int main0403(); //individual example program function
int main0404(); //individual example program function
int main0405(); //individual example program function
int main0406(); //individual example program function
int main0407(); //individual example program function

int menuch04()
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window
		mainDate(); // name and date
		cout << "\n C++ Chapter 04 Examples \n \n"; //display text title


		printf("1. Chapter04 Example 01 \n"); //display text as option
		printf("2. Chapter04 Example 02 \n"); //display text as option
		printf("3. Chapter04 Example 03 \n"); //display text as option
		printf("4. Chapter04 Example 04 \n"); //display text as option
		printf("5. Chapter04 Example 05 \n"); //display text as option
		printf("6. Chapter04 Example 06 \n"); //display text as option
		printf("7. Chapter04 Example 07 \n"); //display text as option

		cout << "Enter a number: 1-7 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses second option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0401(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
			    main0402(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
			    main0403(); //call indiviual example program function
		}
		else if (selection == 4) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0404(); //call indiviual example program function
		}
		else if (selection == 5) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0405(); //call indiviual example program function
		}
		else if (selection == 6) //if user chooses third option
		{
			system("CLS"); //clear window
			    mainDate(); //call name date function
			    main0406(); //call indiviual example program function
		}
		else if (selection == 7) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0407(); //call indiviual example program function
		}
	}
	return 0; //return 0
}