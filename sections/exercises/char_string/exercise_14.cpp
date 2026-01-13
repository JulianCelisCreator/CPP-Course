//
// Created by juliancelis on 2026-01-10.
//
// Count how many numeric characters exist in a string.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main () {
    std::string sentence;
    std::cout<<"Enter a sentence: ";
    getline(cin,sentence);

    int counter {0};
    for (char c: sentence) {
        if (c >= 48 && c <= 57) {
            counter++;
        }
    }
    std::cout<< "Numeric characters appears " << counter << " times";
}