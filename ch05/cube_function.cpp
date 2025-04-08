#include <iostream>

using namespace std;

// Global Variable Side_length
// double side_length = 10;

void cube_volume(double side_length){
    
    // Calculate the volume of a cube
    double volume = side_length * side_length * side_length;
    cout << volume << endl;
    // return volume;
}

int main(){
    double side_l, volumeSize;

    // Prompt the user for input
    cout << "Enter the length of a side of the cube: ";
    cin >> side_l;

    // Call the cube_volume function
    //volumeSize = cube_volume(side_l);
    cube_volume(side_l);
    // Output th result
    // cout << "The volume of the cube is: " << volumeSize << endl;

    // Return 0 to indicate successful completion
    return 0;
}