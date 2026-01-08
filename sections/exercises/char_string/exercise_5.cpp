//
// Created by juliancelis on 2025-12-27.
//
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s {"Hola"};
    for (int i = s.size(); i> 0;--i) {
        cout << s[i - 1];
    }
}