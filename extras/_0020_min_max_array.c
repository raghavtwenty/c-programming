/*
Filename: _0020_min_max_array.c
Title: Program To Find The Minimum And Maximum Element In An Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 6, 2024 | Last Updated: October 6, 2024
Language: C | Version: clang-14


Description:
This program prompts the user to input a specified number of integers, stores them in an array, 
and then calculates and displays the minimum and maximum values among the entered integers.
*/

// Importing Required Libraries
#include <stdio.h>

// Main
int main()
{
    // Variable declaration
    int arr[20];      // Array to hold up to 20 integers
    int max, mini;    // Variables for maximum and minimum values
    int n, i;         // n for number of elements, i for loop index

    printf("\nProgram To Find The Maximum And The Minimum Element In The Array.\n\n");

    // Prompting the user for the number of values to store
    printf("Enter The Number Of Values To Store (max 20): ") && scanf("%d", &n);

    // Input validation for number of elements
    if (n > 20 || n <= 0) {
        printf("Please enter a valid number of elements (1-20).\n");
        return 1; // Exit if invalid input
    }

    // Inserting values into the array
    for(i = 0; i < n; i++) 
    {
        printf("Enter The Value Of %d: ", i + 1); // User-friendly index
        scanf("%d", &arr[i]);
    }

    // Initializing max and mini to the first element of the array
    max = mini = arr[0];

    // Finding the maximum and minimum values in the array
    for(i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // Update max if current element is larger
        }
        if (arr[i] < mini)
        {
            mini = arr[i]; // Update mini if current element is smaller
        }
    }

    // Displaying the results
    printf("\nMaximum Element: %d\n", max);
    printf("Minimum Element: %d\n", mini);

    return 0; 
}
