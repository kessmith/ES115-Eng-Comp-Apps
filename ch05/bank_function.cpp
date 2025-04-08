#include <iostream>
#include <cmath> // Include cmath for pow function

using namespace std;

double bank_account(double interest_rate, int years, double bank_account) {
    // Calculate the final amount in the bank account
    double final_amount = bank_account * pow((1 + interest_rate / 100), years);
    return final_amount;
}

int main() {
    double intrest_rate, bank_accout;
    int years;

    // Prompt the user for input
    cout << "Enter the interest rate: ";
    cin >> intrest_rate;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Enter the amount in the bank account: ";
    cin >> bank_accout;
    
    // Call the bank_account function
    double final_amount = bank_account(intrest_rate, years, bank_accout);
    // Output the result
    cout << "The final amount in the bank account is: " << final_amount << endl;
    // Return 0 to indicate successful completion
    return 0;
}