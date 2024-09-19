/*
Filename: bubble_sort.c
Title: Bubble Sort Algorithm Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 19, 2024 | Last Updated: September 19, 2024
Language: C | Version: clang-14

Description:
This program implements the bubble sort algorithm to sort an array of integers.
It includes functions to display the array before and after sorting. The bubble
sort algorithm repeatedly steps through the list, compares adjacent elements, and 
swaps them if they are in the wrong order. This process is repeated until the list is sorted.
*/

// Importing required libraries
#include <stdio.h>

// Function to perform bubble sort on the array
void bubbleSort(int array[], int size)
{
    // Outer loop for each pass through the array
    for (int step = 0; step < size - 1; ++step)
    {
        // Inner loop for comparing adjacent elements
        for (int i = 0; i < size - step - 1; ++i)
        {
            // Swap if the current element is greater than the next element
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int array[], int size)
{
    // Iterate over the array and print each element
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    // Print a newline for formatting
    printf("\n");
}

// Main function: Entry point of the program
int main()
{
    // Declare an array of integers to be sorted
    int data[] = {-2, 45, 0, 11, -9};

    // Determine the size of the array
    int size = sizeof(data) / sizeof(data[0]);

    // Call the bubbleSort function to sort the array
    bubbleSort(data, size);

    // Inform the user that sorting is completed
    printf("Sorted Array in Ascending Order:\n");

    // Display the array after sorting
    printArray(data, size);

    // Return 0 to indicate successful execution
    return 0;
}
