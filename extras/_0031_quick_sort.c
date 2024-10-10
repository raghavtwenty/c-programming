/*
Filename: _0031_quick_sort.c
Title: Quick Sort Algorithm Implementation
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 10, 2024 | Last Updated: October 10, 2024
Language: C | Version: clang-14

Description:
This program implements the Quick Sort algorithm to sort an array of integers.
The quick sort algorithm works by selecting a pivot element and partitioning the array such that 
all elements less than the pivot are placed to its left, and all elements greater are placed to its right.
This process is repeated recursively for the sub-arrays on either side of the pivot until the entire array is sorted.
The program prints the array before, during, and after sorting, showing the intermediate steps for better understanding.
*/

// Importing Required Libraries
#include <stdio.h>

// Function to print the array at different stages
void print(int a[], int len);

// Function to swap two elements
void swap(int *a, int *b) {
    int t = *a;  // Temporary variable to hold the value of *a
    *a = *b;     // Assign the value of *b to *a
    *b = t;      // Assign the original value of *a to *b
}

// Function to partition the array based on the pivot element
int partition(int arr[], int low, int high, int len) {

    // Select the rightmost element as pivot
    int pivot = arr[high];

    // Pointer for greater element, starts before the low index
    int i = (low - 1);

    // Traverse the array, compare each element with the pivot
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {

            // Display the pivot, low, and high during each comparison
            printf("pivot : %d , low : %d, high : %d\n", pivot, arr[low], high);

            // If the current element is smaller than the pivot, swap it with the element pointed by i
            i++;

            // Show the index of i and j before swapping
            printf("\ni : %d j : %d\n", i, j);
            swap(&arr[i], &arr[j]);

            // Show the array after each swap
            print(arr, len);
        }
    }

    // Swap the pivot element with the element at i+1 (final pivot position)
    swap(&arr[i + 1], &arr[high]);

    // Return the partition point (new index of the pivot)
    return (i + 1);
}

// Quick Sort function
void quicksort(int arr[], int len, int low, int high) {

    // Base case: if low is less than high, sort the sub-array
    if (low < high) {
        // Find the pivot index after partitioning
        int pi = partition(arr, low, high, len);

        // Display the partition index
        printf("Partition index : %d\n", pi);

        // Recursively sort the left sub-array
        quicksort(arr, len, low, pi - 1);

        // Recursively sort the right sub-array
        quicksort(arr, len, pi + 1, high);
    }
}

// Function to print the array at various stages
void print(int a[], int len) {
    // Iterate over the array and print each element
    for (int i = 0; i < len; i++) {
        printf("%d,", a[i]);
    }
    printf("\n"); // Print a new line after each array display
}

// Main
int main() {

    printf("\nQUICK SORT\n"); 

    // Variables
    int len; // To store the length of the array

    // Ask the user for the length and elements of the array
    printf("\nHow many numbers (length) of the array : ") && scanf("%d", &n);

    // Initialize the array based on user input
    int arr[n];

    // Take user input to populate the array
    for (int i=0; i<n; i++) {
        printf("Enter the %d element : ", i) && scanf("%d", &arr[i]);
    }


    // Predefined array of integers
    int arr[] = {56, 34, 6, 712, 45, 89, 4, 300, 34, 65, 43, 11};
    len = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    // Display the array before sorting
    printf("\nArray before sorting\n");
    print(arr, len);

    printf("\nSorting...\n");

    // Call the Quick Sort function to sort the array
    quicksort(arr, len, 0, len - 1);

    // Display the array after sorting
    printf("\nArray after sorting\n");
    print(arr, len);

    return 0;
}
