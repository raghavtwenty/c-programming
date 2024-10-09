/*
Filename: _0028_diagonal_matrix.c
Title: Matrix Diagonal Printer
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 9, 2024 | Last Updated: October 9, 2024
Language: C | Version: clang-14

Description:
This program prints the diagonals of a 4x4 matrix in a specific order. 
The matrix is hardcoded into the program, and the diagonals are printed from the top-left to the bottom-right.
*/

// Importing Required Libraries
#include <stdio.h>

// Main
int main() {
    // 4x4 Matrix initialization
    int mat[4][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {4, 5, 6, 7}
    };

    int i, j, l, k;

    // Printing the diagonals from the top-left to the bottom-right
    // Upper-left diagonals
    printf("Diagonals from upper-left to bottom-right:\n");
    k = 0;  // Track how many diagonals we've processed
    for (i = 0; i < 4; i++) {
        l = i;  // Index to move along rows
        for (j = 0; j <= k; j++) {  // Process the diagonal elements
            printf("%d ", mat[l][j]);
            l--;  // Move up the rows
        }
        printf("\n");  // Print newline after each diagonal
        k++;  // Increment to increase the number of elements processed in next diagonal
    }

    // Lower-right diagonals
    printf("\nDiagonals from lower-right to upper-left:\n");
    k = 1;  // Reset k for diagonals starting from the lower half
    for (i = 2; i >= 0; i--) {
        l = 3;  // Start from the last row
        for (j = 0; j <= i; j++) {  // Process the diagonal elements
            printf("%d ", mat[l][k]);
            l--;  // Move up the rows
            k++;  // Move to the next diagonal element in the same row
        }
        k = 1 + (3 - i);  // Adjust `k` to continue printing diagonals
        printf("\n");  // Print newline after each diagonal
    }

    return 0;
}
