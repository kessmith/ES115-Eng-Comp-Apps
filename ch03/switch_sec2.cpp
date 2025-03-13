#include <iostream>

using namespace std;

int main() {
    int digit;
    cout << "Enter a number between 1 and 3: ";
    cin >> digit;

    switch(digit){
        case 1:
            cout << "You entered 1" << endl;
            break;
        case 2:
            cout << "You entered 2" << endl;
            break;
        case 3:
            cout << "You entered 3" << endl;
            break;
        default:
            cout << "You entered a number less than 1 or greater than 3" << endl;
            break;
    }
}