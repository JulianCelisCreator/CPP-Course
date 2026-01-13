//
// Created by juliancelis on 2026-01-08.
// Read a string and replace all occurrences of a given character with another one, using manual traversal.
#include <iostream>
#include <string>
int main () {
    std::string sentence;
    std::cout << "Enter the sentence: ";
    getline(std::cin,sentence);


    char inside_char;
    std::cout << "Character to find: ";
    std::cin>>inside_char;

    char change_char;
    std::cout<< "Character to replace: ";
    std::cin>>change_char;

    std::string new_sentence;
    for (char c: sentence) {
        if (c == inside_char) {
            new_sentence += change_char;
        }
        else {
            new_sentence += c;
        }
    }

    std::cout << "Your first sentence was " << sentence <<std::endl;
    std::cout << "Your new sentence is: " << new_sentence;
}