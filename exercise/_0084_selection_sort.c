/*
Filename: selection_sort.c
Title: Selection Sort Algorithm Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 19, 2024 | Last Updated: September 19, 2024
Language: C | Version: clang-14

Description:
This program implements the selection sort algorithm to sort an array of integers.
It includes functions to display the array before and after sorting. The selection
sort algorithm works by repeatedly selecting the smallest element from the unsorted 
part of the array and swapping it with the first unsorted element.
*/

// Importing required libraries
#include<stdio.h>

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

// Function to perform selection sort on the array
void selectionSort(int *A, int n)
{
    // Variable to store the index of the minimum element
    int indexOfMin, temp;

    // Inform the user that sorting is taking place
    printf("After selection sort...\n");

    // Iterate over the array, excluding the last element as it's already sorted
    for (int i = 0; i < n-1; i++)
    {
        // Assume the current element is the smallest
        indexOfMin = i;

        // Find the minimum element in the unsorted part of the array
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                // Update the index of the minimum element
                indexOfMin = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

// Main function: Entry point of the program
int main()
{
    // Declare an array of integers to be sorted
    int A[] = {3, 5, 2, 13, 12};

    // Determine the size of the array
    int n = 5;

    // Display the array before sorting
    printArray(A, n);

    // Call the selectionSort function to sort the array
    selectionSort(A, n);

    // Display the array after sorting
    printArray(A, n);

    // Return 0 to indicate successful execution
    return 0;
}
