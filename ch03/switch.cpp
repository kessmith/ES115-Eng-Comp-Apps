#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number between 1 and 3: ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        default:
            cout << "Invalid number." << endl;
            break;
    }

    return 0;
}