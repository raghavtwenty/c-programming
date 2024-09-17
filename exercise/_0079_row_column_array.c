/*
Filename: _0079_row_column_array.c
Title: Row and Column Sum of a 5x5 Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 17, 2024 | Last Updated: September 17, 2024
Language: C | Version: clang-14

Description:
This program reads a predefined 5x5 integer array and computes both the sum of each row and the sum of each column. 
The results are printed in separate sections.
*/


#include <stdio.h>  // Standard I/O library

int main()
{
    // Variable to store the sum
    int sum;

    // Initialize the 5x5 array with given values
    int arr[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };

    // Row sums calculation
    printf("Row sums:\n");
    
    // Loop through each row (outer loop)
    for (int i = 0; i < 5; i++)
    {
        sum = 0;  // Reset sum for each row

        // Loop through each element in the row (inner loop)
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];  // Accumulate the sum of elements in the row
        }

        // Print the sum of the current row
        printf("Row %d sum: %d\n", i + 1, sum);
    }

    // Column sums calculation
    printf("\nColumn sums:\n");
    
    // Loop through each column (outer loop)
    for (int i = 0; i < 5; i++)
    {
        sum = 0;  // Reset sum for each column

        // Loop through each element in the column (inner loop)
        for (int j = 0; j < 5; j++)
        {
            sum += arr[j][i];  // Accumulate the sum of elements in the column
        }

        // Print the sum of the current column
        printf("Column %d sum: %d\n", i + 1, sum);
    }

    // Return 0 to indicate successful execution
    return 0;
}
