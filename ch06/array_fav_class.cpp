#include <iostream>

using namespace std;

int main(){
    double values[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    for(int i = 0; i < 5; i++){
        cout << values[i] << endl;
    }

    cout << "----------------------" << endl;

    values[4] = 7.5;

    for(int i = 0; i < 5; i++){
        cout << values[i] << endl;
    }

    return 0;
}