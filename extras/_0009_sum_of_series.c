/*
Filename: _0009_sum_of_series.c
Title: Program To Calculate Sum of Series (1/1^2 + 1/2^2 + ... + 1/n^2)
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 2, 2024 | Last Updated: October 2, 2024
Language: C | Version: clang-14

Description:
This program calculates the sum of the series 1/1^2 + 1/2^2 + ... + 1/n^2, where `n` is a user-provided integer. 
It uses the math library to calculate the squares of the denominators and accumulates the result to display the final sum.
*/

// Importing the standard input-output and math libraries
#include <stdio.h>
#include <math.h>

// Main
int main(void)
{
    // Variable declaration
    int ui, i = 1;  // `ui` for user input and `i` as a counter
    float ans = 0;  // `ans` to store the sum

    // Prompting the user to enter a value for `n`
    printf("\nEnter the input (n): ") && scanf("%d", &ui);  

    // Loop to calculate the sum of the series up to 1/n^2
    while (i <= ui)
    {
        // Adding the current term 1/i^2 to the sum
        ans = ans + (1 / pow(i, 2));
        i++;  // Incrementing the counter
    }

    // Displaying the final result
    printf("\nResult (Sum of the series): %f\n", ans);

    return 0;  
}
