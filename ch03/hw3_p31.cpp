#include <iostream>

using namespace std;

int main() {
    double temp;
    string tempLetter;

    cout << "Enter the temperature: ";
    cin >> temp;
    cout << "Enter the temperature letter (C/F): ";
    cin >> tempLetter;

    if (tempLetter =="C"){
        if (temp < 0) {
            cout << "The temperature is below freezing." << endl;
        } else if (temp >= 0 && temp <= 100) {
            cout << "The temperature is above freezing." << endl;
        } else {
            cout << "The temperature is above boiling." << endl;
        }
    } else if (tempLetter == "F") {
        if (temp < 32) {
            cout << "The temperature is below freezing." << endl;
        } else if (temp >= 32 && temp <= 212) {
            cout << "The temperature is above freezing." << endl;
        } else {
            cout << "The temperature is above boiling." << endl;
        }
    } else {
        cout << "Invalid temperature letter. Please enter 'C' or 'F'." << endl;
    }
}