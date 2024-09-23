/*
Filename: _0050_quick_sort.c
Title: Quick Sort 
Author: Raghava | GitHub: @raghavtwenty
Date Created: September 23, 2024 | Last Updated: September 23, 2024
Language: C | Version: clang-14
*/

// Required imports
#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *n1, int *n2) {
    int temp = *n1;  // Store the value of n1 in a temporary variable
    *n1 = *n2;       // Assign the value of n2 to n1
    *n2 = temp;      // Assign the value stored in temp to n2
}

// Function to print the array elements
void print(int arr[], int size) {
    // Loop through the array and print each element
    for (int i = 0; i != size; i++) {
        printf("%d ", arr[i]);  // Print the current element
    }
    // Print a newline after the entire array has been printed
    printf("\n");
}

// Function to partition the array for the QuickSort algorithm
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Select the pivot element (last element of the array/subarray)
    int pointer = low - 1;  // Pointer to place elements less than the pivot

    // Traverse the array from the 'low' index to 'high-1'
    for (int i = low; i < high; i++) {
        // If the current element is less than the pivot
        if (arr[i] < pivot) {
            pointer++;  // Move the pointer for smaller elements
            swap(&arr[pointer], &arr[i]);  // Swap the current element with the element at 'pointer'
        }
    }

    // Swap the pivot element with the element at 'pointer+1' so that the pivot is in its correct position
    swap(&arr[pointer + 1], &arr[high]);
    // Return the index of the pivot element
    return pointer + 1;
}

// Recursive function to apply QuickSort
void quicksort(int arr[], int low, int high) {
    if (low < high) {  // Base condition: QuickSort is applied only if there are two or more elements
        // Partition the array and get the pivot index
        int part_index = partition(arr, low, high);

        // Recursively apply QuickSort on the left subarray (elements smaller than the pivot)
        quicksort(arr, low, part_index - 1);

        // Recursively apply QuickSort on the right subarray (elements larger than the pivot)
        quicksort(arr, part_index + 1, high);
    }
}

// Main function
int main() {
    // Declare and initialize the array with unsorted values
    int arr[] = {10, 5, 0, 65, 21, 32};
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Apply QuickSort to the entire array
    quicksort(arr, 0, size - 1);

    // Print the sorted array
    print(arr, size);

    // Return 0 to indicate successful execution
    return 0;
}
