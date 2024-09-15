/*
Filename: _0075_merge_arrays.c
Title: Program To Merge Two Arrays And Sort In Descending Order
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 15, 2024 | Last Updated: September 15, 2024
Language: C | Version: clang-14

Description:
This program takes two arrays of size 5 each as input, merges them into a new array, and sorts the merged array in descending order.
*/

// Importing required libraries
#include <stdio.h>

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Merge Two Arrays And Sort In Descending Order.\n\n");

    // Declare three arrays:
    // - arr1 and arr2 for input arrays
    // - arr3 to hold the merged array
    int arr1[5], arr2[5], arr3[10], temp;

    // User input for the 1st array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter The %d Element Of The 1st Array: ", i + 1);
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];  // Copying elements of arr1 into arr3
    }

    // User input for the 2nd array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter The %d Element Of The 2nd Array: ", i + 1);
        scanf("%d", &arr2[i]);
        arr3[5 + i] = arr2[i];  // Copying elements of arr2 into arr3
    }

    // Show elements of the merged array (arr3)
    printf("\nElements Of The Merged Array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr3[i]);
    }

    // Sorting the merged array (arr3) in descending order using bubble sort
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr3[i] < arr3[j])  // If current element is smaller than the next one
            {
                // Swap the elements
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    
    // Show the merged array after sorting in descending order
    printf("\nElements Of The Merged Array After Sorting In Descending Order: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr3[i]);
    }
    printf("\n");

    return 0;  // Indicating successful execution
}
