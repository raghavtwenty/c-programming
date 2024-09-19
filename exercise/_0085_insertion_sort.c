/*
Filename: insertion_sort.c
Title: Insertion Sort Algorithm Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 19, 2024 | Last Updated: September 19, 2024
Language: C | Version: clang-14

Description:
This program implements the insertion sort algorithm to sort an array of integers.
It includes a function to display the array before and after sorting. The insertion
sort algorithm works by building a sorted portion of the array one element at a time, 
inserting each new element into its correct position relative to the already sorted elements.
*/

// Importing required libraries
#include <stdio.h>

// Function to print the array
void printArray(int* A, int n)
{
    // Iterate over the array and print each element
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    // Print a newline for formatting
    printf("\n");
}

// Function to perform insertion sort on the array
void insertionSort(int *A, int n)
{
    // Declare variables for the key element and index tracking
    int key, j;

    // Iterate through the array starting from the second element
    for (int i = 1; i <= n-1; i++)
    {
        // Store the current element as the key
        key = A[i];
        j = i - 1;

        // Shift elements of the sorted portion of the array to the right 
        // to make room for the key if they are greater than the key
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }

        // Insert the key into its correct position
        A[j + 1] = key;
    }
}

// Main function: Entry point of the program
int main()
{
    // Declare an array of integers to be sorted
    int A[] = {1, 29, 0, -45, -23, -9};

    // Determine the size of the array
    int n = 6;

    // Display the array before sorting
    printArray(A, n);

    // Call the insertionSort function to sort the array
    insertionSort(A, n);

    // Inform the user that sorting is completed
    printf("After insertion sort\n");

    // Display the array after sorting
    printArray(A, n);

    // Return 0 to indicate successful execution
    return 0;
}
