/*
Filename: _0067_largest_array.c
Title: Program Using 2D Array To Find The Sum Of Two Matrices
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 13, 2024 | Last Updated: September 13, 2024
Language: C | Version: clang-14

Description:
This program takes two 2x2 matrices as input from the user, stores them in 2D arrays, and calculates their sum. The result is displayed as a 2x2 matrix.
*/

// Importing required libraries
#include <stdio.h>  // Standard I/O library

// Initialization of 2D arrays and sum variables
int arr1[2][2], arr2[2][2], resultadd[2][2];  // 'arr1' and 'arr2' hold the input matrices, 'resultadd' holds the sum of the matrices

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram Using 2D Array To Find The Sum Of Matrices.\n\n");

    // Input elements for Matrix 1
    printf("\nMatrix 1.\n"); 
    for(int i = 0; i < 2; i++)  // Loop through rows
    {
        for(int j = 0; j < 2; j++)  // Loop through columns
        {
            // Getting elements of the first matrix
            printf("Enter Arr1 (%d%d): ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements for Matrix 2
    printf("\nMatrix 2.\n"); 
    for(int i = 0; i < 2; i++)  // Loop through rows
    {
        for(int j = 0; j < 2; j++)  // Loop through columns
        {
            // Getting elements of the second matrix
            printf("Enter Arr2 (%d%d): ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Calculate the sum of Matrix 1 and Matrix 2
    printf("\nAfter Adding Two Matrices:\n\n");
    for (int i = 0; i < 2; i++)  // Loop through rows
    {
        for (int j = 0; j < 2; j++)  // Loop through columns
        {
            // Storing the sum of corresponding elements in 'resultadd' matrix
            resultadd[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display the resulting matrix after addition
    for (int i = 0; i < 2; i++)  // Loop through rows
    {
        for (int j = 0; j < 2; j++)  // Loop through columns
        {
            // Print each element of the resulting matrix, separated by a tab
            printf("%d\t", resultadd[i][j]);
        }
        // Move to the next line after each row for proper matrix format
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
