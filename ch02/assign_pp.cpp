#include <iostream>

using namespace std;
/*

int main() {
    string name = "Keshawn";
    int age = 26;

    cout << "Hi my name is " << name << " and I am" << age << " years old" << endl;
}
*/

// int main() {
//     int counter = 10;
//     int original_count = counter; 

//     counter--;


//     cout << "Original Count: " << original_count << " New count is: " << counter << endl;
//     return 0;
// }

// int main() {
//     int x = 40; 
//     int y = 3;

//     int divide = x/y;
//     int remainder = x % 100;

//     cout << "Division Answer is: " << divide << "Remainder is: " << remainder << endl;
//     return 0;
// }

// int main() {
//     int bottles;
//     int cans;

//     cout << "Enter the number of bottles: ";
//     cin >> bottles;

//     cans = bottles * 12;
//     cout << "You have " << cans << " cans" << endl;
//     return 0;
// }

// int main() {
//     string myName;
//     cout << "Enter your name: ";
//     cin >> myName;

//     cout << "Hello World!, My name is " << myName << endl;
// }

int main() {
    int floor, actual_floor;

    cout << "Enter desired floor number: ";
    cin >> floor;

    actual_floor = floor;

    if (floor > 13) {
        actual_floor--; // decrement by 1
    }
    cout << "You are going to floor " << actual_floor << endl;
    return 0;

    // if(floor > 12 or floor == 13) {
    //     actual_floor = floor - 1;
    //     cout << "You are going to floor " << actual_floor << endl;
    //     return 0;
    // } else {
    //     cout << "You are on floor " << floor << endl;
    //     return 0;
    // }
}