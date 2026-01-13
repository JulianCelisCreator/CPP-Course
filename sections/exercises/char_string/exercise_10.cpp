//
// Created by juliancelis on 2026-01-08.
//
// Convert a string to uppercase without using library functions, by analyzing the ASCII value of each character.

#include <iostream>
#include <string>
int main () {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    getline(std::cin,sentence);

    std::string uppercase;
    for (char c: sentence) {

        if (c >= 97 && c <= 122 ) {
            int number = c - 32;
            uppercase +=  static_cast<char>(number);
        }
        else {
            uppercase +=c;
        }
    }

    std::cout << uppercase;
}