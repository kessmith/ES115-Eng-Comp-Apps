/*
James McCoy ES115
This program calls the individual menus for each chapter which then calls the seperate examples from each chapter.
*/
#include <iostream> // declares iostream for usable library for program 
#include <string> // declares string as a usable library for program 

using namespace std; // namespace standard is in use for this program
int mainDate();     // displays name and date at the top of the program 
int main0301();  //individual example program function
int main0302(); //individual example program function
int main0303(); //individual example program function

int menuch03() // beginning of menu code
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window
		mainDate(); // displays name and date at the top of the screen 
		cout << "\n C++ Chapter 03 Examples \n \n"; //display text title

		int McCoyJames0301();//individual example program function
		printf("1. Chapter03 Example 01 \n"); //display text as option
		printf("2. Chapter03 Example 02 \n"); //display text as option
		printf("3. Chapter03 Example 03 \n"); //display text as option

		cout << "Enter a number: 1-3 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0301(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0302(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				main0303(); //call indiviual example program function
		}
	}
	return 0; //return 0
}