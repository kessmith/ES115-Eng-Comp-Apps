#include <iostream>
using namespace std;

void cube_volume(double side_length){
    // Calculate the volume of a cube
    double volume = side_length * side_length * side_length;
    cout << "The volume of the cube is: " << volume << endl;
}

int main(){
    double side_l;

    // Prompt the user for input
    cout << "Enter the length of a side of the cube: ";
    cin >> side_l;

    // Call the cube_volume function
    cube_volume(side_l);

    // Return 0 to indicate successful completion
    return 0;

}