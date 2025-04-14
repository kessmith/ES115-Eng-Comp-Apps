#include <iostream>

using namespace std;

int main(){
    double values[5] = { 32, 54, 67.5, 29, 34.5};

    double max = values[0];
    for (int i = 1; i < 5; i++)
    {
        if (values[i] > max){
            max = values[i];
        }
    }

    cout << "The maximum value in the array is: " << max << endl;
    return 0;
}