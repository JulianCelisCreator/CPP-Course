//
// This is a program that receive one number and print a message
// Created by juliancelis on 2025-12-04.
//
#include <iostream>

int main() {
    int favourite_number;
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin>>favourite_number;
    std::cout << "Amazing!! "<<favourite_number<<" That's my favourite number too!" << std::endl;
    return 0;
}