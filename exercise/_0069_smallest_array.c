/*
Filename: _0069_smallest_array.c
Title: Program To Find The Smallest Element In An Array Using A Function
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 13, 2024 | Last Updated: September 13, 2024
Language: C | Version: clang-14

Description:
This program creates an integer array of size 5, takes input from the user, and finds the smallest element in the array using a function. The `smallest` function compares each element of the array with the current minimum value.
*/

// Importing required libraries
#include <stdio.h>  // Standard input/output library

// Function to find the smallest element in the array
int smallest(int arre, int min)
{
    // If the current element is smaller than the current minimum, update the minimum
    if (arre < min)
    {
        min = arre;
    }

    return min;  // Return the updated minimum value
}

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Find The Smallest Element In An Array.\n\n");

    // Declare an array of size 5 and initialize 'min' to a large value
    int arr[5], min = 999999999;  // Assuming no input will be larger than this

    // Get input from the user
    for (int i = 0; i < 5; i++)
    {
        // Prompt the user to enter each element
        printf("Enter The %dth Element: ", i + 1);
        scanf("%d", &arr[i]);

        // Call the function to compare the current element with the minimum
        min = smallest(arr[i], min);
    }

    // Display the smallest element in the array
    printf("\nThe Smallest Value In The Array: %d\n", min);

    // Return 0 to indicate successful execution
    return 0;
}
