#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Please enter a number between 1 and 3: ";
    cin >> number;

    switch(number){
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
            cout << "You entered a number that is not between 1 and 3" << endl;
    }
}