#include <iostream>

using namespace std;

double bank_account(double interest_rate, int years, double bank_account) {
    // Calculate the final amount in the bank account
    double final_amount = bank_account * pow((1 + interest_rate / 100), years);
    return final_amount;
}

int main () {
    double interest_rate, account, final_amount;
    int years;
    cout << "Enter an interest rate and account number: ";
    cin >> interest_rate >> account;
    cout << "Enter the number of years: ";
    cin >> years;
    // cout << "Enter the amount in the bank account: ";
    // cin >> account;
    final_amount = bank_account(interest_rate, years, account);
    cout << "The final amount in the bank account is: " << final_amount << endl;
    // Return 0 to indicate successful completion
    return 0;

}