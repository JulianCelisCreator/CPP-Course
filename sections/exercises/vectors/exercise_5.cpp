//
// Created by juliancelis on 2026-03-02.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


bool dominant_row(std::vector <std::vector<int>> &v) {
    int suma {0};
    int first_elem {0};
    for (size_t i = 0; i<v.size();i++) {
        if (v.size() != v[0].size()) return false;
        suma = 0;
        for (size_t j = 0; j<v[0].size();j++) {
            i == j ? first_elem = abs(v[i][j]) : suma += abs(v[i][j]);
        }
        if (first_elem<suma) {
            return false;
        }
    }
    return true;
}

int main () {
    std::vector<std::vector<std::vector<int>>> matrices {
        {
            {5, -1, 1},
            {2, 6, 1},
            {1, -2, 7}
        },
        {
            {3, -1, -2},
            {1, 4, 1},
            {2, 2, 4}
        },
        {
            {1, 3, 2},
            {4, 1, 1},
            {2, 2, 1}
        },
        {
            {4, 1, 1},
            {2, 2, 1},
            {1, 1, 5}
        },
        {
            {10, 2},
            {3, 8}
        },
        {
            {2, 5},
            {4, 1}
        },
        {
            {-6, 2, 1},
            {1, -5, 1},
            {2, 1, -4}
        }
    };

    for (size_t i = 0; i<matrices.size();i++) {
        if (dominant_row(matrices[i])) {
            cout<<"Dominant row"<<endl;
        }
        else {
            cout<<"No dominant-row"<<endl;
        }

    }
}
