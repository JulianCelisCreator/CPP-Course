//
// Created by juliancelis on 2025-12-19.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//This program will calculate the area of a room in a square feet
int main() {

    cout<<"Enter the width of the room: ";
    int width{0};
    cin>>width;

    cout<<"Enter the length of the room: ";
    int length{0};
    cin>>length;

    cout<<"The area of the room is " << width * length <<" square feet"<<endl;
    return 0;
}