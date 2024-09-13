/*
Filename: _0068_smallest_array.c
Title: Program To Find The Largest Element In An Array Using A Function
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 13, 2024 | Last Updated: September 13, 2024
Language: C | Version: clang-14

Description:
This program creates an integer array of size 5, takes input from the user, and finds the largest element in the array using a function. The `largest` function compares each element of the array with the current maximum value.
*/

// Importing required libraries
#include <stdio.h>  // Standard input/output library

// Function to find the largest element in the array
int largest(int num, int max)
{
    // If the current element is greater than the current maximum, update the maximum
    if (num > max)
    {
        max = num;
    }

    return max;  // Return the updated maximum value
}

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Find The Largest Element In An Array\n\n");

    // Declare an array of size 5 and a variable to hold the maximum value
    int arr[5], max = 0;

    // Get input from the user
    for (int i = 0; i < 5; i++)
    {
        // Prompt the user to enter each element
        printf("Enter The %dth Element: ", i + 1);
        scanf("%d", &arr[i]);

        // Call the function to compare the current element with the maximum
        max = largest(arr[i], max);
    }

    // Display the largest element in the array
    printf("\nThe Largest Value In The Array: %d\n", max);

    // Return 0 to indicate successful execution
    return 0;
}
