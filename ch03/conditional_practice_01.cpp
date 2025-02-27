#include <iostream>

using namespace std;

// Question 1
int main() {
    int num;
    cout << "Enter a integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

// Question 2
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The greater number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The greater number is: " << num2 << endl;
    } else {
        cout << "The numbers are equal." << endl;   
    }
}

// Question 3

// Question 4