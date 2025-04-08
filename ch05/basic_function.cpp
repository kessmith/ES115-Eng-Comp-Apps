#include <iostream>

using namespace std;

string characterFunc(string str)
{
    // Declare a variable to hold the length of the string
    int length = str.length();
    cout << "The string is " << length << " characters long" << endl;

    // Loop through the string to count the occurrences of each character
    for (int i = 0; i < length; i++)
    {
        // Check to see how many times str[i]
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        cout << "The character " << str[i] << " appears " << count << " times" << endl;
    }
}

int main(){
    // Declare a variable to hold the string
    string str; // defined variable called str

    // Prompt the user for input
    cout << "Enter a string: ";
    cin >> str;

    // Call characterFunc and determine the length of the string and determine how many characters are in the string
    characterFunc(str);
    // main(parameter-variable)

    return 0;
}