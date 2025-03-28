#include <iostream>

using namespace std;

int main() {
    double income, income_tax, percentage;

    cout << "Enter your income: ";
    cin >> income;

    if (income <= 50000){
        percentage = 0.01;
        income_tax = percentage * income;
    } 
    else if (income > 50000 and income <= 75000){
        percentage = 0.02;
        income_tax = percentage * income;
    }
    else if (income > 75000 and income <= 100000){
        percentage = 0.03;
        income_tax = percentage * income;
    }
    else if (income > 100000 and income <= 250000){
        percentage = 0.04;
        income_tax = percentage * income;
    }
    else if (income > 250000 and income <= 500000){
        percentage = 0.05;
        income_tax = percentage * income;
    }
    else {
        percentage = 0.05;
        income_tax = percentage * income;
    }
    cout << "Your income tax is: $" << income_tax << " with a taxable percentage of " << percentage << endl;
    return 0;
}