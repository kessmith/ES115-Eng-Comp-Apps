#include <iostream>

using namespace std;

int main(){
    double num1, num2, num3;
    
    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3){
        cout << "Number " << num1 << " is the largest number." << endl;
    } else if(num2 > num1 && num2 > num3){
        cout << "Number " << num2 << " is the largest number." << endl;
    } else {
        cout << "Number 3 is equal to: " << num3 << " is the largest number." << endl;
    }
}