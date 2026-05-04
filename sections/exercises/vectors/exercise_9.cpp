//
// Created by juliancelis on 2026-03-03.
//
/**
X-Pattern in a Matrix
Given a square matrix:

Display only the elements that form an X pattern

Replace all other positions with zeros or spaces

Conceptual example:

X X X X X

📌 Focus on indices, not values.
**/

#include <vector>
#include <iostream>

std::vector<std::vector<char>> pattern (std::vector<std::vector<char>> &v) {
    int max = v[0].size()-1;
    for (size_t i=0;i<v.size();i++) {
        for (size_t j=0; j<v[0].size();j++) {
            if (j!=i and j!=max) {
                v[i][j] = '0';
            }
            else {
                v[i][j] = 'X';
            }
        }
        max--;
    }
    return v;
}

int main () {
    std::vector<std::vector<std::vector<char>>> matrices = {
        {{'1','2'},
            {'3','4'} },

        {{'7'} },
        {{'1','2','3'},
            {'4','5','6'},
            {'7','8','9'} },

        {{'1','2','3','4'},
          {'5','6','7','8'},
          {'9','1','1','2'},   // 10,11,12 no caben como un solo char numérico
          {'1','3','1','4'} }, // 13,14,15,16 tampoco

        {{'1','2','3','4','5'},
          {'6','7','8','9','1'},
          {'1','1','1','1','1'},
          {'1','6','1','7','1'},
          {'2','1','2','2','2'} }
    };
    std::vector<std::vector<std::vector<char>>> solution = {

        { {'X','X'},
          {'X','X'} },

        { {'X'} },

        { {'X','0','X'},
          {'0','X','0'},
          {'X','0','X'} },

        { {'X','0','0','X'},
          {'0','X','X','0'},
          {'0','X','X','0'},
          {'X','0','0','X'} },

        { {'X','0','0','0','X'},
          {'0','X','0','X','0'},
          {'0','0','X','0','0'},
          {'0','X','0','X','0'},
          {'X','0','0','0','X'} }
    };
        for (size_t i = 0; i<matrices.size();i++) {
            std::vector<std::vector<char>> matriz = matrices[i];
            if (matriz.size() != matriz[0].size()) {
                std::cout<<"Matrix isn't square"<<std::endl;
            }
            else {
                if (pattern(matriz) ==  solution[i]) {
                    std::cout<<"It's right"<<std::endl;
                }
                else {
                    std::cout<<"Incorrect"<<std::endl;
                }
            }
        }
    };