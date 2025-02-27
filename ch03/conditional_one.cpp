#include <iostream>

using namespace std;

int main() {
    int floor, actual_floor;

    cout << "Enter desired floor number: ";
    cin >> floor;

    if(floor > 13) {
        actual_floor = floor - 1;
    } else {
        actual_floor = floor;
    }
}

int main() {
    int floor, actual_floor;

    cout << "Enter desired floor number: ";
    cin >> floor;

    actual_floor = floor;
    if(floor > 13) {
        // code block
        actual_floor = floor - 1;
    }
    cout << "You are going to floor " << actual_floor << endl;
}













// int main() {
//     int floor, actual_floor;

//     cout << "Enter desired floor number: ";
//     cin >> floor;

//     actual_floor = floor;

//     if (floor > 13) { // We don't like Floor 13 it is scary
//         actual_floor--; // decrement by 1
//     }
//     cout << "You are going to floor " << actual_floor << endl;
//     return 0;
// }