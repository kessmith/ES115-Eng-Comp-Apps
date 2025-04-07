#include <iostream>
#include <cmath>

using namespace std;
// int evenSum = 0; 
int sumOfSquares = 0;

// int main(){
//     for(int i = 2; i<=100; i+=2){
//         evenSum +=i;
//         cout << evenSum << " " << i << endl;
//     }
//     cout << "The sum of even numbers from 2 to 100 is: " << evenSum << endl;
// }

// int main(){
//     for(int i = 1; i<=b; i++){
//         double base = 2.0;
//         double exponent = i;
//         pow(base, exponent);
//         cout << sumOfSquares << " " << i << endl;
//     }
// }

int main(){
    // The sum of all odd digits of an input (For example, if the input is 32677, the sum would be 3 + 7  + 7 = 17)
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 != 0){
            sum += digit;
        }
        n /= 10;
    }
    cout << "The sum of odd digits is: " << sum << endl;
    return 0;
}

int main(){
    
}