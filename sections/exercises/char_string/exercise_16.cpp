//
// Created by juliancelis on 2026-01-11.
//
// Reverse each word in a sentence without changing the order of the words.

#include <iostream>
#include <string>

int main () {
    std::string word;
    std::cout << "Enter a sentence: ";
    getline (std::cin, word);
    std::string word_temp;
    std::string reverse;
    for (char c: word) {
        if (c == ' ') {
            // std::cout << word_temp;
            for (size_t i = 0; i<word_temp.size();i++) {
                reverse += word_temp[word_temp.size()-(1+i)];
            }
            reverse += " ";
            word_temp = "";
        }
        else {
            word_temp += c;
            // std::cout << " "<<word_temp << " ";
        }
    }

    for (size_t i = 0; i<word_temp.size();i++) {
        reverse += word_temp[word_temp.size()-(1+i)];
    }

    std::cout << reverse;
}