#include <iostream>

using namespace std;

int sumOfSquares(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i * i;
    }
    return sum;
}

int main(){
    int number;

    cout << "Please enter a number: ";
    cin >> number;

    if (number < 0){
        cout << "Please enter a positive number." << endl;
    } else {
        int result = sumOfSquares(number);
        cout << "The sum of squares from 1 to " << number << " is: " << result << endl;
    }
    return 0;
}