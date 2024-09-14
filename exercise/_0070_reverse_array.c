/*
Filename: _0070_reverse_array.c
Title: Program To Reverse The Elements Of An Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 14, 2024 | Last Updated: September 14, 2024
Language: C | Version: clang-14

Description:
This program takes an array of integers from the user and reverses its elements. It swaps the first element with the last, the second with the second last, and so on, until the entire array is reversed.
*/

// Importing required libraries
#include <stdio.h>  // Standard input/output library

// Main function: Entry point of the program
int main()
{
    // Display the purpose of the program
    printf("\nProgram To Reverse The Array Elements.\n\n");

    // Declare two arrays and necessary variables
    int arr[100], temp, num, i, j;

    // Prompt the user to enter the number of elements
    printf("How Many Elements: ");
    scanf("%d", &num);

    // Get input for the array elements
    for (i = 0; i < num; i++)
    {
        printf("Enter The %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    j = num - 1;  // j points to the last element of the array
    i = 0;        // i points to the first element

    // Continue swapping until the middle of the array is reached
    while (i < j)
    {
        temp = arr[i];   // Store the value of arr[i] in temp
        arr[i] = arr[j]; // Swap arr[i] with arr[j]
        arr[j] = temp;   // Assign the stored value of temp to arr[j]
        i++;             // Move i to the next element
        j--;             // Move j to the previous element
    }

    // Display the reversed array
    printf("\nAfter Reversing The Array: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);  // Print each element of the reversed array
    }
    printf("\n");

    // Return 0 to indicate successful execution
    return 0;
}
