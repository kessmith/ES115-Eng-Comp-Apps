#include <iostream> 

using namespace std;

int main() {
    int pennies;
    cout << "Insert pennies here: " << endl;
    cin >> pennies;
    int dollars = pennies / 100;
    int cents = pennies % 100;
    cout << "$"<< dollars << " " << cents << endl;

    return 0;
}