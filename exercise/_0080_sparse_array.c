/*
Filename: _0080_sparse_array.c
Title: Program to Multiply Sparse Matrices
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 17, 2024 | Last Updated: September 17, 2024
Language: C | Version: clang-14

Description:
This program multiplies two sparse matrices. A sparse matrix is a matrix in which most elements are zero. The program calculates the product of two 3x3 sparse matrices and displays the result.
*/


// Importing required libraries
#include <stdio.h> 


// Function to display the contents of a 3x3 matrix
void disp(int arr[3][3]) 
{
    // Loop through rows
    for(int i=0; i<3; i++)
    { 
        // Loop through columns and print each element
        for(int j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);  // Print element followed by a space
        }
        printf("\n");  // Move to next line after each row
    }
}


// Main function
int main()
{
    // Initialize two sparse matrices (3x3)
    int sparse_1[3][3] = {{0, 5, 0}, {1, 0, 0}, {0, 0, 3}};  // First sparse matrix
    int sparse_2[3][3] = {{4, 0, 0}, {6, 0, 8}, {0, 0, 5}};  // Second sparse matrix
    
    // Initialize a result matrix (3x3) to store the multiplication result
    int res[3][3]; 

    // Display the first sparse matrix
    printf("SPARSE MATRIX 1\n");
    disp(sparse_1);

    // Display the second sparse matrix
    printf("SPARSE MATRIX 2\n");
    disp(sparse_2);

    // Matrix multiplication logic
    // Loop over the rows of the first matrix (sparse_1)
    for(int i = 0; i < 3; i++)
    {
        // Loop over the columns of the second matrix (sparse_2)
        for(int j = 0; j < 3; j++) 
        {
            // Initialize the result element to zero
            res[i][j] = 0;

            // Perform the multiplication using the dot product
            for(int k = 0; k < 3; k++) 
            {
                res[i][j] += sparse_1[i][k] * sparse_2[k][j];  // Multiply and add the products
            }
        }
    }

    // Display the resulting matrix after multiplication
    printf("RESULTING MATRIX\n");
    disp(res);

    // Return success
    return 0;
}
