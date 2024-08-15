/*
Filename: _0032_multi_dim_arrays.c
Title: Multi-dim arrays in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 15, 2024 | Last Updated: August 15, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    // Declaration and initialization of a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // 3 - rows
    // 3 - columns

    // Accessing array elements
    for (int i = 0; i < 3; i++) { // row loop
        for (int j = 0; j < 3; j++) { // column loop
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
