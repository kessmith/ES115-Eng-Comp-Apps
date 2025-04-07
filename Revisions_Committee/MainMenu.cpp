/*
James McCoy ES115
This program is the Main Menu for all of the examples codes from each chapter from the C++ Textbook.
This program calls the individual menus for each chapter which then calls the seperate examples from each chapter. 
*/
#include <iostream> // The library in use for this program
#include <string> // Another library in use for this program 

using namespace std; // name space standard is in use
 int mainDate(); //call name date function


int main()
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window
		mainDate(); //call namedate function

		cout << " C++ Main Menu \n \n"; //display text title

		printf("1. C++ Chapter 1 Examples \n"); //display text as option
		printf("2. C++ Chapter 2 Examples \n"); //display text as option
		printf("3. C++ Chapter 3 Examples \n"); //display text as option
		printf("4. C++ Chapter 4 Examples \n"); //display text as option
		printf("5. C++ Chapter 5 Examples \n"); //display text as option
		printf("6. C++ Chapter 6 Examples \n"); //display text as option

		cout << "Enter a number: 1-6 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection
		
		int menuch01();// call each chapter menu file
		int menuch02();// call each chapter menu file
		int menuch03();// call each chapter menu file
		int menuch04();// call each chapter menu file
		int menuch05();// call each chapter menu file
		int menuch06();// call each chapter menu file

		if (selection == 1) //if user chooses first option
		{
			system("CLS"); //clear window
			 mainDate(); //call name date function
		 	 menuch01(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses second option
		{
			system("CLS"); //clear window
			 mainDate(); //call name date function
			 menuch02(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
			 mainDate(); //call name date function
			 menuch03(); //call indiviual example program function
		}
		else if (selection == 4) //if user chooses third option
		{
			system("CLS"); //clear window
			 mainDate(); //call name date function
			 menuch04(); //call indiviual example program function
		}
		else if (selection == 5) //if user chooses third option
		{
			system("CLS"); //clear window
			 mainDate(); //call name date function
			 menuch05(); //call indiviual example program function
		}
		else if (selection == 6) //if user chooses third option
		{
			system("CLS"); //clear window
				mainDate(); //call name date function
				menuch06(); //call indiviual example program function
		}
	}
	return 0; //return to parent program 		
}

