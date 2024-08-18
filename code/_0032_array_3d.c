/*
Filename: _0032_array_3d.c
Title: 3D Arrays in c
Author: Raghava | GitHub: @raghavtwenty
Date Created: August 15, 2024 | Last Updated: August 15, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

int main() {
    // Declaration and initialization of a 3D array
    // 2 - channels
    // 3 - rows
    // 4 - columns
    int array3D[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Accessing elements of the 3D array
    for (int i = 0; i < 2; i++) { // Loop for the channels
        for (int j = 0; j < 3; j++) { // Loop for the rows
            for (int k = 0; k < 4; k++) { // Loop for the columns
                printf("array3D[%d][%d][%d] = %d\n", i, j, k, array3D[i][j][k]);
            }
        }
    }

    return 0;
}
