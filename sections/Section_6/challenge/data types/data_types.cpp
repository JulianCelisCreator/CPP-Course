//
// Created by juliancelis on 2025-12-22.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout<< "Tamaño char: "<<sizeof(char) <<" bytes" <<endl;
    cout<< "Tamaño char (sin signo): "<< sizeof(unsigned char) <<" bytes" <<endl;
    cout<< "Tamaño int: "<< sizeof(int)  <<" bytes" <<endl;
    cout<< "Tamaño int (sin signo): " << sizeof(unsigned int)  <<" bytes" <<endl;
    cout<< "Tamaño float: "<<sizeof(float) <<" bytes" <<endl;
    cout<< "Tamaño double: " << sizeof(double)  <<" bytes" <<endl;
    cout<< "Tamaño bool: " << sizeof(bool)  <<" bytes" <<endl;
    cout<< "Tamaño bool: " << sizeof(std::string)  <<" bytes" <<endl;
    return 0;
}