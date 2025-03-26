#include <iostream>
#include <string>

using namespace std;

void characterFunc(string str)
{
    int length = str.length();
    cout << "The string is " << length << " characters long" << endl;

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

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Call characterFunc and determine the length of the string and determine how many characters are in the string
    characterFunc(str);

    return 0;
}