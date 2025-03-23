#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int NMAX = 4;
    const double XMAX = 10.0;

    // Print table header
    for (int i = 1; i<=NMAX; i++)
    {
        cout << setw(10) << i;
    }
    cout << endl;
    for (int i = 1; i <= NMAX; i++)
    {
        cout << setw(10) << "x ";
    }
    cout << endl << endl;
    // Print table body
    for (double x = 1; x <= XMAX; x++)
    {
        for (int n = 1; n <= NMAX; n++)
        {
            cout << setw(10) << pow(x, n);
        }
        cout << endl;
    }
    return 0;
}