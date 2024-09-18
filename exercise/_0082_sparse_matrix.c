/*
Filename: _0082_sparse_matrix.c
Title: Program to Find Sparse Matrix Representation
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 18, 2024 | Last Updated: September 18, 2024
Language: C | Version: clang-14

Description:
This program converts a 4x5 matrix into its sparse matrix representation. A sparse matrix is a matrix in which most elements are zero, and this representation captures only the non-zero elements with their corresponding row and column indices.
*/


// Importing required libraries
#include <stdio.h>

// Main function
int main()
{
    // Define a 4x5 matrix with most elements being zero
    int spar_mat[4][5] = 
    {
        {0, 0, 2, 0, 1},  // First row
        {0, 0, 0, 7, 0},  // Second row
        {0, 0, 0, 0, 2},  // Third row
        {0, 2, 7, 0, 0}   // Fourth row
    };

    // Initialize a 2D array (3x20) to store the sparse matrix representation
    // First row stores row indices, second row stores column indices, third row stores non-zero values
    int ans[3][20], size = 0;

    // Iterate through the rows of the original matrix
    for (int i=0; i<4; i++)
    {
        // Iterate through the columns of the original matrix
        for (int j=0; j<5; j++)
        {
            // Check if the element is non-zero
            if (spar_mat[i][j] != 0)
            {
                // Store the row index, column index, and value in the sparse matrix representation
                ans[0][size] = i;      // Row index
                ans[1][size] = j;      // Column index
                ans[2][size] = spar_mat[i][j];  // Non-zero value
                size++;  // Increment the size (number of non-zero elements)
            }
        }
    }

    // Display the sparse matrix representation
    // First row: Row indices, Second row: Column indices, Third row: Non-zero values
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%d ", ans[i][j]);  // Print the sparse matrix representation
        }
        printf("\n");  // Move to the next line after each row
    }

    // Return success
    return 0;
}
