#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cout << "Please enter an integer between 1,000 and 999,999: ";
    cin >> number;

    string result;
    for (char c : number) {
        if (c != ',') {
            result += c;
        }
    }

    cout << "Number without commas: " << result << std::endl;
    return 0;
}