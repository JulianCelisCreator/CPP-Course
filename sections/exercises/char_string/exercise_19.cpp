//
// Created by juliancelis on 2026-01-11.
//
// Determine whether the characters in a string are sorted in ascending alphabetical order.

#include <iostream>
#include <string>

int main () {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    getline(std::cin, sentence);

    unsigned number {0};
    for (char c: sentence) {
        if (c <= number ) {
            std::cout << "It's unsorted";
            return 0;
        }
        number = static_cast<unsigned char>(c);
    }
    std::cout << "It's sorted";
    return 0;
}