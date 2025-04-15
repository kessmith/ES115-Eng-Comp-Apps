#include <iostream>

using namespace std;

// int main(){
//     double values[5] = { 32, 54, 67.5, 29, 34.5};

//     double max = values[0];

//     for(int i = 1; i<5; i++){
//         if (values[i] > max){
//             max = values[i];
//         }
//     }

//     cout << "The maximum value in the array is: " << max << endl;
//     return 0;
// }

void squares(int size, int result[])
{
    for (int i = 0; i < size; i++)
    {
        result[i] = i * i;
    }
}

int main()
{
    const int SIZE = 10;
    int squaresArray[SIZE];

    squares(SIZE, squaresArray);

    cout << "The squares of the first " << SIZE << " integers are: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << squaresArray[i] << " ";
    }
    cout << endl;

    return 0;
}
