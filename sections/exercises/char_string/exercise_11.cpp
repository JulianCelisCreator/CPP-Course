//
// Created by juliancelis on 2026-01-08.
//
// Convert a string to lowercase using only character logic and loops.
#include <iostream>
#include <string>
int main () {
    std::string sentence;
    std::cout << "Digite la oración";
    getline(std::cin,sentence);
    int number {0};
    std::string lower_case;
    for (const char c: sentence) {
        if (c >= 65 && c <= 90) {
            number = c + 32;
            lower_case += static_cast<char> (number);
        }
        else {
            lower_case += c;
        }
    }

    std::cout << "The word in lowercase is: "<< lower_case;
}