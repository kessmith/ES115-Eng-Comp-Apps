#include <iostream>

using namespace std;

string multiply(double values[], int size, double factor)
{
    for (int i = 0; i < size; i++)
    {
        values[i] = values[i] * factor;
    }
    return "Completed Update";
}

int main(){
    const int SIZE = 5;
    double results[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double factor = 2.0;

    string response = multiply(results, SIZE, factor);
    cout << "Response from function: " << response << endl;
    
    cout << "Values after multiplication: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << results[i] << " ";
    }
    cout << endl;


    return 0;
}
