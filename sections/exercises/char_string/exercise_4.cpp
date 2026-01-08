//
// Created by juliancelis on 2025-12-27.
//

// Determine whether a word is a palindrome by manually comparing characters from both ends.
// Reversing the string or using helper functions is not allowed.

#include <iostream>

using namespace std;

bool is_palindrome(const string& s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right ) {
        if (s[left] == ' ') {
            left ++;
        continue;
        }
        if (s[right] == ' ') {
            right--;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right++;
    }
    return true;
}

int main() {
    string s {"anita lava la tina"};
    if (is_palindrome(s)) {
        cout << "is a palindrome";
    }
    else {
        cout << "No is a palindrome";
    }
}