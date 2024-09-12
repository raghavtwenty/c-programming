/*
Filename: _0065_10array.c
Title: Program Using Array To Take 10 Values As Input And Display It
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 12, 2024 | Last Updated: September 12, 2024
Language: C | Version: clang-14

Description:
This program prompts the user to input 10 integer values, stores them in an array, and then displays each element with its corresponding index.
*/


// Importing required libraries
#include <stdio.h>  // Standard I/O library

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram Using Array To Take 10 Values As Input And Display It.\n\n");

    // Declare an integer array of size 10
    int arr[10];

    // Get input from the user in a loop
    for (int i = 0; i < 10; i++)
    {
        // Prompt the user to enter each element of the array
        printf("Enter the %dth element: ", i + 1);

        // Store the input in the corresponding index of the array
        scanf("%d", &arr[i]);
    }

    // Display the array contents
    printf("\nArray Contents:\n");
    for (int i = 0; i < 10; i++)
    {
        // Print each element with its index
        printf("Element at %d index: %d\n", i, arr[i]);
    }

    // Return 0 to indicate successful execution
    return 0;
}
