#include <iostream>

using namespace std;

int read_int_up_to(int high)
{
    int input;

    do
    {
        cout << "Enter a value between 0 and " << high << ": ";
        cin >> input;
    } while (input < 0 || input > high);
    return input;
}
int main(){
    // int hours;
    // do
    // {
    // cout << "Enter a value between 0 and 23:";
    // cin >> hours;
    // } while (hours < 0 || hours > 23);

    // int minutes;
    // do
    // {
    // cout << "Enter a value between 0 and 59: ";
    // cin >> minutes;
    // } while (minutes < 0 || minutes > 59);

    int hours = read_int_up_to(23);
    int minutes = read_int_up_to(59);

    cout << "The time is " << hours << ":" << minutes << endl;

    return 0;

}