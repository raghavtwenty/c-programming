/*
Filename: _0074_remove_duplicate.c
Title: Program To Print Unique Elements In An Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 15, 2024 | Last Updated: September 15, 2024
Language: C | Version: clang-14

Description:
This program takes five integers as input from the user and prints all unique elements in the array. It iterates over the array, checks for duplicates, and only prints the elements that appear exactly once.
*/

// Importing required libraries
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Print Unique Elements In An Array.\n\n");

    int arr[5];

    // User input for the array elements
    for (int i = 0; i < 5; i++)
    {
        printf("Enter The %d Element Of The Array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nUnique Elements: ");

    // Loop through each element to check if it's unique
    for (int i = 0; i < 5; i++)
    {
        int isUnique = 1;  // Assume the element is unique initially

        // Compare the current element with all other elements
        for (int j = 0; j < 5; j++)
        {
            if (i != j && arr[i] == arr[j])  // If duplicate found
            {
                isUnique = 0;  // Mark as not unique
                break;
            }
        }

        // If no duplicate was found, the element is unique
        if (isUnique)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Return 0 to indicate successful execution
    return 0;
}
