/*
Filename: _0002_linear_search.c
Title: Program To Perform Linear Search
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 30, 2024 | Last Updated: September 30, 2024
Language: C | Version: clang-14

Description:
This program demonstrates how to implement a linear search algorithm in C. Linear search is a basic search technique where each element in an array is compared sequentially to the target value. The program prompts the user to input an array of numbers, then searches for a specific value in the array. If found, it prints the index (0-based) where the value occurs.
*/

// Importing standard input/output library
#include <stdio.h>   

// Main 
int main()
{
    // Display program title
    printf("\nLinear Search.\n");

    // Variable declarations
    int x, i, n;           // 'x' for the search element, 'i' as index, 'n' for array size
    int arr[100];          // Array declaration to hold up to 100 integers

    // Prompt the user to enter the number of values in the array
    printf("Enter The Number Of Values In Array: ") && scanf("%d", &n);     

    // Input loop to populate the array
    for (i = 0; i < n; i++)
    {
        // Prompt for each array element
        printf("Enter The %dth Value: ", i);
        scanf("%d", &arr[i]);  // Read each element into the array
    }

    // Prompt the user to enter the term to be searched
    printf("Enter The Term To Be Found: ");
    scanf("%d", &x);  // Read the search term into 'x'

    // Loop to perform the linear search
    for (i = 0; i < n; i++)
    {
        // If the current element matches the search term
        if (arr[i] == x)
        {
            // Print the index of the found element
            printf("%d Occurs At Index %d\n", x, i);
            break;  // Exit the loop once the element is found
        }
    }

    // If the loop completes without finding the element, it doesn't exist in the array
    if (i == n)
    {
        printf("Element Not Found In The Array.\n");
    }

    return 0;  
}
