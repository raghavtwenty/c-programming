/*
Filename: _0078_pascals.c
Title: Program to Generate Pascal's Triangle Using 1D Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 15, 2024 | Last Updated: September 15, 2024
Language: C | Version: clang-14

Description:
This program generates Pascal's Triangle up to a specified number of rows using basic loops. Pascal's Triangle is a triangular array of binomial coefficients.
*/


// Importing required libraries
#include <stdio.h>


// Main function
int main()
{
    // Initializing variables
    int rows, coef = 1 ;

    // User input for number of rows in Pascal's Triangle
    printf("Enter The Number Of Rows : ") && scanf("%d", &rows) ;       // Example: 5

    // Outer loop, responsible for each row in Pascal's Triangle
    for (int i = 0; i < rows; i++)      // Row loop
    {
        // Printing leading spaces to format the triangle
        for (int space = 1; space <= rows - i; space++)     
        {
            printf("  ");   // Printing space to shift each row to the center
        }
        
        // Inner loop to print the actual Pascal values for each row
        for (int j = 0; j <= i; j++)        // Column loop (for each element in the row)
        {
            // For the first and last element in each row, the value is always 1
            if (j == 0 || i == 0)       
            {
                coef = 1;   // First and last element in each row are 1
            }

            // For middle elements, calculate using the binomial coefficient
            else
            {
                coef = coef * (i - j + 1) / j;  // Formula to calculate coefficients
            }

            // Displaying the current element of the Pascal's Triangle row
            printf("%4d", coef);   // Format the output for spacing
        }

        // Move to the next line (row) after printing all elements of the current row
        printf("\n");
    }

    return 0;
}
