//
// Created by juliancelis on 2026-01-11.
// Determine whether two strings are anagrams by comparing the frequency of each character, without using advanced data structures.

#include <iostream>
#include <string>

int main() {
    std::string first_word;
    std::cout << "Enter the first word: ";
    getline(std::cin,first_word);
    std::string second_word;
    std::cout << "Enter the second word: ";
    getline(std::cin,second_word);

    if (first_word.size() != second_word.size()) {
        std::cout <<  "The size are different";
        return 0;
    }
    if (first_word.empty() || second_word.empty()){
        std::cout << "Some word is empty";
        return 0;
    }

    int freq [256] = {0};

    for (char c: first_word) {
        freq[static_cast<unsigned char>(c)] += 1;
    }

    for (char c: second_word) {
        freq[static_cast<unsigned char>(c)] -= 1;
    }

    for (int c: freq) {
        if (c !=0 ) {
            std::cout<<"Thouse aren't anagrams";
            return 0;
        }
    }

    std::cout<<"Thouse are anagrams";
    return 0;





}