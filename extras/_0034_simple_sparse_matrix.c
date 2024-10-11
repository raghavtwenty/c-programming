/*
Filename: _0034_simple_sparse_matrix.c
Title: Program to Convert Sparse Matrix to Compact Matrix
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 11, 2024 | Last Updated: October 11, 2024
Language: C | Version: clang-14

Description:
This program converts a sparse matrix into a compact matrix format. 
A sparse matrix contains mostly zero elements, and the compact format only stores the non-zero elements, 
their row, and column indices. The program outputs the compact matrix in a 3-row structure: 
the first row contains the row indices, the second row contains the column indices, 
and the third row contains the non-zero values.
*/

// Importing Required Libraries
#include<stdio.h>

// Main
int main()
{
    // Initializing a 4x5 sparse matrix with mostly zero elements
    int q_matrix[4][5] =
    {
        {0, 0, 2, 0, 1}, // Row 0
        {0, 0, 0, 7, 0}, // Row 1
        {0, 0, 0, 0, 2}, // Row 2
        {0, 2, 7, 0, 0}  // Row 3
    };

    // Compact matrix to store non-zero elements
    int ans_matrix[3][20]; // 3 rows: for row index, column index, and the value
    int size = 0; // To keep track of the number of non-zero elements

    // Loop through the sparse matrix
    // Row iteration
    for (int i = 0; i < 4; i++)
    {
        // Column iteration
        for (int j = 0; j < 5; j++)
        {
            // Check if the element is non-zero
            if (q_matrix[i][j] != 0)
            {
                // Store the row index, column index, and the value of the non-zero element
                ans_matrix[0][size] = i; // Store the row index
                ans_matrix[1][size] = j; // Store the column index
                ans_matrix[2][size] = q_matrix[i][j]; // Store the non-zero value
                size++; // Increase the size counter
            }
        }
    }

    // Printing the compact matrix (ans_matrix)
    // Loop through each row of the compact matrix
    for (int i = 0; i < 3; i++)
    {
        // Loop through each column of the compact matrix (up to the number of non-zero elements)
        for (int j = 0; j < size; j++)
        {
            printf("%d ", ans_matrix[i][j]); // Print each element of the compact matrix
        }
        printf("\n"); // New line after each row of the compact matrix
    }

    return 0; 
}
