/*
Filename: _0077_1st_element_1st_deletion.c
Title: Remove Front Element of One Array and Insert It Into Another Array
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 15, 2024 | Last Updated: September 15, 2024
Language: C | Version: clang-14

Description:
This program removes the first element from an array `arr` and inserts it at the front of another array `arr_2`. The program demonstrates array manipulation, including deletion and insertion operations.
*/

// Importing required libraries
#include <stdio.h>  // Standard I/O library
#include <stdlib.h> // Standard library for dynamic memory operations, if needed

// Function to display an array
void arr_dis(int a[], int n)
{
    // Iterate through each element of the array and print it
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    // Print a new line after the array is printed
    printf("\n");
}

// Main function
int main()
{
    // Initialize two arrays with size 5
    int arr[] =  {1, 2, 3, 4, 5};    // Source array (arr)
    int arr_2[] = {6, 7, 8, 9, 0};   // Target array (arr_2)

    // Temporary storage to hold the first element of arr
    int temp_0 = arr[0];

    // Get the size of arr (number of elements in arr)
    int n1 = sizeof(arr) / sizeof(int);

    // Get the size of arr_2 (number of elements in arr_2)
    int n2 = sizeof(arr_2) / sizeof(int);

    // Display initial array 1 (arr)
    printf("\nInitial Array 1:\n");
    arr_dis(arr, n1);

    // Display initial array 2 (arr_2)
    printf("\nInitial Array 2:\n");
    arr_dis(arr_2, n2);

    // Removing the first element of arr by shifting the elements to the left
    for (int i = 0; i < n1 - 1; i++)
    {
        arr[i] = arr[i + 1];  // Move each element one position left
    }
    // Reduce the size of the array after deletion
    n1--;

    // Display updated array 1 after deletion
    printf("\nUpdated Array 1 (After Deletion):\n");
    arr_dis(arr, n1);

    // Inserting the removed element from arr to the front of arr_2
    for (int i = n2; i > 0; i--)
    {
        arr_2[i] = arr_2[i - 1];  // Shift elements in arr_2 to the right
    }

    // Place the deleted element from arr at the front of arr_2
    arr_2[0] = temp_0;

    // Increase the size of arr_2 after insertion
    n2++;

    // Display updated array 2 after insertion
    printf("\nUpdated Array 2 (After Insertion):\n");
    arr_dis(arr_2, n2);

    // Return 0 to indicate successful execution
    return 0;
}
