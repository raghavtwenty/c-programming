/*
Filename: _0083_sparse_transpose.c
Title: Program to Find the Transpose of a Sparse Matrix
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 18, 2024 | Last Updated: September 18, 2024
Language: C | Version: clang-14

Description:
This program calculates the transpose of a 3x3 sparse matrix. In the transpose of a matrix, the rows and columns are swapped. The program takes a sparse matrix as input, computes its transpose, and displays the result.
*/


// Importing required libraries
#include <stdio.h> 


// Function to display a 3x3 matrix
void disp(int arr[3][3]) 
{
    // Iterate through each row
    for(int i = 0; i < 3; i++)
    { 
        // Iterate through each column
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);  // Print each element followed by a space
        }
        printf("\n");  // Move to the next line after printing a row
    }
}


// Main function
int main() 
{
    // Initialize the original 3x3 sparse matrix
    int sparse_mat[3][3] = {{1, 0, 0}, {0, 5, 0}, {1, 0, 1}};
    int res[3][3];  // Matrix to store the transpose
    
    // Display the original sparse matrix
    printf("ORIGINAL MATRIX:\n");
    disp(sparse_mat);
    
    // Logic to calculate the transpose of the matrix
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        { 
            res[j][i] = sparse_mat[i][j];  // Swap rows and columns
        } 
    }

    // Display the transpose of the matrix
    printf("TRANSPOSE MATRIX:\n"); 
    disp(res);

    // Return success
    return 0;
}
