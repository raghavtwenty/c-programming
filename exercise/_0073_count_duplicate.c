/*
Filename: _0073_count_duplicate.c
Title: Program To Count Duplicate Elements In An Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 15, 2024 | Last Updated: September 15, 2024
Language: C | Version: clang-14

Description:
This program takes five integers as input from the user and counts how many duplicate elements are present in the array. It compares each element with every subsequent element to find duplicates and counts them.
*/

// Importing required libraries
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Count Duplicates In An Array.\n\n");

    int arr[5], count = 0;

    // User input for the array elements
    for (int i = 0; i < 5; i++)
    {
        printf("Enter The %d Element Of The Array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Iteration to count duplicates
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)  // Compare each element with subsequent elements
        {
            if (arr[i] == arr[j])  // If a duplicate is found
            {
                count += 1;
                break;  // Avoid counting the same duplicate multiple times
            }
        }
    }

    // Display the count of duplicates
    printf("\nCount Of Duplicate Elements: %d\n", count);

    // Return 0 to indicate successful execution
    return 0;
}
