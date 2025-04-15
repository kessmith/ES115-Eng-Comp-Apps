#include <iostream>

using namespace std;

double sum(double data[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + data[i];
    }
    return total;
}

int main(){
    const int SIZE = 5;
    double data[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double total = sum(data, SIZE);
    cout << "The total is: " << total << endl;
    return 0;
}
