//
// Created by celis on 27/04/2026.
//

/**
*### 6️⃣ 90° Rotation Without Auxiliary Matrix
Rotate a square matrix 90 degrees clockwise.
📌 Constraints:
No extra matrix allowed
Only swaps and index manipulation
This is a classic interview problem.
**/


#include <iostream>
#include <vector>

std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i+1; j < matrix[0].size(); j++)
        {
            if (i == matrix.size()-1)
            {
                break;
            }
            int temporal = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temporal;

        }
    }

    for (int i = 0; i<matrix.size();i++)
    {
        for (int j = 0; j<matrix.size()/2; j++)
        {
            int temporal = matrix[i][j];
            matrix[i][j] = matrix[i][matrix.size()-1-j];
            matrix[i][matrix.size()-1-j] = temporal;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return matrix;
}

int main()
{
    std::vector<std::vector<std::vector<int>>> vec = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10,11,12},
            {13,14,15,16}
        }
    };

    std::vector<std::vector<std::vector<int>>> sol = {
        {
            {13,9,5,1},
            {14,10,6,2},
            {15,11,7,3},
            {16,12,8,4}
        }
    };

    transpose(vec[0]);
    // for (int i = 0; i<sol[0].size();i++)
    // {
    //
    // }
}