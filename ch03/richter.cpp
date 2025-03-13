#include <iostream>

using namespace std;

int main() {
    double richter;
    cout << "Please enter the richter scale value: ";
    cin >> richter;

    if (richter >= 8.0) {
        cout << "Most structures fall" << endl;
    } else if (richter >= 7.0) {
        cout << "Many buildings destroyed" << endl;
    } else if (richter >= 6.0) {
        cout << "Many buildings considerably damaged, some collapse" << endl;
    } else if (richter >= 4.5) {
        cout << "Damage to poorly constructed buildings" << endl;
    } else {
        cout << "Incorrect input" << endl;
        return 1;
    }
    return 0;
}