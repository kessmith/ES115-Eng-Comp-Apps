#include <iostream>

using namespace std;

int main(){
    double exchangeRate, USD, yen;

    cout << "Enter today's exchange rate (USD to JPY): ";
    cin >> exchangeRate;

    cout << "Enter USD amount (0 to quit): ";
    cin >> USD;

    while (USD != 0)
    {
        yen = USD * exchangeRate;
        cout << USD << " USD = " << yen << " JPY" << endl;
        cout << "Enter USD amount (0 to quit): ";
        cin >> USD;
    }
    return 0;
}