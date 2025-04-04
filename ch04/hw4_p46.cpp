// The program first prompts the user to enter the exchange rate between U.S. dollars and Japanese yen.
// It then enters a loop where it asks for a U.S. dollar amount, converts it to yen using the exchange rate,
// and prints the result. The loop continues until the user enters 0, at which point the program terminates.
// The program uses the fixed and setprecision manipulators to format the output to two decimal places.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double exchangeRate;
    cout << "Enter today's exchange rate (USD to JPY): ";
    cin >> exchangeRate;

    double usd;
    cout << "Enter USD amount (0 to quit): ";
    cin >> usd;

    while (usd != 0)
    {
        double yen = usd * exchangeRate;
        cout << fixed << setprecision(2);
        cout << usd << " USD = " << yen << " JPY" << endl;
        cout << "Enter USD amount (0 to quit): ";
        cin >> usd;
    }

    return 0;
}
