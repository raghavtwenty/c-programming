/*
Filename: _0071_sum_product_array.c
Title: Program To Compute The Sum Of Even Numbers & The Product Of Odd Numbers
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 14, 2024 | Last Updated: September 14, 2024
Language: C | Version: clang-14

Description:
This program takes ten integers as input from the user, computes the sum of all even numbers, and calculates the product of all odd numbers.
*/

// Importing required libraries 
#include <stdio.h>  // Standard input/output library

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Add Even Numbers & Multiply Odd Numbers.\n\n");

    // Declare the necessary variables
    int arr[10], sum = 0, product = 1;

    // Get input in a loop
    for (int i = 0; i < 10; i++)  // Loop from 0 to 9 for ten numbers
    {
        // Prompt the user for input
        printf("Enter The %d Element Of The Array: ", i + 1);
        scanf("%d", &arr[i]);  // Store the input in the array

        // Check if the number is even
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];  // Add even numbers to the sum
        }
        // Check if the number is odd
        else
        {
            product *= arr[i];  // Multiply odd numbers to the product
        }
    }

    // Display the result
    printf("\nSum Of Even Numbers: %d\nProduct Of Odd Numbers: %d\n", sum, product);

    // Return 0 to indicate successful execution
    return 0;
}
