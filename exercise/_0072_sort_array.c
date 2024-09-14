/*
Filename: _0072_sort_array.c
Title: Program To Sort The Array In Ascending And Descending Order Using Comparison Method
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 13, 2024 | Last Updated: September 13, 2024
Language: C | Version: clang-14

Description:
This program takes five integers as input from the user and sorts them in both ascending and descending order using the comparison method.
*/

// Importing required libraries
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Sort The Arrays.\n\n");

    int arr[5], temp;

    // User input for the array elements
    for (int i = 0; i < 5; i++)
    {
        printf("Enter The %d Element Of The Array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sorting the array in ascending order
    printf("\nAscending Order: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            // Compare and swap if the current element is greater than the next one
            if (arr[i] > arr[j])
            {
                temp = arr[i];   // Swap the elements
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display the array in ascending order
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Sorting and displaying the array in descending order
    printf("\nDescending Order: ");
    // Since the array is already sorted in ascending, we can print it in reverse order for descending
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    // Return 0 to indicate successful execution
    return 0;
}
