#include <iostream>

using namespace std;

void box_string(string str)
{
    int n = str.length();
    for (int i = 0; i < n + 2; i++) {
        cout << "-";
    }
    cout << endl;
    cout << "!" << str << "!" << endl;

    for (int i = 0; i < n + 2; i++) {
        cout << "-";
    }
    cout << endl;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    box_string(str);
    return 0;
}