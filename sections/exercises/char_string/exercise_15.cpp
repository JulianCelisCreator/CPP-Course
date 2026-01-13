//
// Created by juliancelis on 2026-01-10.
//Read a sentence and determine which word is the longest by analyzing characters and using counters.

#include <iostream>
#include <string>



int main() {
    std::string sentence;
    std::cout << "enter a sentence: ";
    getline(std::cin,sentence);
    bool is_space=false;

    int counter {0};
    int counter_longest{0};
    std::string longest_word;
    std::string temp;

    for (char c: sentence) {
        if (c == 32) {
            is_space = true;
        }
    }
    for (char c: sentence) {
        if (c == ' ') {
            if (counter > counter_longest) {
                counter_longest = counter;
                longest_word = temp;
            }
            counter = 0;
            temp = "";
        }
        else {
            counter++;
            temp += c;

        }
    }

    if (counter > counter_longest) {
        counter_longest = counter;
        longest_word = temp;
    }

    if (counter_longest > 0 && is_space == true) {
        std::cout << "The longest word is " << longest_word << " with " << counter_longest << " characters";
    }
    else if (counter_longest == 0){
        std::cout << "No words entered";
    }
    else {
        std::cout << "The longest word is " << longest_word << " with " << counter_longest << " characters";
    }
}