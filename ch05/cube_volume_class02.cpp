#include <iostream>

using namespace std;

double cube_volume(double side_length){
    // Calculate the volume of a cube
    double volume = side_length * side_length * side_length;

    if (volume < 0){
        return 0.0;
    }

    if (volume > 1000000){
        cout << "The volume is too large!" << endl;
        return 0.0;
    }
    cout << "The volume of the cube is: " << volume << endl;
    // Return the volume
    return volume;
}

int main(){
    double side_l, cubeSize;

    // Prompt the user for input
    cout << "Enter the length of a side of the cube: ";
    cin >> side_l;

    // Call the cube_volume function
    cubeSize = cube_volume(side_l);

    cout << "The volume of the cube is: " << cubeSize << endl;

    // Return 0 to indicate successful completion
    return 0;

}