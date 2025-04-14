#include <iostream>

using namespace std;

/**
 * Finds the maximum value in an array.
 * @param values a partially filled array
 * @param size the number of elements in values
 * @return the maximum value in the array
 */
double max_value(double values[], int size)
{
    double max = values[0];
    for (int i = 1; i < size; i++)
    {
        if (values[i] > max)
        {
            max = values[i];
        }
    }
    return max;
}

int main(){
    const int MAX_SIZE = 100;
    double values[MAX_SIZE];
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> values[i];
    }

    double max = max_value(values, size);
    cout << "The maximum value in the array is: " << max << endl;

    return 0;
}