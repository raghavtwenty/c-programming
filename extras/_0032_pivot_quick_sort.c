/*
Filename: _0041_quick_sort.c
Title: Quick Sort Algorithm Implementation with Custom Pivot
Author: Raghava | GitHub: @raghavtwenty
Date Created: October 10, 2024 | Last Updated: October 10, 2024
Language: C | Version: clang-14

Description:
This program implements the Quick Sort algorithm, which is a highly efficient sorting technique using the divide-and-conquer approach. 
A custom pivot is chosen by the user, which is then placed at the end of the array. The array is partitioned into elements smaller and greater than the pivot. 
Recursive sorting is applied to the sub-arrays on either side of the pivot until the array is sorted.
*/

// Importing Required Libraries
#include <stdio.h>

// Function to print the array at different stages
void print(int a[], int len);

// Function to swap two elements in the array
void swap(int *a, int *b) {
    // Store value of *a in a temporary variable
    int t = *a;
    // Set *a to *b's value
    *a = *b;
    // Set *b to the temporary value (original *a)
    *b = t;
}

// Function to find the partition position
int partition(int arr[], int low, int high, int len) {

    // Select the rightmost element as the pivot
    int pivot = arr[high];

    // Pointer for the greater element, initialized to low - 1
    int i = (low - 1);

    // Traverse each element of the array and compare it with the pivot
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {

            // Display details of the current pivot, low, and high values
            printf("Pivot: %d, Low: %d, High: %d\n", pivot, arr[low], high);

            // Increment the pointer for greater element
            i++;

            // Swap the current element with the element at i
            printf("\nSwapping elements: i = %d, j = %d\n", i, j);
            swap(&arr[i], &arr[j]);

            // Show the array after swapping
            print(arr, len);
        }
    }

    // Swap the pivot element with the element at i+1 (final pivot position)
    swap(&arr[i + 1], &arr[high]);

    // Return the partition point (final pivot position)
    return (i + 1);
}

// Quick Sort function to recursively sort the array
void quicksort(int arr[], int len, int low, int high) {

    // Base case: proceed only if low index is less than high index
    if (low < high) {

        int piv; // Variable to hold the partition index

        // Find the pivot element such that
        // elements smaller than the pivot are on the left
        // and elements greater than the pivot are on the right
        piv = partition(arr, low, high, len);

        // Show the partition index in the array
        printf("Partition index: %d\n", piv);

        // Recursive call to quicksort on the left of the pivot
        quicksort(arr, len, low, piv - 1);

        // Recursive call to quicksort on the right of the pivot
        quicksort(arr, len, piv + 1, high);
    }
}

// Function to print the array
void print(int a[], int len) {
    // Iterate through the array and print each element
    for (int i = 0; i < len; i++) {
        printf("%d,", a[i]);
    }
    printf("\n"); // Print a newline after displaying the array
}

// Main function
int main() {

    // Program header
    printf("\nQUICK SORT\n");

    // Variables
    int len, piv; // 'piv' is the index of the pivot chosen by the user
    

    // Ask the user for the length and elements of the array
    printf("\nHow many numbers (length) of the array: ") && scanf("%d", &n);

    // Initialize the array with user input
    int arr[n];

    // Insert values into the array
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i) && scanf("%d", &arr[i]);
    }


    // Predefined array of integers
    int arr[] = {56, 34, 6, 712, 45, 89, 4, 300, 34, 65, 43, 11};
    len = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    // Ask the user to select a pivot index
    printf("\nEnter the pivot index: ") && scanf("%d", &piv);

    // Swap the pivot element with the last element in the array
    swap(&arr[piv], &arr[len - 1]);
    printf("Pivot: %d\n", arr[piv]);

    // Display the array before sorting
    printf("\nArray before sorting:\n");
    print(arr, len);

    // Display sorting message
    printf("\nSorting...\n");

    // Call the Quick Sort function
    quicksort(arr, len, 0, len - 1);

    // Display the array after sorting
    printf("\nArray after sorting:\n");
    print(arr, len);

    return 0;
}
