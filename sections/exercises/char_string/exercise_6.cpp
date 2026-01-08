//
// Created by juliancelis on 2025-12-27.
//

// Read two strings and determine whether they are equal by comparing each character manually.
// Direct string comparison operators are not allowed.

#include <iostream>
#include <string>

using namespace std;

int main () {
    string s1 {"Hola"};
    string s2 {"Hola"};

    bool are_diff {false};
    size_t size {0};

    if (s1.size() == s2.size()) {
        size = s1.size();
        int i {0};
        while (size < i || are_diff == false) {
            if (s1[i] != s2[i]) {
                are_diff == true;
            }
            i++;
        }
    }
}